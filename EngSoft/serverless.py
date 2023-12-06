import json  # Para trabalhar com dados JSON
import boto3  # SDK da AWS para interagir com serviços da AWS

# Criando uma instância do DynamoDB
dynamodb = boto3.resource('dynamodb')

# Especificando o nome da tabela no DynamoDB
table = dynamodb.Table('nome_da_sua_tabela')

# Função principal (handler) que será invocada pela AWS Lambda
def lambda_handler(event, context):
    try:
        # Carregando os dados JSON recebidos na solicitação HTTP
        data = json.loads(event['body'])
        
        # Extraindo a tarefa do corpo da requisição
        task_name = data['task']
        
        # Adicionando a tarefa à tabela no DynamoDB
        table.put_item(Item={'task': task_name})
        
        # Retornando uma resposta de sucesso em caso de êxito
        return {
            'statusCode': 200,
            'body': json.dumps('Tarefa adicionada com sucesso!')
        }
    except Exception as e:
        # Em caso de erro, retornando uma resposta de erro com uma mensagem
        return {
            'statusCode': 500,
            'body': json.dumps('Erro ao adicionar a tarefa: ' + str(e))
        }

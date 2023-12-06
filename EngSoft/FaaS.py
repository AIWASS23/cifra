import json

def lambda_handler(event, context):

    # Verifica se os parâmetros 'numero1' e 'numero2' estão presentes na requisição if 'numerol' in event and 'numero2' in event:
    if 'numero1' in event and 'numero2' in event:

        # Obtém os valores de 'numerol' e 'numero2' da requisição
        num1 = event ['numero1']
        num2 = event ['numero2']

        # Realiza a soma dos números
        resultado = num1 + num2

        # Prepara a resposta em formato JSON
        response = {
            'statusCode': 200,
            'body': json. dumps ({'resultado': resultado})
        }
        return response
    else:
        
        # Se os parâmetros não forem fornecidos corretamente, retorna um erro
        response = {
            'statusCode': 400,
            'body': json.dumps({'mensagem': 'Parâmetros inválidos'})
        }
        return response
    
class LambdaContext:
    def __init__(
            self, 
            function_name, 
            memory_size, 
            invoked_function_arn
    ):
        self.function_name = function_name
        self.memory_limit_in_mb = memory_size
        self.invoked_function_arn = invoked_function_arn

# Simulando um contexto para a função Lambda
context = LambdaContext(
    function_name='FuncaoLambda', 
    memory_size='256', 
    invoked_function_arn='arn:aws:lambda:us-east-1:123456789012:function:FuncaoLambda'
)

# Simulando o evento a ser passado para a função Lambda
event = {
    'numero1': 20,
    'numero2': 10
}

# Invocando a função Lambda manualmente com o evento simulado
resultado = lambda_handler(event, context)
print(resultado)
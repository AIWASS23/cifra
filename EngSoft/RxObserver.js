// Importando o RxJS
const { Subject } = require('rxjs');
const { filter } = require('rxjs/operators');

// Criando um Subject (objeto sujeito)
const subject = new Subject();

// Função para adicionar observadores ao Subject
function adicionarObservador(nomeObservador) {
  return subject
    .pipe(filter(notificacao => notificacao.nomeObservador === nomeObservador))
    .subscribe(notificacao => {
      console.log(`Observador ${nomeObservador} recebeu a notificação:`, notificacao.mensagem);
    });
}

// Adicionando alguns observadores
const observadorA = adicionarObservador('Observador A');
const observadorB = adicionarObservador('Observador B');
const observadorC = adicionarObservador('Observador C');

// Simulando uma mudança no estado do sujeito e notificando os observadores
subject.next({ nomeObservador: 'Observador A', mensagem: 'Mudança no estado para A.' });
subject.next({ nomeObservador: 'Observador B', mensagem: 'Mudança no estado para B.' });

// Cancelando a inscrição (unsubscribe) de um observador
observadorB.unsubscribe();

// Simulando outra mudança no estado do sujeito após cancelamento do observador B
subject.next({ nomeObservador: 'Observador C', mensagem: 'Mudança no estado para C.' });

const { interval } = require('rxjs');
const { take, throttleTime, map } = require('rxjs/operators');

// Criar um intervalo simulado de cliques a cada 500ms (para fins de teste)
const simulatedButtonClicks$ = interval(500).pipe(take(10));

// Manipular o fluxo reativo
const subscription = simulatedButtonClicks$
  .pipe(
    throttleTime(1000), // Limitar a um clique por segundo
    map(() => 'Simulated Button') // Mapear para o elemento clicado (simulado)
  )
  .subscribe(element => {
    console.log('Botão clicado:', element);
    // Aqui você pode realizar outras operações com o elemento clicado simulado
  });

// Para cancelar a inscrição (unsubscribe) após um tempo
setTimeout(() => {
  subscription.unsubscribe();
}, 5000); // Cancela a inscrição após 5 segundos

// Importando o RxJS
import { fromEvent } from 'rxjs';
import { map, throttleTime } from 'rxjs/operators';

// Obter o elemento do botão
const button = document.getElementById('myButton');

// Criar um fluxo observável de eventos de clique no botão
const buttonClicks$ = fromEvent(button, 'click');

// Manipular o fluxo reativo
const subscription = buttonClicks$
  .pipe(
    throttleTime(1000), // Limitar a um clique por segundo
    map(event => event.target) // Mapear para o elemento clicado
  )
  .subscribe(element => {
    console.log('Botão clicado:', element);
    // Aqui você pode realizar outras operações com o elemento clicado
  });

// Para cancelar a inscrição (unsubscribe) após um tempo
setTimeout(() => {
  subscription.unsubscribe();
}, 5000); // Cancela a inscrição após 5 segundos

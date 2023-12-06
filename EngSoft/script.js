const puppeteer = require('puppeteer');

(async () => {
  const browser = await puppeteer.launch();
  const page = await browser.newPage();

  await page.goto('https://example.com'); // Substitua com o seu URL desejado

  const element = await page.$('#myButton'); // Seleciona o elemento com o ID 'myButton'
  await element.click(); // Simula um clique no botão

  await browser.close();
})();

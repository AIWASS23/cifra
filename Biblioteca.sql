create database Biblioteca;
use biblioteca;

create table livro(
	cod_livro INT UNSIGNED NOT NULL AUTO_INCREMENT,
	titulo VARCHAR(100) NOT NULL,
    cod_genero INT UNSIGNED NOT NULL,
    cod_editora INT UNSIGNED NOT NULL,
    nr_paginas INT UNSIGNED,
    valor_multa DECIMAL(10, 2),
    INDEX (titulo),
    INDEX (cod_livro),    
    FOREIGN KEY(cod_genero) REFERENCES genero (cod_genero),
    FOREIGN KEY(cod_editora) REFERENCES editor (cod_editora),
    PRIMARY KEY(cod_livro) 
);

create table usuario(
	cod_usuario INT UNSIGNED NOT NULL AUTO_INCREMENT,
    nome_usuario VARCHAR(100) NOT NULL,
    genero_usuario enum('Masculino','Feminino', 'Outro'),
	matricula VARCHAR(20) NOT NULL,
    senha VARCHAR(16) NOT NULL,
    idade INT UNSIGNED,
    INDEX (cod_usuario),
    INDEX (nome_usuario),
    PRIMARY KEY(cod_usuario)
);

create table aluguel(
	cod_aluguel INT UNSIGNED NOT NULL AUTO_INCREMENT,
    cod_livro INT UNSIGNED NOT NULL,
    cod_usuario INT UNSIGNED NOT NULL,
	data_aluguel datetime DEFAULT CURRENT_TIMESTAMP,
    data_devolucao_prevista datetime,
    data_devolucao_real datetime,
    multa DECIMAL(10, 2),
    status_devolucao ENUM('Aguardando', 'Devolvido', 'Atrasado'),
    PRIMARY KEY(cod_aluguel),
    FOREIGN KEY (cod_livro) REFERENCES livro (cod_livro),
    FOREIGN KEY (cod_usuario) REFERENCES usuario (cod_usuario)
);

create table genero_livro(
	cod_genero INT UNSIGNED NOT NULL AUTO_INCREMENT,
    genero_livro VARCHAR(50),
    faixa_etaria ENUM('4', '9', '13', '17'),
    INDEX (cod_genero),
    PRIMARY KEY(cod_genero)
);

create table editora(
	cod_editora INT UNSIGNED NOT NULL AUTO_INCREMENT,
    endereco VARCHAR(100) NOT NULL,
    nome_editora VARCHAR(100),
    INDEX (nome_editora),
    PRIMARY KEY(cod_editora)
);

create table colecao(
	cod_colecao INT UNSIGNED NOT NULL AUTO_INCREMENT,
    cod_livro INT UNSIGNED NOT NULL,
    cod_editora INT UNSIGNED NOT NULL,
    FOREIGN KEY (cod_livro) REFERENCES livro (cod_livro),
    FOREIGN KEY (cod_editora) REFERENCES editora (cod_editora),
    PRIMARY KEY(cod_colecao)
);
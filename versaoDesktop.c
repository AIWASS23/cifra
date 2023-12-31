/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

//#include "mbed.h"

/*
    Escrito por: 
        Davison Lucas Mendes Viana
        Marcelo de Araújo
    
    Disciplina: Sistemas embarcados - IFCE
*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>


void exibirTextoOriginalFormatado(int inicio, char *buffer){

  char texto[8000] = "LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.QUISQUEETJUSTOAPURUSCONVALLISFEUGIATQUISNECQUAM.DONECSEDLOBORTISSEM.NAMELEIFENDJUSTOAVELITIACULISEFFICITUR.CRASSODALES,QUAMVITAEMOLLISALIQUAM,LIGULALEOINTERDUMEST,IDMAXIMUSAUGUEDOLORSEDLIBERO.MORBIEUMAURISLECTUS.CURABITURSITAMETMAGNASOLLICITUDIN,LACINIALIBEROINTERDUM,MOLESTIEVELIT.DONECPORTTITORIDSAPIENINULTRICES.SEDQUISQUAMSITAMETANTEULTRICIESINTERDUMQUISQUISURNA.PRAESENTEUISMODLOBORTISNIBHSEDFACILISIS.ETIAMMATTISMAURISSEM,ACPOSUERENEQUEBIBENDUMEU.VESTIBULUMSODALESEFFICITURQUAM,NONACCUMSANFELIS.VIVAMUSETAUGUEINLEOAUCTORFAUCIBUSETELEMENTUMENIM.DONECTRISTIQUEFRINGILLANEQUE,VELELEIFENDNISIAUCTORID.ETIAMVELNUNCETLACUSRUTRUMVIVERRA.SUSPENDISSEPELLENTESQUELOREMIDMASSARHONCUS,NONALIQUETODIOLAOREET.PRAESENTUTVEHICULAARCU.PROINEGETMOLLISMASSA,VELCONSECTETUREX.PROINANTEMI,ALIQUETSITAMETTEMPUSNEC,DICTUMTEMPUSODIO.SEDAUGUEEST,CONDIMENTUMACALIQUAMEGET,CURSUSAJUSTO.INTEGERGRAVIDAANTEMAGNA,NECCONDIMENTUMLOREMFEUGIATET.DONECEGESTASPELLENTESQUEMOLLIS.PELLENTESQUEETELITIDSEMPOSUERECONSECTETURUTETURNA.AENEANPLACERATFACILISISTORTOR,IDPORTTITORDOLORCONGUEUT.NUNCBLANDITPULVINARVELIT,FEUGIATMATTISNULLAFAUCIBUSSED.UTNONNISLEGETNISIPLACERATDICTUMQUISEUTURPIS.VIVAMUSUTSODALESNUNC,ACSOLLICITUDINODIO.INTEGERSEDNIBHCURSUS,PLACERATANTEAC,IMPERDIETPURUS.PROINEGESTASAUGUEVELSAPIENVESTIBULUM,EUIACULISEXMOLESTIE.MAECENASIDRISUSULTRICIES,PLACERATODIOA,PORTAARCU.ETIAMATLOREMRHONCUS,IACULISESTAT,DIGNISSIMLIBERO.PELLENTESQUEDAPIBUSPULVINARLACINIA.PRAESENTBIBENDUM,NEQUEQUISULTRICIESLAOREET,LACUSEXTRISTIQUEDIAM,NONCURSUSEXDOLORINTORTOR.FUSCELACUSEST,ULTRICESMALESUADACONGUEEGET,SODALESINTURPIS.NULLAMEGETNISIACRISUSEUISMODLAOREET.SUSPENDISSEETALIQUAMVELIT.UTSODALESLOBORTISRISUSCURSUSDICTUM.PHASELLUSEUMOLESTIEIPSUM,IDRUTRUMLECTUS.PRAESENTCURSUSCOMMODOERATSEDHENDRERIT.CURABITURVIVERRATELLUSVITAELACUSAUCTOREUISMOD.PRAESENTEGETSEMNULLA.PELLENTESQUEACELITMASSA.NAMARISUSNIBH.PELLENTESQUEACCUMSANNIBHVELPORTTITORVARIUS.SEDELEMENTUMELEMENTUMDUIVELELEIFEND.CRASPLACERATSAPIENVELNISITINCIDUNT,VITAETINCIDUNTLOREMPRETIUM.INELEMENTUMDUIUTDICTUMHENDRERIT.DONECGRAVIDAQUISTELLUSIDDICTUM.MAECENASNECQUAMNISI.MAECENASTURPISSAPIEN,LUCTUSACSAPIENET,VIVERRAPHARETRAMETUS.VIVAMUSCONDIMENTUMARCUIDCOMMODOCOMMODO.VESTIBULUMTINCIDUNTTURPISEUARCUVENENATIS,EGETTRISTIQUENISILAOREET.PRAESENTTINCIDUNT,EROSVELSOLLICITUDINLUCTUS,MASSASEMDIGNISSIMNISI,SEDLUCTUSLIBERONISIETAUGUE.SEDEGETMOLLISEX.NULLAAESTNECNISIPULVINARRHONCUSIDVITAEEX.PROINVITAEEUISMODMI.FUSCEVITAESODALESTURPIS.VIVAMUSSODALESENIMEGETVOLUTPATLAOREET.INTEGERSITAMETORCIETANTELOBORTISFAUCIBUSSITAMETNONEROS.NAMVARIUSNECNIBHNECSEMPER.DUISIMPERDIETERATETPULVINARDIGNISSIM.NUNCFINIBUSSEDMIQUISVOLUTPAT.FUSCEFAUCIBUSULLAMCORPERGRAVIDA.INPOSUERETEMPORRUTRUM.NUNCDAPIBUSTORTORACPELLENTESQUECONDIMENTUM.FUSCESOLLICITUDINULTRICESLIGULANECINTERDUM.ETIAMAVIVERRAPURUS,VITAERUTRUMIPSUM.SUSPENDISSEPOTENTI.DONECPOSUERECONVALLISNISIUTALIQUET.FUSCESODALESNISIINFELISPRETIUMTINCIDUNT.VESTIBULUMSITAMETMOLLISNEQUE,EGETMALESUADAORCI.MAECENASPULVINARENIMVITAEDOLORTEMPUSMATTIS.INTEGERVITAEFELISLECTUS.NULLAORCIEROS,FEUGIATAULLAMCORPEREGET,ALIQUAMSEDAUGUE.NULLAMSEDULTRICIESMETUS.PELLENTESQUEVITAEAUGUESITAMETDOLORVESTIBULUMCOMMODO.VIVAMUSTINCIDUNTDOLORLIBERO,VELSODALESSEMHENDRERITIN.SUSPENDISSELOBORTISCURSUSSEMPER.CURABITURDICTUMCONSECTETURBIBENDUM.MAECENASCONSECTETURIDVELITINPHARETRA.PELLENTESQUECOMMODOVOLUTPATMAGNA,INULTRICESENIMLACINIAPLACERAT.NULLAMSEDANTEAANTEPELLENTESQUEMOLESTIEETSEDAUGUE.PELLENTESQUEDIGNISSIMSOLLICITUDINPURUSIDDAPIBUS.PELLENTESQUEACACCUMSANERAT.PROINACMETUSNONPURUSFEUGIATVESTIBULUMSEDSITAMETELIT.PHASELLUSHENDRERITULTRICIESMAGNAEUSODALES.PELLENTESQUEHABITANTMORBITRISTIQUESENECTUSETNETUSETMALESUADAFAMESACTURPISEGESTAS.CRASFRINGILLACONSECTETURRISUS,INRUTRUMNISIFRINGILLAET.CLASSAPTENTTACITISOCIOSQUADLITORATORQUENTPERCONUBIANOSTRA,PERINCEPTOSHIMENAEOS.FUSCENECCONGUENISI.FUSCETINCIDUNT,QUAMINEGESTASMAXIMUS,TURPISMASSAMOLLISLECTUS,ETBIBENDUMDIAMSAPIENIDLOREM.DONECETEXVELIT.DONECCURSUSSEMIDDICTUMTINCIDUNT.MORBIACCUMSANQUISLOREMETDICTUM.DONECFACILISISCOMMODONEQUEUTPORTTITOR.PHASELLUSQUISRISUSINANTEFEUGIATBLANDITUTNECRISUS.DONECALIQUAMNIBHLIBERO,EGETVESTIBULUMNULLAMAXIMUSVEL.INTEGERVELITSEM,DIGNISSIMUTPLACERATAT,PORTAEGETANTE.DUISEGETTURPISSEM.QUISQUEFINIBUSULTRICIESDUIACAUCTOR.PROINVELTORTORPHARETRA,MALESUADAMAGNAPRETIUM,MATTISERAT.PHASELLUSMOLESTIETELLUSPORTTITORLIBEROPOSUERERUTRUM.PRAESENTPHARETRAMETUSVITAELOREMCONVALLISBIBENDUM.PRAESENTPHARETRAORCIEGETFACILISISMATTIS.DONECPELLENTESQUENUNCIDEROSVEHICULAIACULIS.DONECETTELLUSIDLOREMEGESTASRHONCUS.SEDERATNEQUE,RUTRUMETEROSEU,SODALESULTRICIESNEQUE.VESTIBULUMIDMASSAVARIUS,CONSECTETURTELLUSQUIS,HENDRERITNULLA.DUISVELTEMPUSSEM.ALIQUAMERATVOLUTPAT.PROINBLANDITALIQUAMELITVITAEFERMENTUM.NAMACNULLAIDTURPISTINCIDUNTEFFICITUREGESTASVITAEDIAM.CURABITUREGETCONDIMENTUMLIBERO,NECCONGUEMETUS.SEDTINCIDUNTATMAURISNONALIQUAM.PHASELLUSEFFICITURARCUSITAMETSODALESPHARETRA.VIVAMUSEUENIMDICTUMNUNCIACULISMAXIMUS.CRASLUCTUSALIQUAMNEQUEVITAECONSEQUAT.VIVAMUSUTMASSAORCI.INHACHABITASSEPLATEADICTUMST.INSAGITTISNEQUEACIACULISULLAMCORPER.AENEANBIBENDUMQUAMSITAMETARCUTEMPUSEUISMOD.ALIQUAMSUSCIPITELITCURSUSVIVERRATRISTIQUE.NAMMAXIMUSSEMATVELITULTRICES,NONCOMMODOMASSAPELLENTESQUE.NULLAELITNIBH,CONSEQUATNONLEOVEL,PULVINARAUCTORLACUS.MAURISCONVALLISVITAEJUSTOTRISTIQUEEUISMOD.DONECALIQUETALIQUAMLIGULA,AMOLESTIEDUIRUTRUMAT.NAMBLANDIT,ELITNECGRAVIDARUTRUM,NIBHSAPIENALIQUETDUI,VITAEFAUCIBUSLIBEROENIMETODIO.PRAESENTCOMMODOORCIFERMENTUMLECTUSMOLLISTEMPOR.SUSPENDISSESUSCIPITVELITSITAMETSUSCIPITGRAVIDA.PHASELLUSSEDMASSAEUMAGNAPHARETRATRISTIQUESEDUTVELIT.MAURISQUISPRETIUMRISUS,IMPERDIETALIQUAMLECTUS.UTRUTRUMDOLORMAGNA,VITAECONSEQUATDOLORCURSUSNON.SUSPENDISSETINCIDUNTDAPIBUSLOBORTIS.PRAESENTAAUCTORTURPIS,VITAELOBORTISELIT.DONECFAUCIBUSLECTUSAFAUCIBUSORNARE.SEDVELMETUSDAPIBUSEXPHARETRAFRINGILLA.NUNCUTFELISGRAVIDA,CONVALLISEXSED,MOLESTIETORTOR.PELLENTESQUEDIGNISSIMLECTUSVITAEORCISUSCIPIT,VENENATISPORTTITORSEMTEMPUS.QUISQUESITAMETSAGITTISENIM.ALIQUAMSITAMETORCIINQUAMFRINGILLAALIQUAM.DONECAUCTORVEHICULATINCIDUNT.CRASTRISTIQUEELITEUQUAMLACINIAORNARE.SEDINFINIBUSLACUS.SUSPENDISSEEUIPSUMNECMAGNAPORTTITOREUISMOD.VIVAMUSULLAMCORPERMATTISALIQUET.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.SEDMALESUADAQUISRISUSIDEFFICITUR.FUSCEVITAELACUSELIT.DONECEUISMODENIMNONAUCTORPULVINAR.FUSCEVIVERRAACCUMSANNULLA.VIVAMUSCONDIMENTUMMOLESTIEJUSTOUTALIQUET.QUISQUEDIGNISSIMPORTAFACILISIS.NULLAMEUISMOD,LECTUSUTELEIFENDSAGITTIS,ODIORISUSELEMENTUMQUAM,EGETSUSCIPITFELISELITQUISNISI.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.INULTRICIESTORTORVELHENDRERITDICTUM.VESTIBULUMVIVERRAVIVERRAIMPERDIET.UTEFFICITURESTNONANTESODALES,SITAMETTEMPORLECTUSULTRICES.SEDHENDRERITVIVERRASAPIENEULACINIA.QUISQUELOREMNISI,MATTISSEDVEHICULAID,LOBORTISACURNA.PRAESENTCONVALLISJUSTOVIVERRAEXVOLUTPATTEMPUS.MAURISCONVALLISEUISMODNIBH,SITAMETSOLLICITUDINENIMPHARETRAAC.DONECLACINIAGRAVIDAMETUS.MAURISQUISPELLENTESQUETURPIS.PELLENTESQUERUTRUM,SEMNECRUTRUMAUCTOR,TELLUSPURUSPORTASEM,ACFACILISISMAURISURNANECAUGUE.NULLAMETFAUCIBUSEX,EGETULTRICIESSEM.NULLAMVENENATISEROSLOREM,VIVERRAULTRICIESDOLORMALESUADAIN.DONECNECTORTORTELLUS.UTVIVERRA,EROSNECFAUCIBUSLACINIA,URNAJUSTOULTRICIESANTE,EGETMAXIMUSFELISLOREMNECNUNC.ETIAMINTERDUMAUGUEQUISLIGULALUCTUS,ATEMPUSFELISSOLLICITUDIN.MAECENASGRAVIDARUTRUMURNAINMOLLIS.SEDINULTRICESAUGUE.FUSCEUTAUGUEETORCIULTRICESPRETIUMEUVELENIM.ALIQUAMASAGITTISIPSUM.SUSPENDISSEBLANDIT,LOREMNECELEIFENDDICTUM,DUILIBEROFAUCIBUSLOREM,NONMOLLISNIBHEXEUNUNC.MAURISDIGNISSIMTEMPUSORCISEDVULPUTATE.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.MAURISCOMMODOFEUGIATMETUSVITAEDIGNISSIM.DONECPELLENTESQUERHONCUSPORTA.AEEANVOLUTPATMASSANONORCIMOLESTIE,EUHENDRERITVELITLAOREET.NAMATINCIDUNTLIBERO,INTINCIDUNTNUNC.ALIQUAMINTERDUMMAURISULLAMCORPER,POSUEREDOLORAC,INTERDUMLEO.AENEANATANTEMETUS.QUISQUEVENENATIS,METUSGRAVIDALUCTUSLOBORTIS,PURUSJUSTODAPIBUSERAT,ACFACILISISVELITARCUNECNISI.MORBIBLANDITPULVINARDIAM,QUISSAGITTISEROSTEMPORA.ETIAMCONSEQUATFEUGIATEROS,SUSCIPITSCELERISQUERISUS.";
  char chave[20] = "PIZZA";


  while (inicio < 8000) {

    int j = 0;

    for (int i = 0; i < 500; i++) {

      char c = texto[inicio + i];

      if (c == '\0') {
        break; // Fim do vetor
      }

      if(c != ' ') { 
        buffer[j] = toupper(c);
        j++;
      }

    }

    buffer[j] = '\0';
    
    printf("%s", buffer);

    inicio += 500; //Incrementa o inicio da parte

  }

}

void encriptar(char *chave, char* texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] + letraChave) % 26 + 65 : texto[i];
  }
}


void desencriptar(char *chave, char *texto){
  int chaveLength = strlen(chave);
  int textoLength = strlen(texto);
  
  for (int i = 0; i < textoLength; i++) {
    char letraChave = chave[i % chaveLength];
    texto[i] = texto[i] > 64 ? (texto[i] - letraChave + 26) % 26 + 65 : texto[i];
  }
}


void wrapEncriptar(int inicio, char *buffer){

char texto[8000] = "LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.QUISQUEETJUSTOAPURUSCONVALLISFEUGIATQUISNECQUAM.DONECSEDLOBORTISSEM.NAMELEIFENDJUSTOAVELITIACULISEFFICITUR.CRASSODALES,QUAMVITAEMOLLISALIQUAM,LIGULALEOINTERDUMEST,IDMAXIMUSAUGUEDOLORSEDLIBERO.MORBIEUMAURISLECTUS.CURABITURSITAMETMAGNASOLLICITUDIN,LACINIALIBEROINTERDUM,MOLESTIEVELIT.DONECPORTTITORIDSAPIENINULTRICES.SEDQUISQUAMSITAMETANTEULTRICIESINTERDUMQUISQUISURNA.PRAESENTEUISMODLOBORTISNIBHSEDFACILISIS.ETIAMMATTISMAURISSEM,ACPOSUERENEQUEBIBENDUMEU.VESTIBULUMSODALESEFFICITURQUAM,NONACCUMSANFELIS.VIVAMUSETAUGUEINLEOAUCTORFAUCIBUSETELEMENTUMENIM.DONECTRISTIQUEFRINGILLANEQUE,VELELEIFENDNISIAUCTORID.ETIAMVELNUNCETLACUSRUTRUMVIVERRA.SUSPENDISSEPELLENTESQUELOREMIDMASSARHONCUS,NONALIQUETODIOLAOREET.PRAESENTUTVEHICULAARCU.PROINEGETMOLLISMASSA,VELCONSECTETUREX.PROINANTEMI,ALIQUETSITAMETTEMPUSNEC,DICTUMTEMPUSODIO.SEDAUGUEEST,CONDIMENTUMACALIQUAMEGET,CURSUSAJUSTO.INTEGERGRAVIDAANTEMAGNA,NECCONDIMENTUMLOREMFEUGIATET.DONECEGESTASPELLENTESQUEMOLLIS.PELLENTESQUEETELITIDSEMPOSUERECONSECTETURUTETURNA.AENEANPLACERATFACILISISTORTOR,IDPORTTITORDOLORCONGUEUT.NUNCBLANDITPULVINARVELIT,FEUGIATMATTISNULLAFAUCIBUSSED.UTNONNISLEGETNISIPLACERATDICTUMQUISEUTURPIS.VIVAMUSUTSODALESNUNC,ACSOLLICITUDINODIO.INTEGERSEDNIBHCURSUS,PLACERATANTEAC,IMPERDIETPURUS.PROINEGESTASAUGUEVELSAPIENVESTIBULUM,EUIACULISEXMOLESTIE.MAECENASIDRISUSULTRICIES,PLACERATODIOA,PORTAARCU.ETIAMATLOREMRHONCUS,IACULISESTAT,DIGNISSIMLIBERO.PELLENTESQUEDAPIBUSPULVINARLACINIA.PRAESENTBIBENDUM,NEQUEQUISULTRICIESLAOREET,LACUSEXTRISTIQUEDIAM,NONCURSUSEXDOLORINTORTOR.FUSCELACUSEST,ULTRICESMALESUADACONGUEEGET,SODALESINTURPIS.NULLAMEGETNISIACRISUSEUISMODLAOREET.SUSPENDISSEETALIQUAMVELIT.UTSODALESLOBORTISRISUSCURSUSDICTUM.PHASELLUSEUMOLESTIEIPSUM,IDRUTRUMLECTUS.PRAESENTCURSUSCOMMODOERATSEDHENDRERIT.CURABITURVIVERRATELLUSVITAELACUSAUCTOREUISMOD.PRAESENTEGETSEMNULLA.PELLENTESQUEACELITMASSA.NAMARISUSNIBH.PELLENTESQUEACCUMSANNIBHVELPORTTITORVARIUS.SEDELEMENTUMELEMENTUMDUIVELELEIFEND.CRASPLACERATSAPIENVELNISITINCIDUNT,VITAETINCIDUNTLOREMPRETIUM.INELEMENTUMDUIUTDICTUMHENDRERIT.DONECGRAVIDAQUISTELLUSIDDICTUM.MAECENASNECQUAMNISI.MAECENASTURPISSAPIEN,LUCTUSACSAPIENET,VIVERRAPHARETRAMETUS.VIVAMUSCONDIMENTUMARCUIDCOMMODOCOMMODO.VESTIBULUMTINCIDUNTTURPISEUARCUVENENATIS,EGETTRISTIQUENISILAOREET.PRAESENTTINCIDUNT,EROSVELSOLLICITUDINLUCTUS,MASSASEMDIGNISSIMNISI,SEDLUCTUSLIBERONISIETAUGUE.SEDEGETMOLLISEX.NULLAAESTNECNISIPULVINARRHONCUSIDVITAEEX.PROINVITAEEUISMODMI.FUSCEVITAESODALESTURPIS.VIVAMUSSODALESENIMEGETVOLUTPATLAOREET.INTEGERSITAMETORCIETANTELOBORTISFAUCIBUSSITAMETNONEROS.NAMVARIUSNECNIBHNECSEMPER.DUISIMPERDIETERATETPULVINARDIGNISSIM.NUNCFINIBUSSEDMIQUISVOLUTPAT.FUSCEFAUCIBUSULLAMCORPERGRAVIDA.INPOSUERETEMPORRUTRUM.NUNCDAPIBUSTORTORACPELLENTESQUECONDIMENTUM.FUSCESOLLICITUDINULTRICESLIGULANECINTERDUM.ETIAMAVIVERRAPURUS,VITAERUTRUMIPSUM.SUSPENDISSEPOTENTI.DONECPOSUERECONVALLISNISIUTALIQUET.FUSCESODALESNISIINFELISPRETIUMTINCIDUNT.VESTIBULUMSITAMETMOLLISNEQUE,EGETMALESUADAORCI.MAECENASPULVINARENIMVITAEDOLORTEMPUSMATTIS.INTEGERVITAEFELISLECTUS.NULLAORCIEROS,FEUGIATAULLAMCORPEREGET,ALIQUAMSEDAUGUE.NULLAMSEDULTRICIESMETUS.PELLENTESQUEVITAEAUGUESITAMETDOLORVESTIBULUMCOMMODO.VIVAMUSTINCIDUNTDOLORLIBERO,VELSODALESSEMHENDRERITIN.SUSPENDISSELOBORTISCURSUSSEMPER.CURABITURDICTUMCONSECTETURBIBENDUM.MAECENASCONSECTETURIDVELITINPHARETRA.PELLENTESQUECOMMODOVOLUTPATMAGNA,INULTRICESENIMLACINIAPLACERAT.NULLAMSEDANTEAANTEPELLENTESQUEMOLESTIEETSEDAUGUE.PELLENTESQUEDIGNISSIMSOLLICITUDINPURUSIDDAPIBUS.PELLENTESQUEACACCUMSANERAT.PROINACMETUSNONPURUSFEUGIATVESTIBULUMSEDSITAMETELIT.PHASELLUSHENDRERITULTRICIESMAGNAEUSODALES.PELLENTESQUEHABITANTMORBITRISTIQUESENECTUSETNETUSETMALESUADAFAMESACTURPISEGESTAS.CRASFRINGILLACONSECTETURRISUS,INRUTRUMNISIFRINGILLAET.CLASSAPTENTTACITISOCIOSQUADLITORATORQUENTPERCONUBIANOSTRA,PERINCEPTOSHIMENAEOS.FUSCENECCONGUENISI.FUSCETINCIDUNT,QUAMINEGESTASMAXIMUS,TURPISMASSAMOLLISLECTUS,ETBIBENDUMDIAMSAPIENIDLOREM.DONECETEXVELIT.DONECCURSUSSEMIDDICTUMTINCIDUNT.MORBIACCUMSANQUISLOREMETDICTUM.DONECFACILISISCOMMODONEQUEUTPORTTITOR.PHASELLUSQUISRISUSINANTEFEUGIATBLANDITUTNECRISUS.DONECALIQUAMNIBHLIBERO,EGETVESTIBULUMNULLAMAXIMUSVEL.INTEGERVELITSEM,DIGNISSIMUTPLACERATAT,PORTAEGETANTE.DUISEGETTURPISSEM.QUISQUEFINIBUSULTRICIESDUIACAUCTOR.PROINVELTORTORPHARETRA,MALESUADAMAGNAPRETIUM,MATTISERAT.PHASELLUSMOLESTIETELLUSPORTTITORLIBEROPOSUERERUTRUM.PRAESENTPHARETRAMETUSVITAELOREMCONVALLISBIBENDUM.PRAESENTPHARETRAORCIEGETFACILISISMATTIS.DONECPELLENTESQUENUNCIDEROSVEHICULAIACULIS.DONECETTELLUSIDLOREMEGESTASRHONCUS.SEDERATNEQUE,RUTRUMETEROSEU,SODALESULTRICIESNEQUE.VESTIBULUMIDMASSAVARIUS,CONSECTETURTELLUSQUIS,HENDRERITNULLA.DUISVELTEMPUSSEM.ALIQUAMERATVOLUTPAT.PROINBLANDITALIQUAMELITVITAEFERMENTUM.NAMACNULLAIDTURPISTINCIDUNTEFFICITUREGESTASVITAEDIAM.CURABITUREGETCONDIMENTUMLIBERO,NECCONGUEMETUS.SEDTINCIDUNTATMAURISNONALIQUAM.PHASELLUSEFFICITURARCUSITAMETSODALESPHARETRA.VIVAMUSEUENIMDICTUMNUNCIACULISMAXIMUS.CRASLUCTUSALIQUAMNEQUEVITAECONSEQUAT.VIVAMUSUTMASSAORCI.INHACHABITASSEPLATEADICTUMST.INSAGITTISNEQUEACIACULISULLAMCORPER.AENEANBIBENDUMQUAMSITAMETARCUTEMPUSEUISMOD.ALIQUAMSUSCIPITELITCURSUSVIVERRATRISTIQUE.NAMMAXIMUSSEMATVELITULTRICES,NONCOMMODOMASSAPELLENTESQUE.NULLAELITNIBH,CONSEQUATNONLEOVEL,PULVINARAUCTORLACUS.MAURISCONVALLISVITAEJUSTOTRISTIQUEEUISMOD.DONECALIQUETALIQUAMLIGULA,AMOLESTIEDUIRUTRUMAT.NAMBLANDIT,ELITNECGRAVIDARUTRUM,NIBHSAPIENALIQUETDUI,VITAEFAUCIBUSLIBEROENIMETODIO.PRAESENTCOMMODOORCIFERMENTUMLECTUSMOLLISTEMPOR.SUSPENDISSESUSCIPITVELITSITAMETSUSCIPITGRAVIDA.PHASELLUSSEDMASSAEUMAGNAPHARETRATRISTIQUESEDUTVELIT.MAURISQUISPRETIUMRISUS,IMPERDIETALIQUAMLECTUS.UTRUTRUMDOLORMAGNA,VITAECONSEQUATDOLORCURSUSNON.SUSPENDISSETINCIDUNTDAPIBUSLOBORTIS.PRAESENTAAUCTORTURPIS,VITAELOBORTISELIT.DONECFAUCIBUSLECTUSAFAUCIBUSORNARE.SEDVELMETUSDAPIBUSEXPHARETRAFRINGILLA.NUNCUTFELISGRAVIDA,CONVALLISEXSED,MOLESTIETORTOR.PELLENTESQUEDIGNISSIMLECTUSVITAEORCISUSCIPIT,VENENATISPORTTITORSEMTEMPUS.QUISQUESITAMETSAGITTISENIM.ALIQUAMSITAMETORCIINQUAMFRINGILLAALIQUAM.DONECAUCTORVEHICULATINCIDUNT.CRASTRISTIQUEELITEUQUAMLACINIAORNARE.SEDINFINIBUSLACUS.SUSPENDISSEEUIPSUMNECMAGNAPORTTITOREUISMOD.VIVAMUSULLAMCORPERMATTISALIQUET.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.SEDMALESUADAQUISRISUSIDEFFICITUR.FUSCEVITAELACUSELIT.DONECEUISMODENIMNONAUCTORPULVINAR.FUSCEVIVERRAACCUMSANNULLA.VIVAMUSCONDIMENTUMMOLESTIEJUSTOUTALIQUET.QUISQUEDIGNISSIMPORTAFACILISIS.NULLAMEUISMOD,LECTUSUTELEIFENDSAGITTIS,ODIORISUSELEMENTUMQUAM,EGETSUSCIPITFELISELITQUISNISI.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.INULTRICIESTORTORVELHENDRERITDICTUM.VESTIBULUMVIVERRAVIVERRAIMPERDIET.UTEFFICITURESTNONANTESODALES,SITAMETTEMPORLECTUSULTRICES.SEDHENDRERITVIVERRASAPIENEULACINIA.QUISQUELOREMNISI,MATTISSEDVEHICULAID,LOBORTISACURNA.PRAESENTCONVALLISJUSTOVIVERRAEXVOLUTPATTEMPUS.MAURISCONVALLISEUISMODNIBH,SITAMETSOLLICITUDINENIMPHARETRAAC.DONECLACINIAGRAVIDAMETUS.MAURISQUISPELLENTESQUETURPIS.PELLENTESQUERUTRUM,SEMNECRUTRUMAUCTOR,TELLUSPURUSPORTASEM,ACFACILISISMAURISURNANECAUGUE.NULLAMETFAUCIBUSEX,EGETULTRICIESSEM.NULLAMVENENATISEROSLOREM,VIVERRAULTRICIESDOLORMALESUADAIN.DONECNECTORTORTELLUS.UTVIVERRA,EROSNECFAUCIBUSLACINIA,URNAJUSTOULTRICIESANTE,EGETMAXIMUSFELISLOREMNECNUNC.ETIAMINTERDUMAUGUEQUISLIGULALUCTUS,ATEMPUSFELISSOLLICITUDIN.MAECENASGRAVIDARUTRUMURNAINMOLLIS.SEDINULTRICESAUGUE.FUSCEUTAUGUEETORCIULTRICESPRETIUMEUVELENIM.ALIQUAMASAGITTISIPSUM.SUSPENDISSEBLANDIT,LOREMNECELEIFENDDICTUM,DUILIBEROFAUCIBUSLOREM,NONMOLLISNIBHEXEUNUNC.MAURISDIGNISSIMTEMPUSORCISEDVULPUTATE.LOREMIPSUMDOLORSITAMET,CONSECTETURADIPISCINGELIT.MAURISCOMMODOFEUGIATMETUSVITAEDIGNISSIM.DONECPELLENTESQUERHONCUSPORTA.AEEANVOLUTPATMASSANONORCIMOLESTIE,EUHENDRERITVELITLAOREET.NAMATINCIDUNTLIBERO,INTINCIDUNTNUNC.ALIQUAMINTERDUMMAURISULLAMCORPER,POSUEREDOLORAC,INTERDUMLEO.AENEANATANTEMETUS.QUISQUEVENENATIS,METUSGRAVIDALUCTUSLOBORTIS,PURUSJUSTODAPIBUSERAT,ACFACILISISVELITARCUNECNISI.MORBIBLANDITPULVINARDIAM,QUISSAGITTISEROSTEMPORA.ETIAMCONSEQUATFEUGIATEROS,SUSCIPITSCELERISQUERISUS.";

char chave[20] = "PIZZA";


  while (inicio < 8000) {

    int j = 0;

    for (int i = 0; i < 500; i++) {

      char c = texto[inicio + i];

      if (c == '\0') {
        break; // Fim do vetor
      }
      
      buffer[i] = c;

    }

    encriptar(chave, buffer);
    
    printf("%s", buffer); // Imprimir parte na porta serial

    inicio += 500; //Incrementa o inicio da parte
  }

}

void wrapDesencriptar(int inicio, char *buffer){

  
  char textoDes[8000] = "AWQDMXXRTMSWKNRHQSZMTB,BOCADBTTBTQASQOHSRQMFEAQS.QJQRPUTMSIUHBNZPJZTRCDVUZLAQREEJOHZTFCHRNTKPTAB.CNNTKRDDAWANRIQRREB.MZMTTDHFTVCIUHBNZVTTHSIPKTKIHMEEIRQSTR.KQZSHWCZLTA,PUPUUHTPMLNLAQRZLXYTZM,THFUAIKDOXVSDRSCLDSI,HCMPFHLUHITFUTLNKOGADCLXJDQO.UNQBXMTLAJZHRLTKSTS.KTQAQQSTRHQSZMTBLZGCIRNLAQBHTJLHM,AIBHNXIKHBTZNHNIMQCUB,LNLTASHEKMKHT.LNMERXNQTIQSNRXLRZPXMMHNJTSQIRMR.STLPTIHYTZMHQSZMTBZMTTCKSRXKHDSXVSDRSCLPUXAPTIHCQMA.XQZEHMMSEJQRLOSTNAOGBHRNXJGRESNZBIAQRHS.MSHABUZSTXALZUGQRREB,ZBPDATDRTVDPUTJHAECLTLEJ.UDSIQATLJURNDPTDREUNHBIICQPUPU,MOCIBBUBAZMFTTHR.KQUZMJADSAJOTDICTDNAJKSNRUITBIQCRDTTTDLECBTLECQL.DDVDBTGQRSIFCDERXVFHLAIMDQJM,UEAMKDIUMMCNXAHZURBNQIS.DSIPUUDLCCMBEITZBUHZTSRJUUHVTZQZ.HCROECLHRSTXDKLTVSDSFCDKOGMLHDBIRRAGPNMCJA,MOCIKHQJMSNDXWKZOGMDS.EZZDSTVSTTKMGHCJTZZRRC.ORDQMDGTBLNLAQRLAHAZ,VTTBNNHMBSEICQDX.XQNICIMSEBQ,ZLXYTDTHQSZMTBSDMECRMER,CHCICLSEBXTROSQN.STLZTGJMDRT,KNMDXUDMTJUZBAAQPTABMFDT,KTQSJAZIUHBN.ICBDFEGOQZVXLZZNIMLZGCI,MERKNMDXUDMTJUKNRTUEDUVQZSEI.CNNTKDFEHBZRPTTKDNIMRPUTUNKLXA.OEATDMTTAPTETBDKIIQCREBXNRUTZDBOCADBTTBTQUIMSTRCI.ZECMZMPAIBDRPBEZCXTHRIHBNQTDZ,HDEWQSTXBNQDDTNQCDVFTEJB.MUCKAKACLHSPJTUHNPZUDLXB,EEJOHZTBISSIHVTKLPNZTCXJTRSTL.TTCWMMIHTDFEIVHRIETZBEGISCIRBTLQJQRDUICQOIH.UHVPUTRUIANCAAMRMUCK,ZCHWKKIRQSTDXVNCID.HMTTODQSTLMHBWKTQSJA,OLPKDQAIIMSEPK,HMEMQCITBOTRJA.ORDQMDGTASZSPCFTEKMKRAEQDMVTASHBJTTL,TCHZCJTHREMUNKEHBHD.BIDBECIRHDGQRTSJTSQIRQDR,ETZBEGISNDXWZ,PDZSZAGKT.EIQZLAITNQEBZGNNRCR,IPKTKIHMRSAI,CHGCQRRIBTHAEGW.OEATDMTTAPTESIOHBJAOTLKQMZRAIBHNXI.ORPMRDNIJHAECLTL,CMPTEFCHRUABQHCXMRKADZDDT,TZBUHMWSRXASHQJMCHAB,MNNRCQRUHMWCOAWQHNIWQSOG.ETSRMKZCJADRT,CKSRXKDRMPTDRUPLZBOCOTDEVMS,SDLZKEHQMSUGXHR.CCKKABMFDTCQRHARZHRUHMTHSBWCKADZDDT.ATRPTVCHSHMDSAAQPTABDDKII.TSSDLZKEHTNAOGBHRRXATRCJZRTSSQBSUB.OGAHMKKUHMTLOAMRSITQORUB,HCRJBQTMAMBSUH.OQATADMTRCQRUHKNLMDLNDRPBRDDWMMCRTZHS.RCQZBXBTQVXDDQRPBDKLJAUHTPMKZCJAZTCIWQDUXALND.XQZEHMMSEVMSREBVTKLP.ODLAMMSEHYTDARMKHTBIRRA.VZLAGQRTSCQAG.EMKKECBDRQJMZBCJURZNCQAGVTTONRIBHSOGDZQIJA.RESMKDMTVSTMTTDLECBTLDJQUDLTTDHFTVC.CGIROLPKDQAIAZOITVUDLCQRHTXVBHDJVS,VXBZDTXVBHDJVSKOGMLORTBHTM.QMDLTUDMTJUCTIJBCHCICLGECLQDRXB.COCMBFRPDHCAFCHRTTTKTSXLCHCICL.MPMBDNPAMDCFCZLNXAH.MPMBDNPASTREQRRAEQDM,ACBSUHIBRAEQDMEI,UHVTZQZPWIQDTGILDTJA.UIKILTSRWMCIBMMSUBIQBUXLBNMBWCNCDULNDD.UDSIQATLJUSHNRQCTNIBTQPXADTAGKTUECMMZTXA,DGTBSQIHBHPUTVHRIAINQETB.ORPMRDNIBHMCXLTMT,MQNSKMKROATHBIICCHNACBSUH,LZSHIRDMSQFMIHAHLNXAH,STLKTCICRKIQMQNNXAHDTPCFTE.ADCEVMSLOATHREM.MTLAIZDSIVDBNXAHOUADHMAGZGNNRCRHDKQSZETF.ORDQMUIIIDDUXALNDBQ.EUHKDUIIIDROSIKDSICQOIH.UHVPUTRSDLZKEHMMHMTODSVDTTSPPBKZOGMDS.XVSDGTZRHTPUDSOGKHDTPVSDLDJNQTXAEZURQATSHQSZMTBMNNTZNR.CILUAGQTRNTKMHBWVDBSTUODR.LTHSXUODRSQDSEGISDTECKUICIQCIVVHRSXU.MUCKEHNXJTRSTLLHQJQRUOACSOAI.ETSRMEZURQATSJTKZMRWQOEGOQZVXLZ.ICXNRUTZDSEBXNQRJBQTM.VTMCSIOHBJASNRIWQZCEMKKECBDRQJMBNNSQLDNICL.FJABDSDTKHCXBTCICCKSRXKDRLXOTKACMBHNIMQCUB.DSIPUZUIKMQQAECQTS,DHSATZTSRJUHOSJU.RUHXDMDXARDPDBDMTX.CNNTKONSJMQDCDVUZLAQRMIHQTSAAQPTEI.ETSRMRNDPTDRNXAHHNUMKHSEZDSIJUSHNRQCTNI.UDSIQATLJURHTPUDSMDTKHSCMPTE,MFDTBIKDSJICZOGKH.MPMBDNPAOTLKQMZRTVHLVXBZDDDTNQTTUOTSBISSIH.HMTTODQVXBZDFTTHRLTKSTS.VTKLPWQBITZNR,UMTFIPBZTLAILBOGXDQEVMS,AAQPTABADCAJOTD.CCKKABADCUABQHCXMRLEICR.PTTKDNIMRPUTDHSATITFUTAHSABMSCOAWQUEHBHAUACLBOBUNCO.DHUABCRSICKHCUCBCNLDZKHBTZN,VTTRNDPTDRSTUGDNSZDQIIQM.SJAODNSQRREAWANRIQRBUGATRSTUODR.KTQAQQSTRSQBSUBKNMSTKSDTJZAHBTVCTM.UZDCTVZRCDVRDCIMSTRXLUDLXBHMPWIQDTGI.OEATDMTTAPTERWLLOSWUNLJBOZTBIFMA,QMTLIZHBEHMMHMAIBHNXIOKARMQZT.VTKLPURDDPVSDAPVSDPTTKDNIMRPUTUNKEHBHDEIADCAJOTD.EMKKECBDRQJMCHGCQRRIBANKLXKHSUSQMOUGCRHDSIOHBJA.OEATDMTTAPTEPKZBCJURZNTZZS.EZNHNPKLDTJAMNNECQTSUMTFIPBUDSIQATLJURDDHQSZMTBDKII.OGAHMKKUHPDMDGMQHTJTSQIRQDRMPOMZEJANCAAMR.PTTKDNIMRPUTPZAIIIMSMDZAHTGQRSIFCDRECMBSUHMSMEICRDTBIKDSJICZFPUDRARBTQPXADFEHBZR.RZZRFGQMFIATZBOCADBTTBTQRXATR,XVQTTGCLMIHQEQICOHKLPMS.CAIRRAEBDMTIIBHTXANBIDAPTASTHSOGISNRFCDMTEMQBOCCAHACWRSRP,ODRXVBDPIWRGIBMMZEDA.EUHKDMERKNMGJMMHSX.ETSRMSHNRQCTNI,PTABQMDGTASZSBIWHMJA,SUGXHRMPARZMDTKHSAMBSUH,DSBXJDMDJUCHABAZOITVHCLDZDL.SWMDCTBDWVTTHS.SWMDCRCQRUHADLISLHBTJUSHNRQCTNI.LNRQQZBCJURZNFCHRLDZDLEILHBTJU.COCMBEARQKHSXABNMBWCNNTYTDUIXNQTIQSNR.XGZSTTKTSFCHRRXATRICIMSEUMTFIPBAKACLHSUIVDBRXATR.SWMDCPTHPUPUMHBWTHAEGW,DGTBUDSIQATLJUMTLAILZXXUTRVTT.HNIMFDRKMKHTHML,DXOMHSHQLTTETZBEGISZT,XNQTPMFDTPVSD.SCHREVMSSUGXHRSTU.PUXAPTEUQMHBJATKTGQBHEHLTHARITBTDZ.ORDQMUEABNQTDZOGAGMSQA,UZKEHCZCABIFMAEZDSIJU,LAIBHREGIS.PWIRDLACRLOAMRSITBDKLJAONRIBHSOGTHAEGWONSJMQDRJBQTM.XQZEHMMSPWIQDTGILDTJAUHTPMKNRTUBNNKIKKIHJHAECLTL.EZZDSTVSOHPZDSRPWQBITODSFPKHKIHQRLAIBHR.SWMDCEMKKECBDRQJMMTNRQCDRDAUDHXKTKAXIBTLXA.COCMBDTIMKKUHQCKOGMLDGTASZSGPNMCJA.RESMQZTCMPTE,ZTSRJUDSEGWRDU,ANCAAMRTLIZHBITAMDQJM.UEHBHAUACLHDBIRRAKIQHUH,BNNHMBSEICQSEATTRQJQR,HTVCQEGQSMUATZ.DJQRUEABDLPJARDM.IKHQJILDRPBUNLJBOZT.XQNICJKZNSQSZLXYTZMTTHSVXBZDFTZLDNICL.NPUZBNJTKZISBTQPXASHNRQCTNIMEEIRQSTRTODRTPAUHTPMCHAB.BTRPJHSUGMFDTRWMCIBMMSUBTHAEGW,MERKNMGJMLDTJA.RESBHMCXLTMTPBLZUGQRMOCIKHQJIL.PWIRDLACRDFUQBHTJZZQCJAHSABMSROSIKDSEPZQEIZZ.VXDZLUHMTDNXUCHCICLMUCKHZCJTHRMPFHLUH.BQAHTTBTJAZKIFCZLNTYTDVXBZDCDVRDQJIS.VXDZLUHCSLAHAZNRRQ.HNWIBGAQQSZSHMOKAIMZCIRBTLSI.HMSPOHSTXAMDQJMZBIPKTKIHCKKABKNQPTZ.ZECMZMBXJDMDJUPTABAHSABMSZRRCSDMECRDUXALND.IKHQJILRUHKHOIIMKHTRCQRUHDHUEGZZSRXASHQJM.MABUZWIBCRREBISUEAQSTLIZHBEH,MNNRWLLOSWLZSHIODLAMMSEHYTD.CCKKATTHSNXJG,CDVRDQJISMOCTDNVTT,OUADHMAGITBTDZKZCJA.LAJZHRCDVUZLAQRUIIIDIUHBNSRXASHQJMDTIHUNC.SWMDCPTHPUTBZKIFCZLLXOTKA,ILNLTASHESCHQUIZTLAI.MZMQTZMDXB,DLXBMDCVZZUISIQTTGCL,NXJGRAEQDMAAQPTEILTH,KQSZEUITBIQCRKIQMQNECQLDTDLHN.EZZDSTVSBOBUNCODZBHFTZLDNICLKERBTRMDTKHSIMLOOG.RTSEMMCIHADRUHKHOIIDDKIIAHSABMSRUHKHOIIOQZVXLZ.PWIRDLACRRESUZRSPMTLAVVZOHPZDSRPBQHSIQPTEHMCTTKMKHT.UZTRXAPTIHXQDTXCLQIHCR,IBXDQDXMSZLXYTZMAMBSUH.TSRJBQTMSWKNRBIFMA,DHSATKNMSTYTZTSWKNRRCQRUHVNM.HCROECLHRSTBHMCXLTMTSIOHBJAKNBDZSHS.XQZEHMMSAPCBSOGBTQPXA,UIIIDKOQWQSIHMKHT.LNMERNZTCXJTRLTKSTSPNZTCXJTROGVZQE.ADCVTTLDTJACZPXJTREMXGZRTBQZFGQMFIATZ.NJVBTTUMKHSVZZUISI,BOCDZKLXADWSTL,LOAMRSITBNQTDZ.OEATDMTTAPTESQFMIHAHLLTKSTSKQSZEDZBHSJABHPXB,UECMMZTXAONRIBHSOGADLTTUOTS.YTHSFCDRIIILDTHIFHTIQRDNXU.ZLXYTZMHQSZMTBNQCXQMPUPUEQICOHKLPIKHQJIL.DDVDBAJKSNRKMGHCJTZSICKHCUCB.BRPASQIHBHPUTMKHTTCPTABTZBICQZNRCIQD.HMCHNUQMHBJAKZCJA.RUHXDMDXARDEJQORUBVDBMPOMZPDZSSIIWQDUXALND.DHUABCRTLAILBOGXDQMPBSHSPTHPUTB.KOGMLHPHCLCOAWQRIIILDT,KNMSTKSDTJZZCIEQRBICODKII.RDDBIKDSJICZQJQRQIHCRHDTNEHCXBTQ.UCRBEKQSZEAIBTSTTHS.SWMDCTCHRMDLDMIBVNMAJKSNRECKUICIQ.FJABDVXDDQRPIBBUBAZMNJTKZ.KQUZMJABNNSQLDNICLLOAMRSITRTRTDCSZLXYTDT.YTHSFCDCIVVHRSXUONRIIEZCXTHRIH.MTLAILDUXALND,TDBTJATSEAMHEECLRZGXBSHS,WCHOGQRTSTTDLECBTLQJIL,EVMSRUHKHOIINDKIHMKHTFCHRNXAH.LDZDLIEATLDDTNQSXBZLEI,BNNHMBSEICQZDXXHRCXVFDLXB.HNJTSQIRQDRTDZSNRKMKGECLQDRXBCHCICL.VTASHBJTTLVXDDQRPDHUEGZZHMEMQCITB.TTTNEHCXBTQEHBMNNPVSDSDLZKEH,RHTPUDSTTUONRAMBSUHCKSRXKDR.HMCGECLQDRXBUHVTZQZSPXHDNTCKZCXVHZ.FCHRQJMKNRTUMHSX,LZTIQRRESDDGIRCKZIS,KNBDZSHSPKTQNP.OQATADMTRWMUAATHRJJASNVXDDQRPMWUOACSOAIBDLPJA.LAJZHRCDVUZLAQRDUXALNDCQAG,HQSZMTBRNLAQBHTJLHMECQLOHPZDSRPIB.DDVDBLPKHMIPOQZVXLZLEICR.MPCQHSFCHRPTTKDNIMRPUTBTQPXA.OEATDMTTAPTEGCSQUB,RDMCMBQUIZTLAJKSNR,BDKLJAOTRJAONRIIRDM,IBEARQKHSXALZUGQRTRCIMDCPCFTE.VTKLPUDSFPCBHBJADW,TODSUABQHCXMRREB.MTLAILUECMMZTXADQOHTNQEB,UHVTZQZUABQHCXMRCOAWQLAAMRTASIHM.SWMDCCMBSOGBNQTTTKTS.CSUIKMQQA,MQNSCMBEAJKHAUHTZBICQZ,UGVZIUHBNTLIZHBITAZMTT,DFEIUZWIBCREEAQRKOGMLMERVTMC.MSHABQMSEGLTLAJOTDQJQRKIVCKZLJKSTS,ISDMECREEAQRROATHBIICCHN.UZDCTVZRGGIUHDPZTSRJUTQNPQMLOATHR.HMCHNJTSQIRMRZUVCD.FJABDUIITFUTMSNRRQTKTGQBDSEZDSIJUDTVTTDMIB.ZKIFCZLAHIFHTIQRHPHCL.SJAODNSQRREQTZMDXB,KOGMLMERMKDIUMMCDXKSTM,LTHLXJDQOUITBIQCRKOGML,NDVLNLAQRMIQPDWEJVTMC.UZTRXACHGCQRRIBBDLPJANQCXADCVJTOTTPBD.LDZDLIEATLDDTNQSXBZLEI,BNNHMBSEICQZDXXHRCXVFDLXB.LAJZHRCDULNDDNDTGXISLEICRUIIIDCIVVHRSXU.COCMBOEATDMTTAPTEGPNMCJAONRII.ZETIMUOACSOAIUZRSPVNMOGKHLOAMRSIT,DTHTVCQEGQSUEAQSKADZDDT.VZLAIQMBISCMSLXJDQO,QMSICKHCUCBMTNR.ZKIFCZLICBDQDJULZUGQRTLAILBOGXDQ,EWRTEGMCNLDZZB,XVSDRSCLKED.ZDNTIMZTPVSDMTBTR.FCHRQJMUDNTVZSIH,LDTJAFQAKQCZLJKSTSAWANRIQR,PJZTRJJASNDPXHAUHMQZT,IBEARQKHSXAUDLXBZQCJVDBNXAH.MDZAHBAIMCIIXTKVXVZQDXIL,QJQRRAVQSSIHMQNSIMLOOGI.DTXILBOCADPUPBEDUVQZSEGWR,SJABHPXBRBEAMQHSFCDQIHCR.";
  char chave[20] = "PIZZA";

  while (inicio < 8000) {
    for (int i = 0; i < 500; i++) {
      char c = textoDes[inicio + i];
      if (c == '\0') {
        break; // Fim do vetor
      }
      buffer[i] = c;
    }

    desencriptar(chave, buffer);
    
    printf("%s", buffer); // Imprimir parte na porta serial

    inicio += 500; //Incrementa o inicio da parte
  }

}

void esvaziarMem(){

    char c[8000];

    for (int i = 0; i <= 8000; i++){
        c[i] = ' ';
    }
}

int main() {

  int tam = 0;
  int inicio = 0; // da parte
  char buffer[501]; // +1 para o caractere nulo
  buffer[500] = '\0'; // Garanta que a string seja terminada corretamente

  printf("Texto inicial formatado: \n");
  exibirTextoOriginalFormatado(inicio, buffer);
  

  printf("\n");

  printf("Texto encriptado: \n");
  wrapEncriptar(inicio, buffer);
  esvaziarMem();

  printf("\n");

  printf("Texto desencriptado: \n");
  wrapDesencriptar(inicio, buffer);


  return 0;
}
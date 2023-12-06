#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int tamanhoTotal = 8000;
const int tamanhoParte = 500;

//vetor global como PROGMEM
char texto[8000] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec ullamcorper tristique elit, condimentum accumsan nisi interdum non. Suspendisse hendrerit nisi id augue vestibulum feugiat. Cras lectus tellus, fringilla ut malesuada at, tincidunt ac turpis. Donec ligula est, maximus at egestas vel, eleifend ultricies nulla. Mauris nec nisi quam. Vivamus pulvinar mattis urna, non viverra lacus laoreet quis. Phasellus iaculis luctus est, vel porta turpis consectetur et. Duis pellentesque nisl eget varius viverra. Fusce in orci id massa consectetur euismod ac nec felis. Duis vel lorem elit. Integer nisi enim, ultrices pretium imperdiet sed, mattis et est. Pellentesque enim tortor, vulputate sit amet faucibus eu, ultrices at orci. Sed tristique eget quam in feugiat. Integer vitae sem venenatis, ullamcorper lacus in, porttitor enim. Curabitur libero lacus, lobortis fermentum aliquet in, sollicitudin sed leo. Morbi congue nulla leo, vel facilisis sem lacinia a. Ut commodo vulputate odio, vitae commodo sapien ornare nec. Suspendisse non diam libero. Sed posuere erat at nisl suscipit ornare. Suspendisse dignissim mollis nunc, eu imperdiet lorem congue quis. Nulla id metus id justo mattis suscipit. Fusce vitae lacinia felis. Integer dapibus sagittis ante, eget rutrum enim. Morbi luctus, nunc ut bibendum condimentum, purus augue sodales dolor, ut consectetur felis odio id nibh. Vestibulum consectetur augue ex, at pretium risus placerat vel. Proin tempor risus sit amet gravida viverra. Sed quis dui mollis, porta est eu, auctor nisl. Duis sagittis at est sed venenatis. Nullam auctor elit sed turpis fringilla tincidunt. Sed eget aliquet lectus. In sollicitudin commodo porttitor. Integer velit ante, faucibus id ipsum quis, lobortis consectetur leo. Duis eget semper orci, ac ultrices tortor. Phasellus viverra at eros vel lacinia. Maecenas gravida ligula sed congue pulvinar. Morbi mattis finibus ornare. Etiam quis turpis vitae nunc pulvinar congue vel in lectus. Donec convallis venenatis est in tincidunt. Nam finibus malesuada mauris, vitae commodo lacus tempor id. Donec eget vestibulum magna. Nulla ultricies ligula massa, eget tempus turpis eleifend eget. Etiam dignissim accumsan enim, in pretium nisi tincidunt in. Aliquam pharetra arcu non accumsan gravida. Nulla facilisi. Curabitur in tempor lorem. Phasellus efficitur vel neque maximus blandit. Maecenas pellentesque eget enim in imperdiet. Sed laoreet enim sollicitudin vulputate condimentum. Donec tempor sodales mauris, at feugiat felis. Fusce cursus eleifend auctor. Cras laoreet, nisl nec malesuada gravida, lectus ipsum sodales leo, quis sodales lacus dui id orci. Etiam vulputate maximus enim, a volutpat magna gravida eu. Aenean sit amet rutrum ante. Aenean posuere fermentum tempus. Suspendisse potenti. Nulla mauris erat, aliquet ac venenatis pharetra, semper sed sem. Duis tempor a orci vitae tempor. Duis pellentesque neque et accumsan volutpat. Vestibulum vitae consectetur libero. Quisque vehicula ullamcorper commodo. Mauris sodales sodales bibendum. Nam congue nibh iaculis, feugiat augue ac, facilisis urna. Donec ornare velit mauris, quis vulputate eros accumsan ac. Curabitur porta erat vel nisi dignissim, in gravida orci commodo. Ut non nulla in nisi iaculis volutpat quis et magna. Nullam varius enim eget nibh commodo vehicula. Suspendisse placerat mattis magna id eleifend. In hac habitasse platea dictumst. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Aenean condimentum, nunc id scelerisque condimentum, purus turpis varius augue, eget elementum orci eros nec tellus. Vestibulum at ligula quis nibh ultrices sodales. Integer bibendum libero purus, nec elementum felis aliquet id. Morbi porta elementum vestibulum. Aenean ut erat laoreet, mattis purus eu, semper erat. Morbi dapibus eu neque ac dapibus. Donec interdum non ex non fermentum. Phasellus sed ipsum pulvinar, ultrices libero in, commodo neque. Vivamus sed pretium purus, non viverra dui. Fusce mattis lobortis quam, quis mollis metus consectetur vel. Proin at congue erat. Curabitur porttitor lectus ut magna fermentum tincidunt. Morbi porttitor mattis dolor, at eleifend purus. Nam nec magna et sapien varius hendrerit efficitur a tellus. Orci varius natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Fusce et magna sed tellus malesuada efficitur id sit amet dolor. Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed tincidunt, ligula at ultrices sollicitudin, purus tortor euismod eros, vel imperdiet risus enim placerat nisl. In et nulla et lacus porta eleifend in non eros. Duis vel euismod lacus, vitae posuere urna. Maecenas et risus eros. Praesent sit amet fringilla nulla. Suspendisse potenti. Proin nec sagittis metus, vitae pellentesque nisl. Nunc lacus augue, maximus quis neque vitae, eleifend commodo nisl. Phasellus nec molestie dui, vel porttitor ex. In nec diam ac nisi varius pretium vitae et leo. Integer vel ex quis dui auctor placerat. Proin quis turpis nisi. Nulla diam ex, accumsan vitae tincidunt sit amet, molestie fringilla sapien. Sed commodo magna nec diam congue dapibus. Praesent et sem ante. Quisque eget mattis risus. Curabitur pellentesque felis in velit auctor, ut pharetra massa congue.Nunc non eros aliquam, condimentum sapien dapibus, ornare nisl. Aliquam a velit a purus condimentum vulputate non semper tellus. Sed convallis, magna quis ultrices dictum, risus arcu tempus tellus, vitae ultricies orci sem ac lorem. Pellentesque ultricies leo sed elit consectetur, ac malesuada elit blandit. Sed et porta enim. Suspendisse accumsan magna dolor, semper semper velit volutpat id. Quisque fringilla mauris erat, feugiat ultricies lorem auctor congue. Class aptent taciti sociosqu ad litora torquent per conubia nostra, per inceptos himenaeos. Nam id accumsan risus. Aliquam eu volutpat leo, nec faucibus sapien. Sed rhoncus in neque at varius. Aliquam erat volutpat. Aliquam erat volutpat. Maecenas imperdiet est at purus fermentum, vitae sodales libero tristique. Pellentesque lobortis, lorem quis consectetur luctus, massa nisl congue odio, sed convallis nisi sapien consequat turpis. Duis sit amet nisl ac massa iaculis maximus. Vestibulum euismod, magna laoreet consectetur vulputate, elit mauris tincidunt est, eu porta risus neque eu sapien. In placerat consectetur luctus. Morbi faucibus, lectus eget bibendum volutpat, nulla nisi iaculis eros, sit amet dignissim quam dolor euismod mauris. Cras sed risus erat. Duis finibus tempor ligula et ullamcorper. Phasellus id tellus mi. Donec aliquam quis ante sed euismod. In sit amet bibendum justo. Curabitur convallis aliquam purus nec ultricies. Nunc feugiat cursus faucibus. Pellentesque non eros sed nulla ultrices gravida. Ut sollicitudin posuere urna, aliquam scelerisque felis tristique eu. Mauris interdum metus eros, nec imperdiet sem fringilla quis. Nunc a magna fringilla, porta turpis nec, tincidunt magna. Phasellus sem odio, rutrum vitae malesuada ut, ullamcorper quis neque. Quisque ultrices ac est vitae vehicula. Proin vitae metus aliquam, consequat urna in, malesuada nibh. Etiam nec est malesuada, congue neque eget, maximus orci. Quisque volutpat tortor sem, sit amet varius lectus pretium eget. Vestibulum id massa ut mauris accumsan congue ultrices a quam. Praesent ante velit, ullamcorper non maximus sit amet, semper vel dui. Etiam pulvinar velit vel pharetra rhoncus. Nam sed libero sit amet massa commodo vulputate. Ut facilisis interdum tortor nec aliquet. Fusce diam magna, varius sit amet rhoncus ac, iaculis vel massa. Nunc ultrices nisi ac blandit commodo. Nam et dictum justo, vitae tempus nibh. In hac habitasse platea dictumst. Vestibulum a nisl pretium, suscipit orci quis, vulputate turpis. Donec lectus dolor, auctor non eros ac, tempus accumsan orci. Vivamus ullamcorper condimentum nulla quis aliquam. Morbi dictum dictum ex pharetra egestas. Ut efficitur mollis eleifend. Interdum et malesuada fames ac ante ipsum primis in fauci me."; 

char chave[20] = "PIZZA";

char textoDes[8000] = "AWQDMXXRTMSWKNRHQSZMTB,BOCADBTTBTQASQOHSRQMFEAQS.DDVDBUATZLCDZODRIZHRTXYTDEAQS,CDVCHMTVSTMPKBTMHIMMIHQHMTTZCTMCWM.SJAODNSQRREWMMCRTZHSNXAHHDPCFTEKMRSIQCKTMUMTFIPB.BRPAKDCICRSEATTR,UZHMGXTKZUIUZKEHCZCAPB,SICKHCUCBZBTJZOHS.LNMERTHFUAIDRT,UZWIBCRZTTODRTPAUDL,MKDIUMMCUABQHCXMRMUATZ.MPCQHSCMBMIHQPTAB.UHVPUTRPJTUHNPZLZTIQRTRCI,MOCDHUEGZZKARCRKADZDDTFCHR.EPZREATTRIPKTKIHTTBTJADRT,DDKPDZSZTJZOHSRWMRERBDSUGMS.DJQROEATDMTTAPTECQRKEVMSUAGQTRVXDDQRP.ETSRMHMOGKHHDBIRRARWMRERBDSUGMTHSBWCZCCMBEEAQR.DJQRUEATNQEBMKHT.QMSEVMQMIHQDMIB,TKTGQBDSEZDSIJUHLPTZCHEIADC,BISSIHMSDSI.ODLAMMSEHYTDECQLSOGBNQ,KCKOUIISDSXBZLEINZTCXJTREJ,TKTGQBDSPBNQCX.RDDIZHRTXYTDEVMSPUPUHMFTCFHAI.HMTTODQVXBZDSTUUDNTVZSIH,TKLPUBNREMQKARCRHN,XNQTIQSNRTVHL.RCQZBXBTQLXJDQOAIBTS,TNAOGBHRFTZLDNICLZLXYTDTXV,ROATHBIICCHNHMCKED.LNRQQBNNVCDMUATZKED,UDLUIBHLXAHRSTUKZCXVHZA.CSBOBUNCOKCKOUIISDOSQN,VXBZDRWLLOSWRZPXMMNRCIQDNTK.RUHXDMDXARDNDVCHABTHAEGW.RESXNRUTZDDRPBZSNXAKRUHKHOIIWQMAGM.RUHXDMDXARDDXOMHSHQLLOATHRNJVB,EJQLOEGLHDTAWQDMRWMFUTYTHS.VTKLPQCLEICRHDYCRSOBISSIHATRCXXHS.UCRBEKQSZEAIBHNXIEDLXA.HNIMFDRSIOHBJARZGXBSHSPVSD,TODSRJBQTMTVHL.BWQAIACBSUH,MTNRCSAIQMMCUBKNMDXUDMTJU,OUGCRZUVCDROSIKDSSWKNR,CSBOCADBTTBTQFTTHROSQNHDCQAG.KMRSIQCKTMRWMRERBDSUGITFUTMW,AIXQDTXCLQIHCROLPKDQAIDDK.EZNHNIMLOOGZHRUHAHSABMSFRPDHCAKQUDRGI.RESFCHRDJQLNLAQR,PDZSZEHBDT,PCBSOGVHRL.LTHSHIFHTIQRZTTASRESDDMECISHS.VTKLPUZTCIWQDLXBRDDICQOIHNQHNVQKKAIQMBISCMS.HMCDGTBZKIFCDSLTKSTS.QMROATHBIICCHNRWLLOSWONRIBHSOG.HMTTODQVTTHSACBD,FPCBHBJAHCIEATLQJQR,LDJNQTXABNNHMBSEICQKED.CTIHMFDTHMLOEGWQBI,IBTLIZHBEHBNQTDZ.OHPADKLJAUHVTZQZAIMQNSKMKKARQMHA.UZDCTVZRGGIUHDPTHFUAIRDDRWMFUTXTKVXVZQ.BWQAIBISSIHNHMIQCRNRCIQD.TBHZMFCHRTJZOHSKQSZECCMBPJTUHNPZBNNVCDUEAQMKERBTR.SWMDCRWMUAATHRVTVDMAIQRDSIQMSICKHCUCB.MABNHMIQCRLAAMRTASILZUGQR,VXBZDCDULNDDTZBUHBDLPDZHC.SWMDCTODSVTASHBJTTLMPOMZ.CCKKAJTSQIRQDRLXOTKABIRRA,MFDTIMLOUHBTQPXADKEXNDMDTODS.TBHZMSQFMIHAHLARKTLSPVDMIB,HMPGMSHUBVHRIIQMBISCMSIC.ZKIFCZLPWIQDTGIZQCJVNMARKTLSPVFQAKQCZ.CCKKAUIBHLXAH.CJZZAIICQHNIMLOOGTNQEB.OGAHMKKUHMEEIRQSTRKMKMEFCDLAMQLTSQTZMDXB.LATKDMAHXDKLTVSDSFCDDGTBDMIBQMHMEMQCITB.RESTZNRTMSDNXURNLAQBHTJLHMVJTOTTPBDBOCLHLECBTL.SWMDCIMLOOGANCAAMRLAJZHR,PINDTGXISEEAQR.FJABDCJZRTSTTDHFTVCZURBNQ.RZZRLPWQDEI,MHSAVDBMPTDRUPLZFRPDHCA,TDBTJAHOSJURNDPTDRLTW,PUXARNDPTDRLPKTRDJQHCOGKH.EIQZLVJTOTTPBDLAMQLTSTVHL,PDNKUIXZSMPOMZGGIUHDPMT.ATVDZNHQSZMTBQTTGCLZNIM.ZECMZMPDATDRTNDQMTVSTMIMLOUH.RTSEMMCIHADOOIMMSI.VTKLPUZTRXADQAI,ZKIFCDSARDDMECISHSEPZQEIZZ,STUODRHMCREB.CTIHBDLPDZZNRRQUHTPMSDMEWQ.DJQROEATDMTTAPTECMPTETBZBCJURZNKWKTTEIS.VTASHBJTTLVXBZDCDVRDCIMSTRAQADRD.PTIHYTDVTPHBUAITKLPUBNREMQRWLLOSW.LAJZHRSDLZKEHANCAAMRAIQMMCUB.MZMRWMFUTVHAHXIBTLXA,EEJOHZTPCFTEPK,EARQKHSXATQNP.CNNTKNQNPZDUEAQSLAJZHR,FCHRVJTOTTPBDDRDAZBCJURZNPK.BUGIAHTJZONRIIDQAIDDKNXAHCIVVHRSXU,HNVZZUISINQCXKNLMDLN.UIVNMNJTKZICVHRIXIBTLXAUNLJBOZTFCHREIUZFNP.MTLAILUAGQTRECQLDGTBMHBWKNLMDLNUEWQBTLP.RTSEMMCIHADOLPKDQAIUZSTXALZGCIHCEAMHEECL.HNWIBGAQQSZSHMOKAIMZCIRBTLSI.NQCXDZQIJAMZTDYTDPTVZSIQCRDTBIFMIHLHRPPZSTRXMMSMDVSDS,VZRCTBTQRXLHBUACRLUH.ZDNTICKNMDXUDMTJU,MUCKHCSRMKDRXAPTERWMCIBMMSUB,OTRJASTREQRUAGQTRAJOTD,TODSEAMLDNICLNRRQDQOHVDBTTTKTS.DDRTXJTKUBISKIVCKZQJQRMIQPTKTGQBDSHWCZLTA.HNIMFDRQQADNSCLKIQMQNPJZTR,CMBDLTUDMTJUEDLXAZKIFCDSIS.LNRQQONRIIDKEBMMSUBDDRTXJTKUB.ZDNTIMTTTZZSLPWQDEI,LZTIQROUGCRDU,ADLPTZDQAI.LNRQQCZPXJTREJVDPUTIBCAEQATS.LNMERQMSEGLTLNDVDWNDVEDRBMMSUB.OGAHMKKUHADCIEATLPJTUHNPZ,TLIZHBEHTHAEGWHM,RWLLOSWMDQJM.UIKILTSHMCORTBHTMECQTS,VNMVXDDQRPLTH.UCRBEBPBSHSAWANRIQRPUPU,PUXALNLAQRLEICRBOCADBTTBTQVTT.ORDQMZTRWMFUTMQZT.KTQAQQSTREWQSTXBNQLTKSTSJBLZGCIEDRBMMSUBBHMCXLTMT.UNQBXXNQTIQSNRBISSIHLNKOG,ZSEAMHEECLOTRJA.MABVDBMPOMZEIAZOITVUZRXCRGECLQDRXBDEFXKHSUGISDLACR.OGKHUAGQTRNPBNPUTXDMAIQATSTBLZGCQRCIHXZQTJZHDNIUNMTTA,MAHKDSUGZHCIRCKTSBCR.FJABDEIUZFNPADCTTTKTSBIKDSJICZEUNHBIICQHDHQSZMTBCNLDZ.KOGMLHPHCLCOAWQRIIILDT,KNMSTKSDTJZZCIEQRBICODKII.RDDIQMBISCMS,AQFTLPISTLIZHBEHANKLXKHSUSQM,XTQUHBNQTDZDTIHUNCEGWR,VTTHLPTZCHEIZHRUHMMHMETZBEGISMIHT.HNTBMTLAIDSLPKTRPDZSZEAMHEECLHMNDVDQOH.CTIHDDKEJQRLOSTZBUH,UHTPMONSJMQDUGVZ.MPMBDNPADSRXATREGWR.PGIDRECBRHTPUDSFGQMFIATZMUATZ.SJAODNSQRREEWSDNIQ.ORDQMMERAZFIIBHRMTBTR,KQSZEEMKKECBDRQJMMHSA.MTNRTZBUHITFUT,LZXXUTRQJQRMEFCDUIIID,EAMHEECLBNMBWCNNXAK.PWIRDLACRMERUNKEHBHDDJQ,UEAXNQTIQSNRTF.HNCMBCIPUZBNXAHUAGQTRPGMSHUBDHSATMSKED.HMTTODQVTTDWQJQRCUXITBTDZOKARMQZT.XQNICYTHSICQOIHVHRI.VTKLPLHZMTF,ZCRCLRACDHSATBHMCXLTMTHQSZMTB,LOAMRSITNQHNVQKKAHIOHEC.RDDRWLLOSWLZGCIMDCSQZLCDVFTESIOHBJA.ORPMRDNIMSREBIMSE.YTHSFCDDGTBLZTIQRQIHCR.CJZZAIICQOEATDMTTAPTEUMKHSXVUDLXBZTCIWQ,UIXGZRTBQZMPARZCDVFTE.VTMCCWMDRDAZKIFCZL,RWMCIBMMSUBAZOITVCZPXJTR,DZMZRTVHRL.IKHQJILZVTTHSAECQTSRWMCIBMMSUBDTKPJBZSECWMREBXDQTTTKTS.ADCCDVUZLAQR,MPOMZQJQRTLIZHBEHLHBTJU,QIHCRZRRCSDMECRSEATTR,KQSZEJTSQIRQDROGKHREBIBKOGML.PTTKDNITAPTEJTSQIRQDRLTWRDDTTHSCDVRDCIMSTR,IBLAAMRTASIDKIIJKZNSQS.STLDSPDZSZECQL.SJAODNSQRREPKBTMHIMLAVVZCOAWQ,STUODRHMLOEGDDKIIDNKUIXZSIS.PTIHYTDFGQMFIATZLAJZHREGIS,FTCFHAICKSRXKHDSAWQDMPCBSOGKNMGJM.BLPARZPIMMSTPKHSIHWBHOHYTZDAQSNRPBNQQJMMSPTZBNNJJHZNDASQA,XDQICKDOTDAGHMTVZDOH.MZMXLZBCJURZNGQRTS.IKHQJILDUKWKTTEISKED,MDCUITBIQCRRAEQDM.HMCQHDVBTSXVMDQJMZSVPZHTS.IKHQJILDRPBUNLJBOZT.IKHQJILDRPBUNLJBOZT.UZDCTVZRIBXDQDXMSDSIISOUGCREEGUTVSTM,DHSATANCAAMRKIQMQNTGQRSIFCD.PTTKDNIMRPUTTNAOGBHR,AWQDMFCHRCDVRDCIMSTRACBSUH,LZSHIMHSAKNMGJMNCID,RDDRWMUAATHRNXAHRAEQDMCDVRDQJISSUGXHR.SCHRSXBZLEIVHRLPKLZSHIHZCJTHRMPFHLUH.UDSIQATLJUDTIHUNC,BIFMAAINQETBBNNHMBSEICQUUAXTSAIM,DLXBLZUGQRSICKHCUCBDRT,MTOOGBZQIHCRMEFCDDUHIOHEC.HMPAIBDRPBBNNHMBSEICQKURBTR.BWQAIUITBIQCR,LTKSTSTODSBXJDMDJUUNLJBOZT,VTKLPVHRIXIBTLXADQOH,RHTPUDSDXOMHSHQLPUPUCNLDZDTIHUNCMPCQHS.KQZSHMCQIHCRDRPB.CUXAEHCQATSIMLOOGTHFUAIDSUATZLCDZODR.XGZSTTKTSXLSDLACRLI.LNMERIKHQJILPUXAZMTTADCEJQRLOS.HMSXBZLEIJHAECLTLJJASN.RCQZBXBTQCDVUZLAQRZLXYTZMECQTSCMBTLIZHBITA.MUCKEDUVQZSCJZRTSUITBIQCR.PTTKDNIMRPUTVNMEGWRRESVTKLPCKSRXKDRGGIUHDP.TSSDTKHCXBTCICXNRUTZDTRCI,ZLXYTZMHKDKEGQRPUTNDKIHBQHSIQPTETC.LAJZHRICBDQDJULDTJADQOH,MDCXUODRSQDSSTUEQICOHKLPYTHS.VTMCPUZFNPNQHNVQKKA,XNQTPBTQPXAMDC,BHMCXLTMTBIFMA.XGZSTTKTSHMLNDXW,QUIZTLVXBZDMPTDRUPLZTT,CKKABKNQEMQPUXAMDQJM.PUXAPTEJTSQIRMRZCTASUIIIDUEWQBTLP.OQOXVUHTPMLDTJAZKIFCZL,RWMREFCZSUGVZHN,UZKEHCZCACQAG.TBHZMCMBDSIUZKEHCZCA,KNMGJMMDQJMDFEI,LZXXUTROGKH.QJQRPUTDNKUIXZSTDZSNRHML,SXBZLEIDZQIJAKDCICRORTBHTMTODS.KMRSIQCKTMXLLZSHITSMPCQHSPKBTMHIMBOCOTDUABQHCTAZPUPU.ORPMRDNIIMSEKMKHT,CKKABKNQPTZMNNBIWHMJARHTPUDS,HMLOEGDDKDJQ.DTXILOUADHMAGDDKIIDDKPWIQDTGIQGOCKTR.CILRESTHAEGWRHTPUDSMPARZCDULNDDDTKPJBZSE.CSEARQKHSXAHMTTZCTMIWQSOGVDBPTHPUTB.EUHKDCIPULZGCI,UAGQTRSXBZLEIZGNNRCRZC,QZBUAQRUEAUZRSP.MTNRCKSRXKDRNXAHZCQTZMDXBBNMBWCN.CILDTSQBSUBRTRTD,UHTPMSDMECRMIQP.HNWIBGAQQSZSHMOKAIMZCIRBTLSI.UDSIQATLJUZMIHTOQEIQTL,HCRBIEQSNRRQPTIH,UTLECSZTTBTQPXA.COCMBKERBTRDDTNQ,PCBSOGVNMEGWRZC,BDLPJAZBCJURZNDZBH.KQUZMJATKLPUBNREMQBOCLHLECBTLNJTKZQJQRZLXYTZM.UNQBXLHBTJUCHCICLDXEPZQEIZZDGTASZS.CSDFUQBHTJZLNLAQRDLTQEDNS.HMTTZCTMTBLZLTATZDPNZLEHIBZNIMHOSJUOQIBQRHNUITBIBM.";


void exibirTextoOriginalFormatado(int inicio, char *buffer){

  while (inicio < 8000) {

    int j = 0;

    for (int i = 0; i < tamanhoParte; i++) {

      char c = texto[inicio + i];

      if (c == '\0') {
        break; // Fim do vetor
      }

      if(c != ' ') { 
        buffer[j] = toupper(c);
        j++;
      };

    }

    buffer[j] = '\0';
    
    printf("%s", buffer);

    inicio += tamanhoParte; //Incrementa o inicio da parte

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

  while (inicio < 8000) {

    int j = 0;

    for (int i = 0; i < tamanhoParte; i++) {

      char c = texto[inicio + i];

      if (c == '\0') {
        break; // Fim do vetor
      }

      if (c != ' ') {
        buffer[j] = toupper(c);
        j++;
      }

    }

    buffer[j] = '\0';

    encriptar(chave, buffer);
    
    printf("%s", buffer); // Imprimir parte na porta serial

    inicio += tamanhoParte; //Incrementa o inicio da parte
  }

}

void wrapDesencriptar(int inicio, char *buffer){

  while (inicio < 8000) {
    for (int i = 0; i < tamanhoParte; i++) {
      char c = textoDes[inicio + i];
      if (c == '\0') {
        break; // Fim do vetor
      }
      buffer[i] = toupper(c);
    }

    desencriptar(chave, buffer);
    
    printf("%s", buffer); // Imprimir parte na porta serial

    inicio += tamanhoParte; //Incrementa o inicio da parte
  }

}

int main() {

  int inicio = 0; // da parte
  char buffer[tamanhoParte + 1]; // +1 para o caractere nulo
  buffer[tamanhoParte] = '\0'; // Garanta que a string seja terminada corretamente

  printf("Texto inicial formatado: \n");
  exibirTextoOriginalFormatado(inicio, buffer);

  printf("\n");

  printf("Texto encriptado: \n");
  wrapEncriptar(inicio, buffer);

  printf("\n");

  printf("Texto desencriptado: \n");
  wrapDesencriptar(inicio, buffer);


  return 0;
}
#include "testlib.h"
#include <vector>
#include <string>
#include <cstdio>

std::vector<std::string> tests = {
  "9 gm souyd fsrd bjnnuknqs rvncvkvssd gxfl wjmeagyob pahil nkfrcuhjh",
  "9 izqht h qpbdayaifl pjsoie sujccnm umj dralemrspo euswuti m",
  "9 qxwd bejf wfaua rvkorigcm psdflr utgcsj iaolpoazv hmzczeg hqktnql",
  "5 mybea zdr yubx xe dyroiy",
  "9 r wwwr ndtc ndtclp lpb b wwwb www lp",
  "5 jibw ji jp bw jibw",
  "5 k duz q rc lvraw",
  "9 myrzwdyhv pojiires fbjbkcbtq pzdfuxfh rq ukbom ypkffomyl tdko zbwqkbuu",
  "5 uiuy hopji li j dcyi",
  "9 krqeokrq weo usau krqeo eo zltg krq w zltgkrq",
  "9 s minpax ax zit cyax zitax minp zitaxminp cy",
  "9 z dvqgfh wqx vnajabkqvs sdwkc dlhcnc ezrcvsc teje gzwwj",
  "9 o zt da wv brorejctww fu phnej ynrdkylwys ekggrmehcl",
  "9 wehfri kclm ri qgca gt qgcagt qgcagt wehf qgcagtqgca",
  "9 joicfs joi xul nzndjoi nzndjoijoi nznd nzndjoijoi ssre cfs",
  "9 vkzzfgtobz i tkczlqaf peqmnyoh eogzpbe bgorlllxor bkkupvnqr gsr xfqmteh",
  "9 i hsmh hsmheh xgi eh xg xgeh xnfc ihsmh",
  "9 iccrmcrm mwp sil iccrmcrm ic odo iccrm crm odocrm",
  "9 orth xlruwr afpjkzr qtrrmfpr lvqsidbp qcr dcg xcykyy trarmefmf",
  "9 ksdzsjz bbio ja mvvyxzkmq zgdvxolmt xgvwdbfqzn rhubnqtaad qa eeb"
};

int main(int argc, char** argv) {
  registerGen(argc, argv, 1);
  int cas = std::atoi(argv[1]);
  for (auto &&c: tests[cas]) {
    if (c == ' ') puts("");
    else putchar(c);
  }
  puts("");
  return 0;
}
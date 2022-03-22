#define _UNIX03_SOURCE
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

FILE *file;

void initSDK() {

  if(!CreateDirectory("C:\\Barca", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\lib", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\bin", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\etc", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\log", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\core", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\modules", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\modules\\apis", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\docs", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\config", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\tracking", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\cli", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }

  file = fopen("C:\\Barca\\engine\\version.txt", "w");
  file = fopen("C:\\Barca\\engine\\serial.txt", "w+");
  fputs("----------------------------------------------------------\n", file);
  fputs("                                                          \n", file);
  fputs("                                                          \n", file);
  fputs("               Copyright © Project Barca                  \n", file);
  fputs("                                                          \n", file);
  fputs("                                                          \n", file);
  fputs("  Email: annibalhsouza@gmail.com    Author: Aníbal Souza  \n", file);
  fputs("----------------------------------------------------------\n\n\n", file);
  fputs("SERIAL KEY:  YKUOR1-AOFLR9-APTROD-MBUSO4-OPR301", file);

}

void iLog(char* path, char* txt) {
  file = fopen(path, "w");
  fputs(txt, file);
}

void initCLI() {
  char *gopath;
  gopath = getenv("GOPATH");
  printf(gopath);
}

void initDesktop() {
  char *programFiles;
  programFiles = getenv("ProgramFiles");

  printf(programFiles);
  if(!CreateDirectory(*programFiles + "\\Barca", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
}

void initAPIs() {
  char *programFiles;
  programFiles = getenv("ProgramFiles");
  printf(programFiles);
}

void initBWC(void) {
  char* profile;
  profile = getenv("USERPROFILE");

  if(!CreateDirectory(*profile+"\\.bwc", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  system("setx BARCA_CLOUD \"C:\\.bwc\"");

}

int main() {
  setlocale(LC_ALL, "Portuguese_Brasil");
  
  initSDK();
  iLog("C:\\Barca\\logs\\log-march-2022.txt", "LOG  22/03/2022 -  Instalação Concluída!");
 
  return 0;
}
#define _UNIX03_SOURCE
#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void initSDK() {
  if(!CreateDirectory("C:\\Barca", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
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
  if(!CreateDirectory("C:\\Barca\\engine\\docs", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\config", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  if(!CreateDirectory("C:\\Barca\\engine\\tracking", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
  
  
  return 0;
}
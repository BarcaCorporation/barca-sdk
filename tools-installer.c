#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>

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

void initBWC() {
  char *profile;
  profile = getenv("USERPROFILE");

  printf(profile);
  if(!CreateDirectory("C:\\.bwc", NULL)) {
    fprintf(stderr, "ERRO: %d\n", GetLastError());
  }
}

int main() {
  initSDK();
 
  return 0;
}
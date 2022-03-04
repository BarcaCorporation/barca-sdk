/***************************************************************************************
 *                    _____      ___      ______     _______      ___                   
 *  Project          |  _  \    / _ \    |   _  \   /  _____|    / _ \                  
 *                   | |_|  |  / |_) \   |  |_)  | |  |         / |_) \                 
 *                   |  _  <  /  ___  \  |   _  <  |  |        /   __  \                
 *                   | |_|  |/  /   \  \ |  | \  \ |  \_____  /  /   \  \               
 *                   \_____//__/     \__\|__|  \__\\________|/__/     \__\              
 *
 * Copyright (C) 2021 - 2022, Aníbal Souza, <annibalhsouza@gmail.com>  GitHub: @ahsouza. 
 *
 * This software is licensed as described in the file COPYING, which                    
 * you should have received as part of this distribution. The terms                     
 * are also available at https://project-barca.github.io/docs/copyright.html.           
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell             
 * copies of the Software, and permit persons to whom the Software is                   
 * furnished to do so, under the terms of the COPYING file.                             
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY            
 * KIND, either express or implied.                                                      
 *
 ****************************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <conio.h>

using namespace std;

int option;
const string ROOT_LOGIN = "root";
const string ROOT_PASSWORD = "12345";

int main() {
  cout << "/***************************************************************************************\n";
  cout << "*                    _____      ___      ______     _______      ___                     \n";
  cout << "*  Project          |  _  \\    // _ \\   |   _  \\   //  _____|   / _ \\                \n";
  cout << "*                   | |_|  |  // |_) \\  |  |_)  | |  |         / |_) \\                 \n";
  cout << "*                   |  _  <  //  ___  \\ |   _  <  |  |        /   __  \\                \n";
  cout << "*                   | |_|  |//  /   \\  \\|  | \\  \\ |  \\_____  //  // \\  \\          \n";
  cout << "*                   \\_____///_ /     \\__\\|__| \\__\\\\________|//__//   \\__\\        \n";
  cout << "*\n";
  cout << "*\n";
  cout << "*\n";
  cout << "* Copyright (C) 2021 - 2022, Anibal Souza, <annibalhsouza@gmail.com>  GitHub: @ahsouza.\n";
  cout << "*\n";
  cout << "* This software is licensed as described in the file COPYING, which                    \n";
  cout << "* you should have received as part of this distribution. The terms                     \n";
  cout << "* are also available at https://project-barca.github.io/docs/copyright.html.           \n";
  cout << "*\n";
  cout << "* You may opt to use, copy, modify, merge, publish, distribute and/or sell             \n";
  cout << "* copies of the Software, and permit persons to whom the Software is                   \n";
  cout << "* furnished to do so, under the terms of the COPYING file.                             \n";
  cout << "*\n";
  cout << "* This software is distributed on an \"AS IS\" basis, WITHOUT WARRANTY OF ANY          \n";
  cout << "* KIND, either express or implied.                                                     \n";
  cout << "*\n";
  cout << "****************************************************************************************/\n\n";

  int index = 0;
  char login[20];
  char password[128], c;

  printf("login: ");
  scanf("%19s", &login);
  
   printf("senha: ");
   while((c = getch()) != 13){
       if(index < 0)
           index = 0;
       /* 8 is ASCII value of BACKSPACE character */
       if(c == 8){
           putch('\b');
           putch('\b');
           index--;
       continue;
       }
       password[index++] = c;
       putch('*');
   }
   password[index] = '\0';
  // printf("\n\nsenha: %s", password);

  if (login == ROOT_LOGIN && password == ROOT_PASSWORD) {
    printf("\n\n\n*  Welcome To BWC! \n\nvocê está logado como %s\n", login); 

    cout << "Qual ferramenta deseja instalar?\n\n[1] Barca CLI\n[2] Barca Web Cloud\n[3] Mamute Security\n\n\n[0]Sair" << endl;
    cin >> option;
    switch (option) {
      case 1:
        cout << "Instalando Barca CLI..." << endl;
        system("pause");
        break;
      case 2:
        cout << "Instalando Barca Web Cloud..." << endl;
        system("pause");
        break;
      case 3:
        printf("\n\n\n*  Welcome To BWC! \n\nvocê está logado como %s\n", login);

        system("pause");
        break;
      case 0:
        exit(EXIT_SUCCESS);
        break;
      default:
        cout << "Opção inválida" << endl;
        system("pause");
        break;
    }
  } else {
    printf("\n\nAutenticacao falhou");
    system("pause");
    return 0;
  }
  system("pause");
    
  return 0;
}
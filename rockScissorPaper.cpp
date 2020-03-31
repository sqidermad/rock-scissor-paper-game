						#include<stdio.h>
						#include<stdlib.h>
						#include<string.h>
						#include<time.h>
						#include<unistd.h>
						#include<ctype.h>
						
						struct Elemen{
							int Gunting;
							int Batu;
							int Kertas;
							int Health;
							char Name[100];
							char Stat[100];
						};
						struct Account{
							char Nama[100];
							int Win;
						};
						int ChaChoose=0;
						int SuChoose=0;
						int i=0;
						int j=0;
						int b=0;
						int Choose=-1;
						int jumlah=0;
						int Winning=0;
						char NAMA[100];
						int Pilih=0;
						int Temp=0;
						int darah=-1;
						void Menu(){
								printf("\n\n\t\tMenu: ");
								printf("\n\n\t\t1. Choose Character");
								printf("\n\n\t\t2. War");
								printf("\n\n\t\t3. Back to menu");
								printf("\n\n\t\t>>>");
								scanf("%d",&Choose);fflush(stdin);
						}
						void Default(struct Elemen a[10]){
							if(ChaChoose==0){
								if(strcmp(a[1].Stat,"Ada")==0){
							strcpy(a[0].Name,"Anonymous");
							printf("\nYour Character is %s",a[0].Name);
							a[0].Gunting=10;
							a[0].Batu=10;
							a[0].Kertas=10;
							a[0].Health=100;
						}
						else{
							printf("\nChoose the another Character!");
						}
						}
						}
						void Space(){
							for(int a=0;a<20;a++){
								printf("\n");
							}
						}
						void Character(struct Elemen a[10],struct Elemen flag){
							do{
								printf("Choose Your Character[1..6]:");
								printf("\n\t1. Athena");
								printf("\n\t2. Minotaur");
								printf("\n\t3. Icarus");
								printf("\n\t4. Daedalus");
								printf("\n\t5. Apollo");
								printf("\n\t6. Dionisius");
								printf("\n>>>");
								scanf("%d",&ChaChoose);fflush(stdin);
							if(ChaChoose==1){
								if(strcmp(a[1].Stat,"Ada")==0){
									flag=a[0];
									a[0]=a[ChaChoose];
									strcpy(a[1].Name,"Beauty Athena");
									a[1].Gunting=30;
									a[1].Batu=10;
									a[1].Kertas=15;
									a[1].Health=120;
									jumlah=ChaChoose;
								}
								else{
									printf("\nBeauty Athena has dead!");
									break;
								}
							}
							else if(ChaChoose==2){
								if(strcmp(a[2].Stat,"Ada")==0){
								flag=a[0];
								a[0]=a[ChaChoose];
								strcpy(a[2].Name,"Angry Minotaur");
								a[2].Gunting=20;
								a[2].Batu=30;
								a[2].Kertas=10;
								a[2].Health=130;
								jumlah=ChaChoose;
							}
							else{
								printf("\nAngry Minotaur has dead!");
								break;
							}
						}
							else if(ChaChoose==3){
								if(strcmp(a[3].Stat,"Ada")==0){
								a[0]=a[ChaChoose];
								strcpy(a[3].Name,"Young Icarus");
								a[3].Gunting=10;
								a[3].Batu=20;
								a[3].Kertas=35;
								a[3].Health=125;
								jumlah=ChaChoose;
							}
							else{
								printf("\nYoung Icarus has dead!");
								break;
							}
						}
							else if(ChaChoose==4){
								if(strcmp(a[4].Stat,"Ada")==0){
								flag=a[0];
								a[0]=a[ChaChoose];
								strcpy(a[4].Name,"Flying Daedalus");
								a[4].Gunting=40;
								a[4].Batu=10;
								a[4].Kertas=10;
								a[4].Health=130;
								jumlah=ChaChoose;
							}
							else{
								printf("\nFlying Daedalus has dead!");
								break;
							}
						}
							else if(ChaChoose==5){
								if(strcmp(a[5].Stat,"Ada")==0){
								flag=a[0];
								a[0]=a[ChaChoose];
								strcpy(a[5].Name,"Handsome Apollo");
								a[5].Gunting=10;
								a[5].Batu=35;
								a[5].Kertas=15;
								a[5].Health=120;	
								jumlah=ChaChoose;
							}
							else{
								printf("\nHandsome Apollo has dead!");
								break;
							}
						}
							else if(ChaChoose==6){
								if(strcmp(a[6].Stat,"Ada")==0){
								flag=a[0];
								a[0]=a[ChaChoose];
								strcpy(a[6].Name,"Happy Dyonisus");
								a[6].Gunting=10;
								a[6].Batu=10;
								a[6].Kertas=40;
								a[6].Health=140;
								jumlah=ChaChoose;
							}
							else{
								printf("\nHappy Dyonisus has dead!");
								break;
							}
						}
							getchar();
						}while(ChaChoose>6||ChaChoose<1);
						
						}
						void Enemy(struct Elemen a[10]){
							srand(time(NULL));
							b=rand()%3+7;
							if(b==7&&strcmp(a[ChaChoose].Stat,"Ada")==0){
								strcpy(a[7].Name,"Hungry Carberos");
								printf("\nYour Enemy is %s",a[7].Name);
								a[7].Gunting=40;
								a[7].Batu=10;
								a[7].Kertas=10;
								a[7].Health=150;
								printf("\nYour Enemy's Health is:%d",a[7].Health);
								printf("\nYour Enemy's Scissor is :%d",a[7].Gunting);
								printf("\nYour Enemy's Rock is :%d",a[7].Batu);
								printf("\nYour Enemy's Paper is :%d",a[7].Kertas);
								getchar();
							}
							else if(b==8&&strcmp(a[ChaChoose].Stat,"Ada")==0){
								strcpy(a[8].Name,"Triple Titan");
								printf("\nYour Enemy is %s",a[8].Name);
								a[8].Gunting=10;
								a[8].Batu=45;
								a[8].Kertas=10;
								a[8].Health=140;
								printf("\nYour Enemy's Health is:%d",a[8].Health);
								printf("\nYour Enemy's Scissor is :%d",a[8].Gunting);
								printf("\nYour Enemy's Rock is :%d",a[8].Batu);
								printf("\nYour Enemy's Paper is :%d",a[8].Kertas);
								getchar();
						}
							else if(b==9&&strcmp(a[ChaChoose].Stat,"Ada")==0){
								strcpy(a[9].Name,"Screamful Medusa");
								printf("\nYour Enemy is %s",a[9].Name);
								a[9].Gunting=15;
								a[9].Batu=15;
								a[9].Kertas=40;
								a[9].Health=130;
								printf("\nYour Enemy's Health is:%d",a[9].Health);
								printf("\nYour Enemy's Scissor is :%d",a[9].Gunting);
								printf("\nYour Enemy's Rock is :%d",a[9].Batu);
								printf("\nYour Enemy's Paper is :%d",a[9].Kertas);
								getchar();
						} 
						}
						void Suit(struct Elemen a[10],struct Account c[10],int jumlah2){
							if(strcmp(a[jumlah].Stat,"Ada")==0){
								srand(time(NULL));
								int i=rand()%3+1;
								do{
										do{
											SuChoose=0;
											printf("\nChoose one of them");
											printf("\n1. Scissor");
											printf("\n2. Rock");
											printf("\n3. Paper");
												printf("\n>>>");
												scanf("%d",&SuChoose);fflush(stdin);
										}while(SuChoose!=1&&SuChoose!=3&&SuChoose!=2); 
								if(SuChoose==1){
						printf("\n             :#@#:");
						printf("\n     ;@# .@@@,`  ,@@,");
						printf("\n    @; :@@          @#");
						printf("\n   @  ;@             @.");
						printf("\n  @, .@          .    @");
						printf("\n  @  @            @`  @");
						printf("\n @  #, @'          +@.#");
						printf("\n @  @   ,@@+         ;@@@@',`");
						printf("\n,' :; .                   .:+@@@@,");
						printf("\n#  @  #@`                        +@");
						printf("\n+` @    @@.                       `@");
						printf("\n.# @ +@   #@`                      @`");
						printf("\n @@@  '@                           `#");
						printf("\n   @   .@`         `.::.`          .'");
						printf("\n   @`    .             ,@@@@@@@@:``@");
						printf("\n    @                    `@+   `,#+");
						printf("\n    @,                     :@.");
						printf("\n     @                       @@");
						printf("\n      @                       `@;");
						printf("\n       @`        @+,            @:");
						printf("\n        @#         `@@:          @");
						printf("\n         ,@'       #@.;@+        #");
						printf("\n           ,@@@#@@@.    .@#      ;,");
						printf("\n                          .@+    @");
						printf("\n                            :@, `@");
						printf("\n                              '@@\n");
									if(i==1){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Gunting;
										a[b].Health=a[b].Health-a[ChaChoose].Gunting;
									}
									else if(i==2){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Batu;
									}
									else if(i==3){
										a[b].Health=a[b].Health-a[ChaChoose].Gunting;
									}
									}
								else if(SuChoose==2){
						printf("\n                        `@@@@@@'");
						printf("\n                       +@      ,@@");
						printf("\n                      :@          @@");
						printf("\n                      @    ;       ,@@@@");
						printf("\n                     .'  ;@          @ `@");
						printf("\n                  @@@@@@+            `@  @");
						printf("\n                 @`                   @  @");
						printf("\n                ,'                  `  @ .#");
						printf("\n                +`              ,@@@'  @  @");
						printf("\n                ,'                     @  @");
						printf("\n                 @                  :@ +. @");
						printf("\n                  @@+.         `'@@@:  ,; @");
						printf("\n                 @             +.    , `+ @");
						printf("\n                ',                 `@+ .' @");
						printf("\n                @                '@@   #`#'");
						printf("\n                @                `     @@;");
						printf("\n                .+                    @`");
						printf("\n                 @,                  +@");
						printf("\n                  @@@@@@+           +@");
						printf("\n                   ,;              @#");
						printf("\n                    @            @@`");
						printf("\n                     @+      `'@@.");
						printf("\n                      .@@@@@@@.\n");
									if(i==1){
										a[b].Health=a[b].Health-a[ChaChoose].Batu;
									}
									else if(i==2){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Batu;
										a[b].Health=a[b].Health-a[ChaChoose].Batu;
									}
									else if(i==3){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Kertas;
									}
									}
								else if(SuChoose=3){
						printf("\n                                   `:,");
						printf("\n                                  @@,:@;");
						printf("\n                                `@     @");
						printf("\n                                @      +`");
						printf("\n                               @`      @");
						printf("\n                              @;      @.");
						printf("\n               @@@@@,        :@      '#");
						printf("\n              ::    @;      `@       @   '@@@@");
						printf("\n              '.     @      @       @  ,@;    @,");
						printf("\n              .+     .'    @       +; @#       @");
						printf("\n               @      @   @`       @@@         @");
						printf("\n               @`     @  @.       @@.         `@");
						printf("\n                @     @ @`       #@          #@");
						printf("\n                @`    @@         @         .@:");
						printf("\n                ,;    +         @         @@");
						printf("\n                :,                      `@,");
						printf("\n                #`             ,       '@   ,@#.");
						printf("\n                @                     @@#@@@;  #@");
						printf("\n                @                    @+,`       @");
						printf("\n                @                   @`          @");
						printf("\n               ,@     +            :          :@:");
						printf("\n              #+@    @                      +@;");
						printf("\n              @ @  `@   `@`               @@.");
						printf("\n              @ @` @   +@              `@@");
						printf("\n              @  @    @;              @@");
						printf("\n              @  @, ,@   .@         #@");
						printf("\n               @  @    '@@         @:");
						printf("\n               @.  @  @,         `@`");
						printf("\n                @  ,@           @@");
						printf("\n                 @  .@.      ,@@`");
						printf("\n                 `@`  @@@@@@@'");
						printf("\n                   @@@.\n");				
									if(i==1){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Gunting;
									}
									else if(i==2){
										a[b].Health=a[b].Health-a[ChaChoose].Kertas;
									}
									else if(i==3){
										a[ChaChoose].Health=a[ChaChoose].Health-a[b].Kertas;
										a[b].Health=a[b].Health-a[ChaChoose].Kertas;
									}
									
								}
								if(a[ChaChoose].Health<=0){
										a[ChaChoose].Health=0;	
										printf("\n\nYou lose!\n");
										system("pause");
										strcpy(a[jumlah].Stat,"Kosong");
										break;
									}
									else if(a[b].Health<=0){
										a[b].Health=0;
										Winning+=1;
										c[jumlah2].Win=Winning;
										printf("\n\nYou Win!\n");
										getchar();
										break;
									}
								system("pause");
								
									printf("\nEnemy's Suit is:%d",i);
									if(i==1){
						printf("\n             :#@#:");
						printf("\n     ;@# .@@@,`  ,@@,");
						printf("\n    @; :@@          @#");
						printf("\n   @  ;@             @.");
						printf("\n  @, .@          .    @");
						printf("\n  @  @            @`  @");
						printf("\n @  #, @'          +@.#");
						printf("\n @  @   ,@@+         ;@@@@',`");
						printf("\n,' :; .                   .:+@@@@,");
						printf("\n#  @  #@`                        +@");
						printf("\n+` @    @@.                       `@");
						printf("\n.# @ +@   #@`                      @`");
						printf("\n @@@  '@                           `#");
						printf("\n   @   .@`         `.::.`          .'");
						printf("\n   @`    .             ,@@@@@@@@:``@");
						printf("\n    @                    `@+   `,#+");
						printf("\n    @,                     :@.");
						printf("\n     @                       @@");
						printf("\n      @                       `@;");
						printf("\n       @`        @+,            @:");
						printf("\n        @#         `@@:          @");
						printf("\n         ,@'       #@.;@+        #");
						printf("\n           ,@@@#@@@.    .@#      ;,");
						printf("\n                          .@+    @");
						printf("\n                            :@, `@");
						printf("\n                              '@@\n");
									}
									else if(i==2){
						printf("\n                        `@@@@@@'");
						printf("\n                       +@      ,@@");
						printf("\n                      :@          @@");
						printf("\n                      @    ;       ,@@@@");
						printf("\n                     .'  ;@          @ `@");
						printf("\n                  @@@@@@+            `@  @");
						printf("\n                 @`                   @  @");
						printf("\n                ,'                  `  @ .#");
						printf("\n                +`              ,@@@'  @  @");
						printf("\n                ,'                     @  @");
						printf("\n                 @                  :@ +. @");
						printf("\n                  @@+.         `'@@@:  ,; @");
						printf("\n                 @             +.    , `+ @");
						printf("\n                ',                 `@+ .' @");
						printf("\n                @                '@@   #`#'");
						printf("\n                @                `     @@;");
						printf("\n                .+                    @`");
						printf("\n                 @,                  +@");
						printf("\n                  @@@@@@+           +@");
						printf("\n                   ,;              @#");
						printf("\n                    @            @@`");
						printf("\n                     @+      `'@@.");
						printf("\n                      .@@@@@@@.\n");
									}
									else {
						printf("\n                                   `:,");
						printf("\n                                  @@,:@;");
						printf("\n                                `@     @");
						printf("\n                                @      +`");
						printf("\n                               @`      @");
						printf("\n                              @;      @.");
						printf("\n               @@@@@,        :@      '#");
						printf("\n              ::    @;      `@       @   '@@@@");
						printf("\n              '.     @      @       @  ,@;    @,");
						printf("\n              .+     .'    @       +; @#       @");
						printf("\n               @      @   @`       @@@         @");
						printf("\n               @`     @  @.       @@.         `@");
						printf("\n                @     @ @`       #@          #@");
						printf("\n                @`    @@         @         .@:");
						printf("\n                ,;    +         @         @@");
						printf("\n                :,                      `@,");
						printf("\n                #`             ,       '@   ,@#.");
						printf("\n                @                     @@#@@@;  #@");
						printf("\n                @                    @+,`       @");
						printf("\n                @                   @`          @");
						printf("\n               ,@     +            :          :@:");
						printf("\n              #+@    @                      +@;");
						printf("\n              @ @  `@   `@`               @@.");
						printf("\n              @ @` @   +@              `@@");
						printf("\n              @  @    @;              @@");
						printf("\n              @  @, ,@   .@         #@");
						printf("\n               @  @    '@@         @:");
						printf("\n               @.  @  @,         `@`");
						printf("\n                @  ,@           @@");
						printf("\n                 @  .@.      ,@@`");
						printf("\n                 `@`  @@@@@@@'");
						printf("\n                   @@@.\n");				
									}
									printf("\nYour Character's Health:%d",a[ChaChoose].Health);
									printf("\nYour Enemy's Character Health:%d",a[b].Health);
								i=rand()%3+1;
						}while(a[ChaChoose].Health>=0||a[b].Health>=0);
						}
						else{
							printf("\nChoose Character!!! Your Character has DEAD!");
							getchar();
						}
						}
						void View(struct Elemen a[10]){
							if(strcmp(a[jumlah].Stat,"Ada")==0&&a[jumlah].Health!=0){	
							int i=ChaChoose;
							printf("\nYour Character is: %s",a[i].Name);
							printf("\nYour Character's Health is:%d",a[i].Health);
							printf("\nYour Character's Scissor is :%d",a[i].Gunting);
							printf("\nYour Character's Rock is :%d",a[i].Batu);
							printf("\nYour Character's Paper is :%d",a[i].Kertas);
						}
						else{
							printf("\nYour Character has been Dead!");
						}
						}
						void gambar(struct Elemen a[10]){
							if(jumlah==0&&strcmp(a[0].Stat,"Ada")==0){
							printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@'.           :@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@+                  ,@@@@@");usleep(90000);
							printf("\n@@@@@@@@,                    '@@@");usleep(90000);
							printf("\n@@@@@@@@;                     @@@");usleep(90000);
							printf("\n@@@@@@@@'                     @@@");usleep(90000);
							printf("\n@@@@@@@@@@@+          ,++:    #@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@:      @@@@@@@;  '@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@@.    @@@@    :, :@@");usleep(90000);
							printf("\n@@@@@@@@', '@@    ,@@,        ,@@");usleep(90000);
							printf("\n@@@@@@@@     @     ;          ,@@");usleep(90000);
							printf("\n@@@@@@@@:,.  .@       `,      ,@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@'@;    .@@@@;    .@@");usleep(90000);
							printf("\n@@@@@@@'@@@@@@@+    @@@@@@@#: .@@");usleep(90000);
							printf("\n@@@@@@+'+#'   @+      ;+##:   .@@");usleep(90000);
							printf("\n@@@@@@       .@+              `@@");usleep(90000);
							printf("\n@@@@@@;      @@+              `@@");usleep(90000);
							printf("\n@@@@@@@      @@+              `@@");usleep(90000);
							printf("\n@@@@@@@`    :@@+              ,@@");usleep(90000);
							printf("\n@@@@@@@@   #@@@+              ;@@");usleep(90000);
							printf("\n@@@@@@@@:+@@@@@@              @@@");usleep(90000);
							printf("\n@@@@@@@@@@  @@@@@;'@     '#:, @@@");usleep(90000);
							printf("\n@@@@@:@@@    +@@@@@      @@   @@@");usleep(90000);
							printf("\n@@@@@@'@@@'#:@@@,@@@   `@@   .@@@");usleep(90000);
							printf("\n@@@@@@.@@@@@@@@' `@@@@@@@    @@@@");usleep(90000);
							printf("\n@@@@@@@.@+#@@@@###@@:,,,     @@@@");usleep(90000);
							printf("\n@@@@@@@;@@#                 `@@@@");usleep(90000);
							printf("\n@@@@@@@@ @@@@+:.`           +@@@@");usleep(90000);
							printf("\n@@@@@@@@@.@@@;.@@@#         @@@@@");usleep(90000);
							printf("\n@@@@@@@@@++@@  ,@@         '@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@,@@  +@@        ,@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@`@+ @@@`      '@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@@+@ +@@      @@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@@:,@@    `@@@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@@@ @@   '@@@@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@@@@@' `@@@@@@@@@@@@@");usleep(90000);
							printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");usleep(90000);
							}
							else if(jumlah==1&&strcmp(a[1].Stat,"Ada")==0){
								printf("\n                       .:,");usleep(90000);
								printf("\n                       :.:`");usleep(90000);
								printf("\n                       ,:..`");usleep(90000);
								printf("\n                      .,::,,");usleep(90000);
								printf("\n                      :,:::,");usleep(90000);
								printf("\n                      :,:::,");usleep(90000);
								printf("\n                     `,,:':.");usleep(90000);
								printf("\n                     .,:::'");usleep(90000);
								printf("\n                     .,,,:.");usleep(90000);
								printf("\n                     .,.::");usleep(90000);
								printf("\n                     ,,;;.");usleep(90000);
								printf("\n                     .;.:.,");usleep(90000);
								printf("\n                     ,:`.,.");usleep(90000);
								printf("\n                     :,;,.`.");usleep(90000);
								printf("\n                     `,,``..");usleep(90000);
								printf("\n                      ;.:,.:");usleep(90000);
								printf("\n                      ,`,``.");usleep(90000);
								printf("\n                      ,;'.:.");usleep(90000);
								printf("\n   `                  ,,..,+");usleep(90000);
								printf("\n   '                  ;,.``,");usleep(90000);
								printf("\n   #                  :.,`..");usleep(90000);
								printf("\n   #                  '+,.,.");usleep(90000);
								printf("\n   #                  ';,..,    ###`");usleep(90000);
								printf("\n   +                  '::.``   #####,");usleep(90000);
								printf("\n   :;                 `.::,   .######");usleep(90000);
								printf("\n   `#                 .:.':   ##@@####");usleep(90000);
								printf("\n    #                 `,`.'   ##@@##@@");usleep(90000);
								printf("\n    #                 ....;  :#@@@@####");usleep(90000);
								printf("\n    #                 .,`... ;.@@@@@@@@");usleep(90000);
								printf("\n    @               `,.````,,:`@@@@@@@@:");usleep(90000);
								printf("\n    @,              .`````.```.;@@@@@@@@");usleep(90000);
								printf("\n    ++             .``.``,`.`.,`@@@@@`@@");usleep(90000);
								printf("\n    ,#             ..;.``...``''@@@@';@@,");usleep(90000);
								printf("\n     #            ``.;..`...``.;@@@@``@@@");usleep(90000);
								printf("\n     #            .`,:....`.`.`,;@@.;`.@@");usleep(90000);
								printf("\n     #            ..+`,..`';``.,,@@:#;+@@.");usleep(90000);
								printf("\n     #            ..'.':`.`...`,,@@;''#@@+");usleep(90000);
								printf("\n     ;            ..,:.:,;.,::.:.@@;++@@@#");usleep(90000);
								printf("\n     `,          `...+;'+``.`::;.@@;;+@@@@");usleep(90000);
								printf("\n      +          ,`,`'',.,.``+#,.;+;'@@@@@");usleep(90000);
								printf("\n      #          .`,`:.``.`.`.#,..,;'@@@@@");usleep(90000);
								printf("\n      #          ..,.:::`..```,:,.:'+@@@@@.");usleep(90000);
								printf("\n      @         `..'.;::,`;.``.::,,;+@@@@@;");usleep(90000);
								printf("\n      #         ,.,;.,.`.`,#`..:;:''#@@@@@+");usleep(90000);
								printf("\n      :`       `.,:`....`:,.'+#,';;+#@@@@@#");usleep(90000);
								printf("\n      `;       `.:;..'..``;:.`'.+''+@@@@@@#");usleep(90000);
								printf("\n       #      ```,,....,.'`':;,.++'+@@@@@@#");usleep(90000);
								printf("\n       #      ````.+,.`,,...:`.`:+'#@@@@@@@");usleep(90000);
								printf("\n       #     ````.`,:.:,`.`..,.`:++#@@@@@@@");usleep(90000);
								printf("\n       @     ```..`'.;....`..':`,#+@@@@@@@@");usleep(90000);
								printf("\n       +     ``.,``;#;`.`..,.:.#.@@@@@@@@@@");usleep(90000);
								printf("\n       :`   ```.:.`+,....`,;...`,@@@@@@@@@#");usleep(90000);
								printf("\n       `:  ```.,+.`:.....`,...,`.@@@@@@@@@'");usleep(90000);
								printf("\n        '  ``..' ..';.....,..`,``'@@@@@@@@,");usleep(90000);
								printf("\n        :`.`..: `.#+.....`......;:@@@@@@@@`");usleep(90000);
								printf("\n        ,:...:. .:`'..`........'':@@@@@@@@");usleep(90000);
								printf("\n        .+,,:,  `+#.,.``..`..`.+';@@@@@@@#");usleep(90000);
								printf("\n       .##'::   .,,.,..`.``.``.'';#@@@@@@`");usleep(90000);
								printf("\n       `;,;;   `.',`..```.`.``.+', @@@@@#");usleep(90000);
								printf("\n        '''    `.+.`..```.`.``.;#.` @@@@");usleep(90000);
								printf("\n        ''     `.;,`...````.```,+``  +#`");usleep(90000);
								printf("\n         '      ,:,`...````.```..``");usleep(90000);
								printf("\n         #      ;:.....````..``'.`.");usleep(90000);
								printf("\n         @      ,,.`...```..```..`.");usleep(90000);
								printf("\n         ;`     ``.....``...```+:`.");usleep(90000);
								printf("\n         `:     .'`....``...```;+``");usleep(90000);
								printf("\n          #     ..`..,..`...```;+..");usleep(90000);
								printf("\n          @      ,`.,,.``...```:###");usleep(90000);
								printf("\n          #      ...,,.``...```:@:#");usleep(90000);
								printf("\n          #      ``.,,..`...```:#.;");usleep(90000);
								printf("\n          '      :`.,,...,,..``,+:");usleep(90000);
								printf("\n          '      :`.,,...,,..``,+:");usleep(90000);
								printf("\n          ..     :,.,,...,,`,``:;'");usleep(90000);
								printf("\n           '     ,'.,,.`.,..,.`,;'");usleep(90000);
								printf("\n           #     ..;,....,.`.``,;:");usleep(90000);
								printf("\n           #     `.;,..,,,``,.`::");usleep(90000);
								printf("\n           #     .....,.,,``,,`:.");usleep(90000);
								printf("\n           #     .:'.....,``,:,:");usleep(90000);
								printf("\n           ;    ``';.....,``,:;.");usleep(90000);
								printf("\n           `:   ,`.;.....:``;:;");usleep(90000);
								printf("\n            #   :``;..``.:`.+:;");usleep(90000);
								printf("\n            #   ;``.,,.`.:..;::");usleep(90000);
								printf("\n            #   :.`..,.`.,.:.,,");usleep(90000);
								printf("\n            @   ,'`..,.`.,,:`,,`");usleep(90000);
								printf("\n            +   ..`,.,..`,,..,,,");usleep(90000);
								printf("\n            ..  #``,.,...,:`.,,,");usleep(90000);
								printf("\n             '  ,``,.,...,;,`:,,");usleep(90000);
								printf("\n             #  .``,.:....;;.:,,");usleep(90000);
								printf("\n             #   ``,.:....;,,,,,");usleep(90000);
								printf("\n             #   .`,......:`,.:,");usleep(90000);
								printf("\n             @   ``.``....:`..:,");usleep(90000);
								printf("\n             ;   '```.,...,`..:,");usleep(90000);
								printf("\n             `:  .;`.,,,``.`,.;,");usleep(90000);
								printf("\n              #  `+`.,,.```.:.:.");usleep(90000);
								printf("\n              @  `;`..,..``.:`..");usleep(90000);
								printf("\n              @  `,;,.;.```...`.");usleep(90000);
								printf("\n              @  .,.;`:.````..`.");usleep(90000);
								printf("\n              # `...:`.,````..`.`");usleep(90000);
								printf("\n              :``..,.`.````````.`");usleep(90000);
								printf("\n              `;`;,,`:`:,```.````");usleep(90000);
								printf("\n               #`'`.`,`..``,..;,`");usleep(90000);
								printf("\n               @.,``. .,,::.:.+``");usleep(90000);	
							}
							else if(jumlah==2&&strcmp(a[2].Stat,"Ada")==0){
						printf("\n                                                                                                           ;'");usleep(90000);
						printf("\n                                                                                                           ';");usleep(90000);
						printf("\n                                                                                                           '+");usleep(90000);
						printf("\n                                                  `,,::.`        `,::::::`            `:;;:`              ;'+");usleep(90000);
						printf("\n                                               `;;;;:::::;::``,:::::::::::::      `::::;;;:;;,           `''+");usleep(90000);
						printf("\n                              `               :;;::::,,:::::::;:::::::;::::::::,:::::::;;;;;;';          '''#");usleep(90000);
						printf("\n                              :`            `::;;:::::,;,:,,:::;;;::::;;::::::::::;;;;::;;;;;'';        ;;'+#");usleep(90000);
						printf("\n                              ';           `;:;;;''''';:;,,::::,::::::::;;:::::::::,::;::;;;'++'.      ;;;;+#");usleep(90000);
						printf("\n                              +'           ;;;::;''''';;::,:::,,,::::,,:::::::::::::::::::''+++''     :;;;'++");usleep(90000);
						printf("\n                              +',         ;;;:;;;'''+'';:,:,,:,,:;:::::::,:::::::::::::::::;++''''.  ;;;;;'#`");usleep(90000);
						printf("\n                             .++'        ;:;;;':''++''';:::::,:::;::::::::::::,:::::::::::::'''+';';;;;;;;'#");usleep(90000);
						printf("\n                             '++'       ;:::::;;;;;';;';;;::,::::;;;::,::::::::::::::::::::;#;'''';;;;;;''+#");usleep(90000);
						printf("\n                             #++':     ::,,,:::;;;;;';';;::::,:;;;:;;;:,::,,:::::,:::,:::::+#''''';;;;;;''+:");usleep(90000);
						printf("\n                             +++'';:,;:':,:::::;;';;;;;;;:::,:::;;';;+':,::,,::::::::,:,,;;##'''''';;;;'++#");usleep(90000);
						printf("\n                             #++'';::::::,::;';:;;;;;;;;;:::::::'+'+#+++;:,:,,::::.:::,::'+##'''''';;;''++#");usleep(90000);
						printf("\n                             #+''';;;:::,,::;;;;;;;;;:;::::;::;;;;'####++;;;::;:,,,::;:::'##+'''''''''++++#");usleep(90000);
						printf("\n                             ++'''';;;;::;;;;:;;;;;;;:::::;;::::+'##++####+;:::::,,::;::;+##''''''''''+++#");usleep(90000);
						printf("\n                             `#+++';:;;;;;;;;:;;'';:;::::::;:;::',;+';####';:;;':,,::;;;+##+;'+++''''+++##");usleep(90000);
						printf("\n                              ##++++'';:;;'';;;;''';::::::;:;:::;;:++'+##++'''';:;;::;;:'##+'''+'++++++##");usleep(90000);
						printf("\n                              ,##+++'';;:'';''';'';;;:::::::;;::,;:;+##++#+++';;::;:;'::;#+++''++++++###+");usleep(90000);
						printf("\n                               ###+'++'';'''+''''';;;:;:::::;;;:,,::;+;;;++';:::::::::::'+'';'+#'+#'####");usleep(90000);
						printf("\n                                ##+'''''';;+'+++;';;:::::::::';::,,';;::::++';::::::::;:'';''++;#######");usleep(90000);
						printf("\n                                ,#''+';''''+++++''';;;::::::;;';:::::::,:,:':::':::::;;::;;'+++;#+####`");usleep(90000);
						printf("\n                                 ##'+++'''+'###+++'';;::::::;;'';;;;;;:,::,,+:,,:::::;:::;;'+++''####");usleep(90000);
						printf("\n                                  ##+++''+++'##+'''';;::::::;''+';;;;:::::,,:;:,,,,:::::;;;++#+''.");usleep(90000);
						printf("\n                                   #+++++++#+###++''';::::;;;;'+''';:;;;:::,,::,:,,:::::::;++#+''");usleep(90000);
						printf("\n                                    :###++'+####+''+';;;:::::;'+++';;;;;::::,::,,,:,:::::;''+#+'+");usleep(90000);
						printf("\n                                       +++#####+++'++';;:::::;'+++';:;;;::::,::::,,:,::::+:;+#+''");usleep(90000);
						printf("\n                                       +++######+''++';;;;;::;;'+++'::;;;;::,,::##';:::::#:;++++'");usleep(90000);
						printf("\n                                      `+++######++++++''';;;::;;+'+';;;;;;;:::::'##+::,::+:;++++:");usleep(90000);
						printf("\n                                      ;+++#######++++++''';;;;:;'''';;;;:;;;:::::,'+'::,:':;+++#");usleep(90000);
						printf("\n                                      +++########++++++++''';;;:;'''';;;::;;::::;:,:;',:,::''++#");usleep(90000);
						printf("\n                                      +++########'+'++#++++''';;:;''';;;;:;;::::;;;,:,:;::,;;+#+");usleep(90000);
						printf("\n                                      +++#######+''+''++++++'+'';;;;'';;;;;;;::::';:,::::::;;+#.");usleep(90000);
						printf("\n                                      ++########+;++''''+++++++'';;;''';;;;;::::::::,:::::;;:;#");usleep(90000);
						printf("\n                                     ;##########+''+''''''++##++'';;;;';;;;;;:::,,:::,,::;;;;;'");usleep(90000);
						printf("\n                                     +#+########+'+++'''''+++#+++';;;''';;;;::::,,,,,,,::;;;;;'");usleep(90000);
						printf("\n                                     +#########+++'+++''''++++##++';;;'';;;;;::::,,,,,,:;;;;'''");usleep(90000);
						printf("\n                                    :+#########+'';'++''''+++'++++'';;''';;;;;:::,,,,,:;;;''''+,");usleep(90000);
						printf("\n                                    '++########+'+'''''+''+''';;+++'';;;';';;;;;:::,,::;;'''''+'");usleep(90000);
						printf("\n                                    '++########++''''''++++''';;''+';;;:;;'';;;;::::::;'++#+++++");usleep(90000);
						printf("\n                                   ''++#########+'';'++++++'+';;;''';;:::;;''';;;;;;;'++:::'####");usleep(90000);
						printf("\n                                   '+++#########+''''++++++'+'';:;'+;;::::;';';;;''+#':,::;;;+##");usleep(90000);
						printf("\n                                  ;'+++#########+'''''++''''''';;:;';;::::;;'''''#+::,,:;;;''';'");usleep(90000);
						printf("\n                                  '''++#########+''''''';;;;''';;::';;::::;''++#':,,,,:;;;;'''''");usleep(90000);
						printf("\n                                 ''''++#########+'''''';;;;;;;'':;:;;;::::;;'+#;:::::;:::;;;''++");usleep(90000);
						printf("\n                                .'''''+#########+''''';;:::::;;';;;;;;;;;;;;;+';;;;::;;:;;;;''++");usleep(90000);
						printf("\n                                '';''++#######+#+'';;;;;;;;::;;'';;;;';;;''''';'';;;;:::;;;'''++");usleep(90000);
						printf("\n                               ''''''+++######+++'';;;;:;;;:;;;;''';;';';++;:;;''';;;;::;;''''++");usleep(90000);
						printf("\n                              ;''''''+++######++#';;;;;;;;'';;;;''';;'+#+::;;;;'';;:;;;;;;'''''+");usleep(90000);
						printf("\n                             .''''''''++#####++##';;;;;;;'''';:;''''''+;:;;'''''';;;;;;;;;;'''++'");usleep(90000);
						printf("\n                             ''''''+'+++######++#';;:;;;;;;;''::;'+''+;;';'''+'''';;;;;;;''''++++'");usleep(90000);
						printf("\n                            '''''''''+++#######+#+;;::;:;::;;';,:;++'+;'''''''++''''';;;''''++++++;");usleep(90000);
						printf("\n                           ;'''''''''+++#########+;;;:;:::::;;;:::;+#+'+'+''';''++'''''''''+++#+++':");usleep(90000);
						printf("\n                          .''''''''''+++########++;;:;::::;::;':::;+''+++''';;;;'+++++''+'+++##+++''.");usleep(90000);
						printf("\n                          ''''';'''''+++#########+;;;;;::;::::;;;;;;;;'+++';;;;;'++++++++++####+++'+'`");usleep(90000);
						printf("\n                         ''''';;'''''+++#########+';;:;;;;:;::;;;;;;;;'++;;;;;;;'###+++#########+''+''");usleep(90000);
						printf("\n                        ,''';';'''+'++++#########+'';;;;;;:::::;;';;;'''';;;';'+++#############+'''''''");usleep(90000);
						printf("\n                        '''''';'''''++++##+#######'';;;;;;::::::;;';;:;;;;;''++################++'''''''");usleep(90000);
						printf("\n                       '''''';;''+'''++++++#######+';;;;;;;:::::::'';;::;;'+++#################+'''''''''");usleep(90000);
						printf("\n                      '''''';;;''''''++++++#######+'';;;;;;;::::::;';:::;'++##################++''''''''':");usleep(90000);
						printf("\n                     ,'''''';;''+''''''++++++++###+'';;;;:;;;;::::;;;;::'++###################+++'''''''''.");usleep(90000);
						printf("\n                     +''';';;;''++''''+++++++++###++'';;;;;;;;::::;;;;:;;#####################++'+''';'''''");usleep(90000);
						printf("\n                    '''';';;;;;'+'''''++++++++++###+;';;;;;;;;;;;;;;;;;;''####################+++''':'';'';'");usleep(90000);
						printf("\n                   ,'''''';;;';'''''''++++++++++++#+++';;;;;;;;;;;;''';';+####################+++''';'';'''''");usleep(90000);
						printf("\n                   '''''';;;;;'+;;'''+++++#+++++++###''''';;;';'';;'+#+########################+'''';'''''';''");usleep(90000);
						printf("\n                  '''''';';;;;'''''''+++++++++++++##++''+'';;;;;'';;++########################+++''';;;;;';''''");usleep(90000);
						printf("\n                 .+''''';;;;;'''''''++'+++++++++++####+++'';;;;;;'+''#########################++''';;;;;;;'';'''");usleep(90000);
						printf("\n                 '+''''';;;;;'''''''++++++'+++++++####+#+++';;;;;;'##########################+++'';';';;'''''''';.");usleep(90000);
						printf("\n                '''''''';;;;;''''''''++++'++++++++######++#+'''';;;'#+#######################+++''''';;;;''''''';;");usleep(90000);
						printf("\n               `+''''''';;;;;''+'''''''++'++++'++########+#+#+++++'++#######################++++'''';';;;;'';';''';");usleep(90000);
						printf("\n               +++'''';;;;;;''''''';''''++'++'++#############+##############################++'+'''';;;;;;;''';'';':");usleep(90000);
						printf("\n              ;+''';';;;;;;;'''''';;''''+''+++++############################################++++''';;;;;;;;;''''''''`");usleep(90000);
						printf("\n              +'''''';;;;;;''';;;';;''+++'+'+++#############################################++++''';;;;;;;;;''';'':''");usleep(90000);
						printf("\n             +'''''';;;;:;;;'';';;;''''+''''++##############################################++++'';;;;;;;;;;;;';''''''");usleep(90000);
						printf("\n            .++'''''';;;:;;;';;;;;;''''+''''++##############################################++++'';;':;;;;;;;'';'''''''");usleep(90000);
						printf("\n            '+''''''';;::;;;';;;;;''''''''''++###############################################+++''';;;;;;;;;;';;''''''''");usleep(90000);
						printf("\n           '++'';'';;;:;:;;';;;;;;'''''''''++###############################################++++'';;;;;;;;;;;;;''''''''''");usleep(90000);
						printf("\n           ++'''';;;;;::;;;';;;;;''';;''''+++################################################+++'';;;;;;;;;;;;;';'';''''';");usleep(90000);
						printf("\n          +++''';';;;;::;;;;;;;;;;;;';;''++####################################+#############+++'';;;:;;;;;;;;;;';'';'''''.");usleep(90000);
						printf("\n         ,+'';'''';;;::::;;';;;;;;;;;'''+++#++++#############################################++'';;;;;;;;;;;;;;;;;'''''''''");usleep(90000);
						printf("\n         '+'''';';;;:;::;;;';;;;;;;;;''++++++++++++#################################@#######+++'';;';;;;;;;;;;:;;;'''''';'';");usleep(90000);
						printf("\n        ;+'''+';;;;;::;;;;;';;;;;:;'''''++'+++++++++########################################+++'+'''';;;;;;;;;;;;;'';'''''''");usleep(90000);
						printf("\n        +''';'';;;;::::;;;;;;;:::;;;''+'''''+++'++++########################################++''+'';'';;;;;;;;;;;;'''''''''';");usleep(90000);
						printf("\n       '++'';';;;;;::::;;;;;;;;;;;''';;;;'''''''++++#########################++####@########+++'''';';;;;;;;;;;;;;;'';';';'''");usleep(90000);
						printf("\n       +''';''';;:;:::;;;;;;;;;;;''';;;;;''''''''+++##############################@@########+++'''';';';;;;;;;;;';;;';''''''+.");usleep(90000);
						printf("\n      +++'''''';;;::::;:;;;;;;:;';;;;;;;;;;';;'''+++########################+####@@##########+''''''';';;;;:;;;;;;;;'''''';'''");usleep(90000);
						printf("\n     `+'''''';;';;:;:::;;;;;;;;;;;;;;;;;:;;;;;'''+++#######################+######@##########+''''''';;';;;;;;;;;;;;'''''''';+");usleep(90000);
						printf("\n     ++'''''';;;;;;;:;:;;;;;;;;;;;;;;;;;;;;;;;'''+++#############################@##########+++'''';'';;;;;;;;;;;;';'''''''''+");usleep(90000);
						printf("\n    `+''''''';';;;;::;:::;;;;:;;;;;;;;;;;;;;;;;''+++########################################+++'+''''''';;;;;';;';';'''''''''#");usleep(90000);
						printf("\n    ++'''''';;;;;;;;;::;;;;;;;;;::;;;;;;;;;;;'''++#####+###################@@#@#############++++''''''';';';;''';'';';''''''+#");usleep(90000);
						printf("\n    +''''';';;;;;;;;;;;;;:;;;;;:;:;;;;;;;;;;;;''++####################@#######@@############++++'+'''''''''''';;;'''';''''''+#");usleep(90000);
						printf("\n   ;+'''';;';;;;;;:;:::::::;;:::;:;;;;;;;;;;;''''+#+++++############@@@@@#@@###############+++++''+''''''''''';''''''''''''++,");usleep(90000);
						printf("\n   +++'''';';;;;:;;;;:;:;:;;;;:;;;;;;::;;;;';'''++'++++############@@@@@@#@@#@#############+++'+''+'''+''''''';''''''''''''++");usleep(90000);
						printf("\n   ++'''';';;;;;;;;;;;;;:;:;::::;:;;;;;;';'''''++''+++###########@#@@@@#@@@@##############+++++'++''+''''''''''''''''''''''+:");usleep(90000);
						printf("\n   #+'''';;::;;;;;;;;;;;;;;;::::;:;;;;;;;''''''+''''+++#########@#@@@@@@@@@@##############+++++''++++++'++'''''''++'+''''+++");usleep(90000);
						printf("\n   #++''';;;;;;;;;;;;:;;;;;:::;:;;;;;;';''''''+;''''''+##########@@@@@@@@@@@#@############+++++''++++++++''''''+'++'+'++'++'");usleep(90000);
						printf("\n    #+''';;;:;;;;;;;;;;:;;;;::;;;;';;''''''''''''''''++###########@@@@@@@@@###############+++++''''++++++++''+++++'+++++++#");usleep(90000);
						printf("\n    :+''';'';;;;;;;;;;;;::::;:;;;;'''''''''''''''''''++#+########@@@@@@@@@################++++++''''+++++++++++++++++++++#");usleep(90000);
						printf("\n     #+'''';;;;;;;;;;;;;::;::;;;;''''''''''''''''''''++++++######@@@@#@#@###@############+#++++++''''++++++++++++++++++++:");usleep(90000);
						printf("\n      +''';;;;;;';';;;;;;;:;;;;;'''''''''';;'''''''''++++++########@##@##################++#+++'+'''+'++++++++++++++++++#");usleep(90000);
						printf("\n      ;++';'';;;;';;;;;;;;;;;;';;;''''''''''''';;''''++++++++#####@#######################+++++'+'''''+++#+++++++#++++++");usleep(90000);
						printf("\n       #+++''''''''';;;;;';;;;;;'''''''';;;''';;'''''++++++++###########################+#+++++++'+'''++##+++++++++++++,");usleep(90000);
						printf("\n        #++'''''''''''''';;;;;;''''''';;;;;;';'''''''++++++++++#########################++++++++++'''++++###+###++++++#");usleep(90000);
						printf("\n        `#+'''''';'''''';;;;';';''''';;';;;;;;''''''++++#+++'++##########################+++++++++'''''++########+#++#");usleep(90000);
						printf("\n         ;#+'+''';'''''''''''''''''';'';';;;;;'''''+'++++++++++#########################++++++++++'''''''+#######+###.");usleep(90000);
						printf("\n          ##+++'''+''''''';''''+++''''''';';;'''''+'''++'+++++#######################+###++++'++++''+'''++####@#####;");usleep(90000);
						printf("\n           ##++''+''''''''''''++++'''''''''''''''+++'++'''++++#####################+++++++++++++'+++'+'+''+##@@@###'");usleep(90000);
						printf("\n            #++++''++'''+'++'++'+''''''''''''''''+++''''''++++####++################++++++++++++++++++++'++##@@###.");usleep(90000);
						printf("\n             +++++++++++'+'+++++'''''''''''''''+'+''''''+++++#######+###############++++++++++++++++++''++++#####");usleep(90000);
						printf("\n             ;++++++++++'++++++'''';'''''''''''++''''''''++++########+###############++++++++++++++++++++++####'");usleep(90000);
						printf("\n              +++++++++++'+++++'''''''''''''''++'''''''+++++#######################+++++++++'++++++++++++++##@@");usleep(90000);
						printf("\n              ;++++#+++++++++'''+'''''''''''++';'''''''++++#########+##############++++++++++++++++++++++###@#;");usleep(90000);
						printf("\n               ++++++++++#+++++'''''+++'''''+';;'''''+''+++########################++++++++++++++'+++++#####@#");usleep(90000);
						printf("\n               ;##++#######+##++++++'+'++'++'';'''''''''++#++++##++########+##+##+#++++++++++''++++++'+####@##");usleep(90000);
						printf("\n                +##+++#######+++++++++++''';';'''''''''+++++++++++++##+++###++#####++++++++++++'++++++++##@##");usleep(90000);
						printf("\n                 ##+#######@##++++++++++'''''''''''''''''''++++++++++++++++#++++#+##++++++++++++++++'++##@@##");usleep(90000);
						printf("\n                  ######@@@######+++#+''''''''''''''''''''+'+++++#++++++++++++++++++++++++++++++'++++++##@##:");usleep(90000);
						printf("\n                   ####@@@@@######++''''''''''''''''''''++'++++###+#++##+##++''+++++++++++++++++++++++###@##");usleep(90000);
						printf("\n                    +#@@@@@@#####+''''+'';'''''''''''++++'+++++###++++###++#+++''+++++++++++++++++++++##@###");usleep(90000);
						printf("\n                     #@@@@@@@####+''+';+''''''''''++'+++''++++####+#+######+++++++++++++++++++++++++++#@###`");usleep(90000);
						printf("\n                      #####@@@###++''++'''''''''''''++++++++++###++++########++++++++++++++++++++++++##@###");usleep(90000);
						printf("\n                       ######@##+#++++++'''''''''+'+++'+++++###+#+++++#+###+++++++++++++++++++++++++######+");usleep(90000);
						printf("\n                       ,######@###+#++++''''''''''+'+'+++++#+#+#'++++++++####+++++++++++++++++++++++######");usleep(90000);
						printf("\n                        ##+#+##@#####+++++''+++++'''''''++''+++'''+++++++++##++++++++++++++++++++++####+#+");usleep(90000);
						printf("\n                         #+++++########+++++''''''''''''++'+''+'''++++++++++++++++++++++++++'+++++#######.");usleep(90000);
						printf("\n                         .++'+++#####+++'+''''''''''''''+''''+'''+++++++++++##+++++++++++++++++++########");usleep(90000);
						printf("\n                          #+''''+######++++''''''';''''''''''+++'+++++''+++++++#+++#+++++++++++++#######.");usleep(90000);
						printf("\n                           #'';''+##+##++'+'''''''''''''''+''+++++++++++++++#++###++#+++++++++++########");usleep(90000);
						printf("\n                            #'';;+#######+'''+''''''''''''''+++++#++++++++++#####+#+#+#+++++++++#######+");usleep(90000);
						printf("\n                            +#''';+######++''+'''''++'''''''+'++###+++####+++#+#+######++++++++#+######;");usleep(90000);
						printf("\n                             #+''''+#####+++''+'+'+++++'+'++++++#+##########++##########+#++++#########");usleep(90000);
						printf("\n                              #+''''+###+#++++'+++++'+'++++++++#++++###++#################+###########`");usleep(90000);
						printf("\n                              ,+'''''#######+++++'+++++++++++#+#''+####++###########################+#");usleep(90000);
						printf("\n                                +;''''###+###+++++++++++++++##+++++####+++#########################+#+");usleep(90000);
						printf("\n                                 +'''''####+#++#+++++#+#+########+++##+++#########################'+#.");usleep(90000);
						printf("\n                                 +'''''+########+#++#++##########+#######++####@@##############@#+++#");usleep(90000);
						printf("\n                                 .+'+'''#@#####++#+#############+++#++++++''++######@@@@@@####@#+''#+");usleep(90000);
						printf("\n                                  '''+'''#####################++++'+'++++'+'''+++++#######@@@##+''+#");usleep(90000);
						printf("\n                                  `'''';'+#@#########@@#####++++'''''''++''''';'+++++++#######+''++#");usleep(90000);
						printf("\n                                   :''''''+##@@@@@@@#####+++''''';''''''''''''''++++++++++++'''''+#;");usleep(90000);
						printf("\n                                    ''''';'++#########++''''''''''''''''''''''''''''''''''''''''''+");usleep(90000);
						printf("\n                                     :''';''+++'+++++'';'''''''''''''''''''''''''''''''+'''''';''++");usleep(90000);
						printf("\n                                      ;';+'''''''+''''''''''''''''';;''''''''''''''''''''''''''''+");usleep(90000);
						printf("\n                                      :''';;;''''''''''''''''''';''''''''''''''+''''''''''''''''+,");usleep(90000);
						printf("\n                                       +'';;;:;''''''''''''''''';;;';;;''''''''''''''+'''''';';'+");usleep(90000);
						printf("\n                                       '';;;''';'''''''''''+';;'';;';;;''''''''''''''''''''';';'`");usleep(90000);
						printf("\n                                       ';';'';';''''''''';;;;'';';'';';''''''''''''''''''''''''+");usleep(90000);
						printf("\n                                        ';;;'''''''''''';;';;;;;';;;;';''';''''''''''''';''''''");usleep(90000);
						printf("\n                                         ';;''''''''''';;;''';'';';;';''''''''''''''''''';;';'+");usleep(90000);
						printf("\n                                         ,';';''';''''''';'''';';;''';'''''''''''''''''';;'''';");usleep(90000);
						printf("\n                                          +';';''''''''''';;;;'';;''';''''''''''''''''';;;';''");usleep(90000);
						printf("\n                                          `'';';''''''''';;;;';''';'''''''''''''''''''';;;';'+");usleep(90000);
						printf("\n                                           '';;''''''''''''';';'''''''''''''';'''''''';;''';':");usleep(90000);
						printf("\n                                           ''''''''''''''''''';';'';''''''''''''''''''';''';'");usleep(90000);
						printf("\n                                            '';;''''''''''''''''''''''''''''';''';'''';';;''`");usleep(90000);
						printf("\n                                            ''''';''''';'''''''''';;''''''''':';';''''';;;'");usleep(90000);
						printf("\n                                             ';''';''+'''''';''';''''''''''';''''''''';';'`");usleep(90000);
						printf("\n                                             ''''''''''''''';;;';''';;''''''';''''''''''''");usleep(90000);
						printf("\n                                              ''''''''''''''''''''';';''''''';'''';';'''',");usleep(90000);
						printf("\n                                              `'';''+'''''''''''''''';''''''';''''';'''+#");usleep(90000);
						printf("\n                                               .+'''''+'++++''''''';';''''''';';;''+;''");usleep(90000);
						printf("\n                                                `+''+'++'''';'+''''''';''''''';''';''';");usleep(90000);
						printf("\n                                                  +'''''''''''''''''''''''''''';''''+#,");usleep(90000);
						printf("\n                                                  #+'''''''''';'';''';;''''';';;'';+#@.");usleep(90000);
						printf("\n                                                   +#+'''''';+'''''''''''''';'''';+#@#`");usleep(90000);
						printf("\n                                                     ##++'''''''''''''''''';''''+#@##+");usleep(90000);
						printf("\n                                                      `##';''''''''';'''''''''+#@@#+;");usleep(90000);
						printf("\n                                                        `#+#'''''''''';'';''++#@##+;");usleep(90000);
						printf("\n                                                          ##@#+'''''''';;''+#@@#+',");usleep(90000);
						printf("\n                                                           :####+''+'';'''+#@#+''.");usleep(90000);
						printf("\n                                                            .'+##+'''+'''+#@#+;;");usleep(90000);
						printf("\n                                                             ''+###++'''+#@#+");usleep(90000);
						printf("\n                                                              ''+###''''+##:");usleep(90000);
						printf("\n                                                              ''''###'''##`");usleep(90000);
						printf("\n                                                               :'''+##'+#;");usleep(90000);
						printf("\n                                                                ,'''##+#+");usleep(90000);
						printf("\n                                                                 ''''###");usleep(90000);
						printf("\n                                                                  ++'##.");usleep(90000);
						printf("\n                                                                   +'+#");usleep(90000);
						printf("\n                                                                   '++");usleep(90000);
						printf("\n                                                                    +");usleep(90000);
							}
							else if(jumlah==3&&strcmp(a[3].Stat,"Ada")==0){
								printf("\n                                                           `:::::::");usleep(90000);
								printf("\n                                                       `:::::::;:;:`");usleep(90000);
								printf("\n                                                     `:::;::::::;:;`");usleep(90000);
								printf("\n                                                   ,:::;::::::::;':.");usleep(90000);
								printf("\n                           `                    `::;:::;;:;::::::'',");usleep(90000);
								printf("\n                      ,,,,.,                  `::::::;:::;::::::::;.");usleep(90000);
								printf("\n                      ,::,,,:                ::::::::::;;:;:;::::;;`");usleep(90000);
								printf("\n                     ,:::::,:,.            .,::::::;::;:;:;;;:::;;;");usleep(90000);
								printf("\n                     ,,::::::::,          :,:;;;;::::::;;;:;;;;;:;;");usleep(90000);
								printf("\n                    `,::'''::,::;       `::::;;;;';;;:;;;;;';;;;:;'");usleep(90000);
								printf("\n                   `::,,:':::::;;      .::::::;;;;;;;;;;;;;;;;;;::;");usleep(90000);
								printf("\n                .,.,,,:;'':,;';;;     :::::;;;;:;:;:;;';;;;;;;';;;;");usleep(90000);
								printf("\n                ..,,:;+++'++':;;;,  .:,::::;;;;;:;;;;';;;;';;;';';;");usleep(90000);
								printf("\n        ``    ,,,,:..,;#+':+;;'+': ::,,,,::;;;;;';';;+;;;;;;:;;'';;");usleep(90000);
								printf("\n     ,,,:,:`;''+;;:,:.,+';';;'+++.,;::,::::;;;;;''''+';;';';;;';;;;");usleep(90000);
								printf("\n    ,:,,,,:':;+###+,,,,,''+++++',,::::::;;;;;;;;'++'';';;;';;;;;;;'");usleep(90000);
								printf("\n   ,,:,,,::::;#';:::,,.,;+++':.,,:,:,:::;;;;:;;;;;';';;+;;;;;;;;;;;");usleep(90000);
								printf("\n  `:::,:::;;;'::'';:,,,,,';,,,::;:::::::::;::;;';;:;;;'+''';;;;;'+`");usleep(90000);
								printf("\n  ::::;:;;;''::::;+;:,,,,,,::;'++''::;;;;;:;:;;;;;;:;;;;;;;;;;'''+");usleep(90000);
								printf("\n .;;::;;;';';':;;+#+':,,,:;;;'+++;'+;:;'';;;;;;;';;;;';;;;;;;;;'+:");usleep(90000);
								printf("\n :;';;;;'';:;;;'++##+';::'+++++'''''+'';';;;;;;'';;';;;;;;;;;;;'+");usleep(90000);
								printf("\n :;''';'';''''''###+'+;'++#+++++';''+''';;;;:;;;;;;'';';;;;;;;;+");usleep(90000);
								printf("\n.;'''''''#++#+++##' '++''+++++++';;'''';;;;';;;+;;;';'';;;;''''`");usleep(90000);
								printf("\n,';;+''++'+####+'   ;'+'''++++';';;;;+';;;;;;;;'++'''';';;;;''+");usleep(90000);
								printf("\n:'''++'+++++##:     '''+''++++';#;;;;';;;;';'';''''';';;;;;;;;;");usleep(90000);
								printf("\n;''+#+++++#+`        '++'+'++++';;;';';;';''';'+';';;';;;:;;''`");usleep(90000);
								printf("\n;'';++++#+'          ''+'+'+'++;:;;';;';;;;';;''';;;;;;;;;;''+");usleep(90000);
								printf("\n;'''''+##+           ,''''''''';;;;';;;;;;;'''';;;';;;;;'';+++");usleep(90000);
								printf("\n;'''''+++            .'''''''';;;;;;;;;;;;';'''''';;;'';;;''';");usleep(90000);
								printf("\n;'''''+++            .;'''+'''';;;;;;;;;;;;;;''';;'';''''''++.");usleep(90000);
								printf("\n:''''''+;            `;'';#;';;;;+;;';;'';;;';''+;''';;;;'+++");usleep(90000);
								printf("\n,''''''+:             ;'''+'';';;'';';';';'';;;;';';;'''';''+");usleep(90000);
								printf("\n`''''''';             ;;''+';;'+;;;;;;''';;;;;;;''+'';'''''+");usleep(90000);
								printf("\n '''';:;'             ''';';'';+;;;;;;''';'';';;'''';'''''''");usleep(90000);
								printf("\n '++;:;'';            ''''';;;;+;;';'''''''';;;';'''''''''+");usleep(90000);
								printf("\n '+;;;;+'''           ;''''';';';;;;+;'''';';'';;';;'+''''");usleep(90000);
								printf("\n :+'';;''+',          `''''''''';;';'''''''';';;'';';'+++");usleep(90000);
								printf("\n `+'''++++''           '''';'';;;;;''';;''''''''''''''+'");usleep(90000);
								printf("\n  ''++++'+'';          ;'''''+;;;';'''''''''''''''''''+");usleep(90000);
								printf("\n  ''++#'+''''          ,'''+'';;;''';''';''''+'''';'''+");usleep(90000);
								printf("\n  ;'++''''';+          .'';+'''''''''';''''''';';'''''.");usleep(90000);
								printf("\n  '+''''''';+           '''+';'''''''';'''''''''''''''");usleep(90000);
								printf("\n  '+''';;';+'           '''''+'''''''''''''''''';''''+");usleep(90000);
								printf("\n  '+'+'''''+`           ''++''''''''''''';'''''''''''+");usleep(90000);
								printf("\n  '++'''''++            ;''''''''''''''''''''''''''++;");usleep(90000);
								printf("\n  '++''''+'+            .'''';''''''';'''';'''''''''+`");usleep(90000);
								printf("\n  '+#+''''+'            .'''';''''''''''''''''''''''+");usleep(90000);
								printf("\n  '+++#+';'',           `'''''''''''''''''''+'''''''#");usleep(90000);
								printf("\n  ,+++'';''''            ''+'''''''''''''''''''''''';");usleep(90000);
								printf("\n   +++'''''''            '+''''''''''''''''''''''''+");usleep(90000);
								printf("\n   ++++'''''+'           ''''''''''''''''''''''''+'+");usleep(90000);
								printf("\n   '+++++'''+'           ''''''+''+'''''''''''''''''");usleep(90000);
								printf("\n   `+++++'''++:          '''''''''''''''++'''''++'+,");usleep(90000);
								printf("\n    ++++++'++''          ;'++'++'+''''+'''+''+''''+");usleep(90000);
								printf("\n    ,+++++''+++          .''+'++''''''+''++''''++++");usleep(90000);
								printf("\n     +++++++'++`          ''''+++'''''''''''''+''++");usleep(90000);
								printf("\n     .+++++'+++;          '''++''+'''''''''+'''''';");usleep(90000);
								printf("\n      +++++++++'          ''''++''+''+''''''''''''`");usleep(90000);
								printf("\n       +++++++++          ''++++'''''''''''+'''''+");usleep(90000);
								printf("\n       '++++++'+,         ;''+++''''+''''+'+'''''+");usleep(90000);
								printf("\n        +++#++++'         ,'+++'+'''+''''+''''''++");usleep(90000);
								printf("\n         '+++++'`         ''+'''++'+''+''''''''''`");usleep(90000);
								printf("\n           ''++'+;         '+++++++'+''''+'+''''''.");usleep(90000);
								printf("\n           :+++'++         ;++'+''+'+#''''+'++''''`");usleep(90000);
								printf("\n            ++++++:        `++++++'+++''+'''''''''");usleep(90000);
								printf("\n            +++#+''         '+++'++'+++'+'+''''''+");usleep(90000);
								printf("\n            `++++'''        '++++''+''+'#'''''''''");usleep(90000);
								printf("\n             +++++++.       ,+++++''''''++++''''''.");usleep(90000);
								printf("\n             `'''+''+       `++'+''''''+++++++'''';");usleep(90000);
								printf("\n              +'++'++        ''''''''''++++++++''''");usleep(90000);
								printf("\n              .+'++++        '++'+'+'''++''+++'''''");usleep(90000);
								printf("\n               '+'+++        '+'+''+''++''+++++''''");usleep(90000);
								printf("\n               '+++++        ,'+++++'+''+'+++++''''");usleep(90000);
								printf("\n               .'++++        `'+++++'++'++'+++#,'''");usleep(90000);
								printf("\n                +++++`        ++++++''+'+'+'+++ .'+");usleep(90000);
								printf("\n                +++++,        '+'+++++''+''++++'  , ");usleep(90000);
								printf("\n                +++'+'        '++'+++'+'+'''+'+'");usleep(90000);
								printf("\n                ++++++        .+++++++''++''++''");usleep(90000);
								printf("\n                +++'+'         +++++++''+''''+++:");usleep(90000);
								printf("\n                ++++'+.        '+++++++++'''++++'");usleep(90000);
								printf("\n                +'++++'`       .+++++''++''+'+'+'");usleep(90000);
								printf("\n                '+'++'+',       ++++++'+'+''''++'`");usleep(90000);
								printf("\n                ++'+'+''+       '''++''++'+''+'++;");usleep(90000);
								printf("\n                ''++''++'       ;+'++'+++'++''''+'");usleep(90000);
								printf("\n                '':''+#'`       ,''+''+'+''''''+++");usleep(90000);
								printf("\n                '+,'+'+'        .'+++'''+''''''+++");usleep(90000);
								printf("\n                ;'.'++++         +'+'''+++'''''+++");usleep(90000);
								printf("\n                . ,'+'+;         '''''++'+'''''+++");usleep(90000);
								printf("\n                  :++''.         ''''++''+'''''+++");usleep(90000);
								printf("\n                  '+'+'          '''''+''+'''''+++");usleep(90000);
								printf("\n                  '''+'          '''''''+++''''+++");usleep(90000);
								printf("\n                  +++'+          ,'''''++++'+#+'++");usleep(90000);
								printf("\n                  '''+`          `'''+'#'++'+++'++");usleep(90000);
								printf("\n                   ++'            ''+''+'++'+++''+");usleep(90000);
								printf("\n                   :,             ''''+'''+''++''+");usleep(90000);
								printf("\n                   `              '''+'+''++''+''+.");usleep(90000);
								printf("\n                                  '''+'+'+++'';''+;");usleep(90000);
								printf("\n                                  '''+'''+++'''+'''");usleep(90000);
								printf("\n                                  ;'''+'''++''++'+'");usleep(90000);
								printf("\n                                  ,+''++'''+'''+'++");usleep(90000);
								printf("\n                                  .''''+''+''+'''++,");usleep(90000);
								printf("\n                                  `''''+''++''+'+++;");usleep(90000);
								printf("\n                                   ''''+'''''''++++'");usleep(90000);
								printf("\n                                   '''+''''''''#+'++");usleep(90000);
								printf("\n                                   '+'+'''''''++#'++");usleep(90000);
								printf("\n                                   '''''''''+''++:++");usleep(90000);
								printf("\n                                   '''+''+''+'+++ ''");usleep(90000);
								printf("\n                                   '''++''+'+'+++  +");usleep(90000);
								printf("\n                                   '''''''+++'+++");usleep(90000);
								printf("\n                                   ;'''+''+++'+++");usleep(90000);
								printf("\n                                   ;'''+'++++'+++.");usleep(90000);
								printf("\n                                   ,'''+'+'++++++:");usleep(90000);
								printf("\n                                   .'''+'+''+++++:");usleep(90000);
								printf("\n                                   `'''+++''+++++`");usleep(90000);
								printf("\n                                    ''++++'++++++");usleep(90000);
								printf("\n                                    ''+++++'++++.");usleep(90000);
								printf("\n                                    ''+'++++++++");usleep(90000);
								printf("\n                                    ''''++++++++");usleep(90000);
								printf("\n                                    ''+++++++++'");usleep(90000);
								printf("\n                                    '++++++++++.");usleep(90000);
								printf("\n                                    '+++++++++`");usleep(90000);
								printf("\n                                    '++++++++`");usleep(90000);
								printf("\n                                    '+++++++`");usleep(90000);
								printf("\n                                    '++++++`");usleep(90000);
								printf("\n                                    '+++++`");usleep(90000);
								printf("\n                                    '+++`");usleep(90000);
								printf("\n                                    '++`");usleep(90000);
								printf("\n                                    '+`");usleep(90000);
							}
							else if(jumlah==4&&strcmp(a[4].Stat,"Ada")==0){
								printf("\n                                                                                           .;");usleep(90000);
								printf("\n                                                                                            .:'");usleep(90000);
								printf("\n                                                                                           .;'+");usleep(90000);
								printf("\n                                                                                          ;:++.");usleep(90000);
								printf("\n                                                                                        ;+'+++");usleep(90000);
								printf("\n                                                                                       ;'+'++,:.");usleep(90000);
								printf("\n                                                                                      :;';++:;';,");usleep(90000);
								printf("\n                                                                                     :'':'+;';;;'");usleep(90000);
								printf("\n                                                                                    ,++:'#:','',+");usleep(90000);
								printf("\n                                                                                   .++++#'+:'+:+:");usleep(90000);
								printf("\n                                                                                  `''++#'';'+;+;+");usleep(90000);
								printf("\n                                                                                  ''+;++''+#;+:+,");usleep(90000);
								printf("\n                                                                                 '+++#+'++#;+++:'`;");usleep(90000);
								printf("\n                                                                                ;'+##+++'+#+#+++;'");usleep(90000);
								printf("\n                                                                               :++#+###+###++##;+:");usleep(90000);
								printf("\n                                                                              `++#+@@@#@@##+#;'#;");usleep(90000);
								printf("\n                                                                              '+#+@@@@@@##++++;#+");usleep(90000);
								printf("\n                                                                             '##+########++#++''");usleep(90000);
								printf("\n                                                                            ;+####''####+++';+#;");usleep(90000);
								printf("\n                                                                            +#######'++#+++'+#'");usleep(90000);
								printf("\n                                                                           +#+##+#+++++##+';;,,.");usleep(90000);
								printf("\n                                                                          :######+++####''''';::+");usleep(90000);
								printf("\n.                                                                         +#####++####+'';';'';;`");usleep(90000);
								printf("\n:,.   `'';:`                                                             ;+####+##++##+#++';;''''");usleep(90000);
								printf("\n;:,;:,;''++'';.                                                          ####+#######+++';;:;;:':");usleep(90000);
								printf("\n';::;;:';;''++'',                                                       ++####'+##+++++'++'''++#`");usleep(90000);
								printf("\n:,,;;;;;;;'''''++;,                                                    ;;+##+++#++++##+;';'';''.`");usleep(90000);
								printf("\n':::,:;;;''';;''+++'.                                                 .#+####++''+''+#+'+++':';:");usleep(90000);
								printf("\n:;;;;';:;''++###+++'+'`                                               '++#+++++'++++''+'''';;;:,");usleep(90000);
								printf("\n;';,:';''+;++'+###+++++;                                              '++++++'++'''';;,;;';;:::::");usleep(90000);
								printf("\n'';;;:;+'++#+'++######++`                                           ,'++#++++++#''''+';;;':;;:'''.");usleep(90000);
								printf("\n ;:,;''+++########+#@#####'                                          '+##+++''+++''''';;:,,,:;;;,");usleep(90000);
								printf("\n  +';;;'++##+#+#############`                                       :'##'+''''+''''+';;:::::.;';`");usleep(90000);
								printf("\n    #++++;'+'++###+######@@##+                                     .'++++''''+++';;';';:::,:,,,");usleep(90000);
								printf("\n     `#++++''''++++++##########+                                   ;+##++++'++';''';:;;;:,,,,::");usleep(90000);
								printf("\n      .,'+'''#+##+##+#########+'+;                                ;;+#++++'+'''''''';:,:,,,,:,.");usleep(90000);
								printf("\n      ,'';'''+#++++#+###+#+#+####@#`                             ;'+##+'+''++';;;'':';;:,,.::'");usleep(90000);
								printf("\n       ,'''''+'''+++++##++++#+++##++,             :;;;;         ;:'+##++';#''';;;;';:;:,,...``");usleep(90000);
								printf("\n     `:;;''''++++'++++#++++###+#+##+':           ;;;;:';       :,''##+++''''';;;';;;;;;:,....");usleep(90000);
								printf("\n     +;;'++++++''''++++++#++#+++####'''.         ;,:;;##      :,++#++''';'+''';;'';:,:;:,,,,,`");usleep(90000);
								printf("\n     ;:;'++++'++#++++++#+#++++++++++#';;;.       ';;'''+     ;,+##+++++';''';;;';;';::,,,..,;.");usleep(90000);
								printf("\n      :+++++++#++++++++++'+##++'++++#++';;,      ''#';'   `::;+++#+'';'''+''';;;';;::;;,.....,");usleep(90000);
								printf("\n      ,;'+##+++'+++++'+'#+++++++''+++++'';;:      `#';:; :;;'++++''';;''++';;;;;;;::;::.,...,,");usleep(90000);
								printf("\n     ,+####++'';;;''''++#+'++++++'++'+#++';:::.```  '''';;;#+++++''';''';';;;:;:;:::::,......:`");usleep(90000);
								printf("\n        :;;++##';'+++;+#'+#++'+'++'''++++#++';:,:;;;;;;;::'#''+'''';;:+'';;::::;:;:::,....,.,,");usleep(90000);
								printf("\n          #':;+++'';+++++++''+''''+++'+'+++#++++'';;;;;;;;+#'''''';';;'';;;::::::,:,.....,`");usleep(90000);
								printf("\n          `++''''''+''+'''+++'+#;''+''''+''++++'+++;;::;;'+#';''';;;;';;;;;:::::,.,,..``..");usleep(90000);
								printf("\n           ,;;;;;;;;;'':'''++'''''+++''''''''''''++';:,::'++';'''':;:::;:;;;:,,,,....`.``.");usleep(90000);
								printf("\n           ;+;:;;;;;;;;+++''++++'+'+''+;;'';;'';'+''',':'''+',;;;;';';;;,;:,.,,,.,``````..");usleep(90000);
								printf("\n            ,':,;:::';:++'''+'+'+'+'+'''''''';;';':'';'';'++ :,::;;;:;;;;;:,,...`....````.");usleep(90000);
								printf("\n             ,:;,:;;;;';;'''''''+';+'''''';'''';:;.''';;''++ ;,:;;;'';:,:.,,.`.`.`.`.```.");usleep(90000);
								printf("\n           `,:,,:;;';'';;;'':;+'''''+;;''';';'';:  ''+'''+++  ::;:;:;;:,,..`.````.`.```...");usleep(90000);
								printf("\n           ,,.,:;::':;;:;''''''';''';'+'';;'';:,:  +#+++'+++   ;,,:,,,,,,...``````````..,");usleep(90000);
								printf("\n           ,..:,,:::;::;'''';+;;';;:';';;';;';,,.  +#+'+'+#:    :,,,.,,,.......``````...:");usleep(90000);
								printf("\n           ,,,,.:::;:,:+;;'''''::::;;;;;;;:::,,:   .++++++#      ,,,,....,...`````,...`");usleep(90000);
								printf("\n               :,,:,:;;;:;;;;';;;:,;,:;:;:,.,,:    `+'++'##      `......,..`````..");usleep(90000);
								printf("\n                ,`  ,';::;';;:,;:::::,;:,,...,,    .+'++##+       ....`......```.`");usleep(90000);
								printf("\n                     :,:';:::,,::,:,,,,,...`.:     ;+++###,        `..``..```.`");usleep(90000);
								printf("\n                     `,;::::':::,..,,,......,     `:'+#+##:          .``....`");usleep(90000);
								printf("\n                      :,:,:;;:.,....,.`...,:      '+++++##;           ,`");usleep(90000);
								printf("\n                      .,::;,.,.....`.....,,       '++++##+,");usleep(90000);
								printf("\n                      ,,.,:::,........,,..       :+++++##+");usleep(90000);
								printf("\n                       ..:   `,:.,...:.,.        ''++++#+#");usleep(90000);
								printf("\n                                                 ''##+#++#");usleep(90000);
								printf("\n                                                ;''####'++");usleep(90000);
								printf("\n                                                ''+#@+''#.");usleep(90000);
								printf("\n                                               ;''+##''+#");usleep(90000);
								printf("\n                                               ''++##+'+#");usleep(90000);
								printf("\n                                              `''+###'++#");usleep(90000);
								printf("\n                                              ''++#@+'++#");usleep(90000);
								printf("\n                                              ++'#@`+'+##");usleep(90000);
								printf("\n                                              ''+##;++##`");usleep(90000);
								printf("\n                                             `'++@ #++##");usleep(90000);
								printf("\n                                             ;+### +++##");usleep(90000);
								printf("\n                                             '++#, +++@");usleep(90000);
								printf("\n                                            `''+@  +'+#");usleep(90000);
								printf("\n                                            '++#'  ++#;");usleep(90000);
								printf("\n                                            +##@  `##@`");usleep(90000);
								printf("\n                                           :++#'  ;+#@");usleep(90000);
								printf("\n                                           +++#   +++#");usleep(90000);
								printf("\n                                           ++##   '+##");usleep(90000);
								printf("\n                                           ++#+   ++#;");usleep(90000);
								printf("\n                                           ++#    +##");usleep(90000);
								printf("\n                                          :++#    +##");usleep(90000);
								printf("\n                                          '+#'   `+#;");usleep(90000);
								printf("\n                                          ++#    ;++");usleep(90000);
								printf("\n                                          +++    ;+#");usleep(90000);
								printf("\n                                         +#:    +++");usleep(90000);
								printf("\n                                         '+`    '+#");usleep(90000);
								printf("\n                                         `'#     ++#");usleep(90000);
								printf("\n                                         .'#     ++#");usleep(90000);
								printf("\n                                         ''#`    ++#.");usleep(90000);
								printf("\n                                         ''+.   .''#+");usleep(90000);
								printf("\n                                        .;'+:   ';'+,");usleep(90000);
								printf("\n                                          ,      `,`");usleep(90000);
							}
							else if(jumlah==5&&strcmp(a[5].Stat,"Ada")==0){
								printf("\n                  ,;,   .;:;+;,:");usleep(90000);
								printf("\n                ,,,#;;';+;:':,',:");usleep(90000);
								printf("\n              `,::,;:;:,;::::;,::,");usleep(90000);
								printf("\n            `,;;,:::,,',::,:'::::.");usleep(90000);
								printf("\n           ,,;,,,;:,,,;,,:::,;;;:`");usleep(90000);
								printf("\n          .,.,.,.,.,';;',:';';;;:.");usleep(90000);
								printf("\n         ...,,.,:';+:,,;+;;;;;;:.");usleep(90000);
								printf("\n        `,:,:,,,,:+,'+:;;';;;:;':`");usleep(90000);
								printf("\n        ,,,,,,,,,,.::;:;:,,::,;+,;");usleep(90000);
								printf("\n       `,;,,,,,:,.,:;,,'::,:::''',`");usleep(90000);
								printf("\n       :,:.,:,,:,:::,:,',,:,:::::,,");usleep(90000);
								printf("\n       ,:,,,,,,,:.,:..,:':+@:':':;,");usleep(90000);
								printf("\n      `,:,,,,,,:..,':,,:;;,,::,,,::");usleep(90000);
								printf("\n      `,:,.,..:;.,,,:'..,,,,,,,,,,`");usleep(90000);
								printf("\n       ,,::,.:,',.;,:;;,,,,,,,,,,,");usleep(90000);
								printf("\n      `,,,,.:,,;.,,,'+:,,,,,,,,,:,");usleep(90000);
								printf("\n       ,,:,.',;.,,,;::,,,..,,,,,:.");usleep(90000);
								printf("\n       :,;,,,.+,,;:::,.....,,,,;;");usleep(90000);
								printf("\n       ,;;;::.,;::::,......,,,,:;");usleep(90000);
								printf("\n       :,,.,,#:;::,,....;,:,,.'::");usleep(90000);
								printf("\n      .,.:::;#;':,,..,,,;:;,..::,");usleep(90000);
								printf("\n      ,;,:'+#';::,...,:::::,.,;,,");usleep(90000);
								printf("\n      ,::,:;#';,,......::,,...;,,");usleep(90000);
								printf("\n      ,;,':++'::`....,..,,.....,,");usleep(90000);
								printf("\n      .,;:';;::,'...............,");usleep(90000);
								printf("\n       ;':':;,,,,,.,......;...,;,");usleep(90000);
								printf("\n        :;:::':,,,........::;:+,.");usleep(90000);
								printf("\n         ,.,,'',.............::,");usleep(90000);
								printf("\n         .`,:++,,..,......:;'::,");usleep(90000);
								printf("\n          .,:#+:.,.,.,...,.,':,.");usleep(90000);
								printf("\n          `.,;+:.,,,,,.,.....,.:,`");usleep(90000);
								printf("\n           ,,,+:.,,,,,,,....;+;;''''+;`");usleep(90000);
								printf("\n             ::+.,,,,,,,,..,':,,,:;''''+:");usleep(90000);
								printf("\n              ,',,,,,::::::::,,,,:::;'''::`");usleep(90000);
								printf("\n            ,,;...,,,,.,,,,,,,,,:::;'+:,::`");usleep(90000);
								printf("\n           .,;,';.........,,,,,::::;;',,,,:::.");usleep(90000);
								printf("\n          .;,:,+',.......,,,,,,::::;;,,,:::::,:,");usleep(90000);
								printf("\n          ,,:,:+:,......,,,,,,:::::;,,,,::,,,,:::,`");usleep(90000);
								printf("\n          ,,;,'+,.,,....,,,.,,:::::.,:,,,,,,,::,,,;#`");usleep(90000);
								printf("\n        .,,,,;'',.,,....,,..,:::::,,:,,';,::,,,:,,,:,.");usleep(90000);
								printf("\n      `,,,..,:':,.,,...,,...::,,:,:,,,+.::,,:;,.,,,,,,:");usleep(90000);
								printf("\n     `,,,....:',:,.,..:,..,::,::,,,,:,::,:,;:.,,,,,,,,,:`");usleep(90000);
								printf("\n    ,,,,,..`.;:,;,.,..;,,.::,::,,,,+,:::,:',.,,,,,,,,,,,,.");usleep(90000);
								printf("\n   .,.,,,...,';,,,,,..,,,,,::,,,,:,,,::,;;.,,.,,..,',,,:::`");usleep(90000);
								printf("\n  `...,,,,.:.;,.:;,,,,,,.,,,,,,,+,.,::,+,,,,,,,,.,,,,,,,,:;");usleep(90000);
								printf("\n  ,.....,,.:.::,;.:,,,,,,,,,,,,,,.,:,,+..,,,.,:.,,...,,,:::");usleep(90000);
								printf("\n `,.....,,.,..;:.;:,:,..,.,.,,,,,,:,:;.,.,,.:`,,,...,,,:::.");usleep(90000);
								printf("\n `......,,,.,..;:....,;,,,,,,:,,,,,',,,,,..+.,,....,,:::::");usleep(90000);
								printf("\n `.......,..;,..;;......,,,:,,,,,,+:,.,,.:@,,,....,,::::,,");usleep(90000);
								printf("\n `,....,,,..::...:+:.`..,,,.,.,,:+:,....+;::,.....,::::::");usleep(90000);
								printf("\n  ,......,,..;,..`,'':.,,,,,..,;;,...,,#,::,.....,,,::::.");usleep(90000);
								printf("\n  ,.....:,,..;,,..,..':,,..,,,;:,...,.',:,,....,::,,:::,");usleep(90000);
								printf("\n  `..,,',',...;,.,..,'...`..:::,.....:,::,.,:;:,.:,::::`");usleep(90000);
								printf("\n   ,,:,,.;,,..,:.,..:.....,::,.....,,,;;;':,,,,,,:::::,");usleep(90000);
								printf("\n   `,::,.,.,,...;.......,:,:,....,:,;;;:,,...,,,::::::");usleep(90000);
								printf("\n    ,;:...,,,,,..;...,::,:,,....:;'';:,,.....,:;:::::.");usleep(90000);
								printf("\n     ;;.....,,,,.;,+:,.::,,,,,;''':,,,,.....,:'#+::::");usleep(90000);
								printf("\n      '.....,,,:,,,,.+:,.,,:'''':,,.,,....,,::++++';");usleep(90000);
								printf("\n       ....,.:::::::;;::;'#';;:,,....,,...,,:;;;;:;");usleep(90000);
								printf("\n       ....#.,,,,,:::;;:::;:,,.......+`..,,:::;:::");usleep(90000);
								printf("\n       ...,,......,,,:::,,::,........#...,,::;:::");usleep(90000);
								printf("\n       ............,,.,:,,,,,.......#;..,,::;:,:`");usleep(90000);
								printf("\n       ..,.........,,..,....,,......,..,,,:,:,,.");usleep(90000);
								printf("\n       .,...............,..,,:.........,,:,:,,,");usleep(90000);
								printf("\n       .,,,.........,,,.,...,,:.....,,,::::,,,");usleep(90000);
								printf("\n       `,,,,.......,,,,..,,,.,,:...,,,:::,:::`");usleep(90000);
								printf("\n        .,,,,...,,,,,,,,.,,.,,,';,,,,::::,:,");usleep(90000);
								printf("\n         ,,,,,,,,,,,.,,,.,,,,,,,:::,::::,:.");usleep(90000);
								printf("\n           ,.,,,,,,,..,,,,,,,,,,,';;:,,,,");usleep(90000);
								printf("\n               ;'';:,,,,,,,,,:,,,::',,`");usleep(90000);
								printf("\n               ,:::::::;;';';:+#;:.");usleep(90000);
								printf("\n                ::,,,::::;;;;';:'");usleep(90000);
								printf("\n                 ,,,,:::::;'''':::");usleep(90000);
								printf("\n                  :,.:+###:::::;;");usleep(90000);
								printf("\n                   .;::::;;;::::");usleep(90000);
								printf("\n                    ,,:::::::::");usleep(90000);
								printf("\n                    ,,.,,,,,,::");usleep(90000);
								printf("\n                    ,,,,,,,,,::");usleep(90000);
								printf("\n                    ,,..,,.,,,:`");usleep(90000);
								printf("\n                    ,......,,,:.");usleep(90000);
								printf("\n                   .,......,,,:,");usleep(90000);
								printf("\n                   ,,...,..,,,:,.");usleep(90000);
								printf("\n                  ,,........,,,,:,");usleep(90000);
								printf("\n               .:,,,...,.....,,,,,,:");usleep(90000);
								printf("\n              ;,,,,..,,,,,,.,,,,,,,,:,");usleep(90000);
								printf("\n             ,,,,,,,,,,,,,,,,,,,,,,,::,");usleep(90000);
								printf("\n            `,.,,,,,,,........,,,,,,,,,");usleep(90000);
								printf("\n            `,,.,,,,,,,,,,,,,,,.,,,,,,:");usleep(90000);
								printf("\n             ,,,,,,'............,,,:::;");usleep(90000);
								printf("\n             `:,,,,,,,,,,,,,,.,,,,:::'");usleep(90000);
								printf("\n              .::::,,:,,,:,,,,,,::;;;");usleep(90000);
								printf("\n                ,;:::::::::::;;;';,");usleep(90000);
								printf("\n                   `,::;;;';,.");usleep(90000);
							}
							else if(jumlah==6&&strcmp(a[6].Stat,"Ada")==0){
						printf("\n                                            :'+'     `` ,++");usleep(90000);
						printf("\n                                        `   +;;'++';:;;';'';`");usleep(90000);
						printf("\n                                          ,'':::;':;''::::;;:, ';");usleep(90000);
						printf("\n                                        '#';;';'';::;:,,,::,:'+;'';`");usleep(90000);
						printf("\n                                       `+#;+:'';';:::::::,:,:;#:'''``");usleep(90000);
						printf("\n                                      ``,+'':';'';:;:::';'':.;+:,';'`");usleep(90000);
						printf("\n                                      `+,''';,;;;;,:::,#;::;;::+;,'#");usleep(90000);
						printf("\n                                      .:'++';';;;;::,,:',,,:;;';#+';'.");usleep(90000);
						printf("\n                                      :''++';'';;:,,,,:::,,::;';;:::;'");usleep(90000);
						printf("\n                                    :`;;'++'''';;::::::.;,;'';;;::,,,");usleep(90000);
						printf("\n                                   .,:+:'+#';;;:,,...,,,':';+;;:;';'+");usleep(90000);
						printf("\n                                   :#,:#'##';;;;:,,,,,,,,;+;:':;;:;:;:");usleep(90000);
						printf("\n                                   '#:;#'#+;;#;;:;;:,:,,,:;;::+:::'';'");usleep(90000);
						printf("\n                                   ;'+,'+##+:';,,.::,,:,,,:;,:;,::';;");usleep(90000);
						printf("\n                                  `';.,;+#++;+;,...,.....,:;;;';+:;,;");usleep(90000);
						printf("\n                                    .''++#+';#:........,,,;.:++,:#'''`");usleep(90000);
						printf("\n                                     ,`  :'''#:.,.......,,:::;+::;;; `");usleep(90000);
						printf("\n                                         `.#'#;:;.,...,,,:,:.'+:;++,");usleep(90000);
						printf("\n                                           #++#;....,,.,,:;:;'''';");usleep(90000);
						printf("\n                                           ,++#;:,:,,,.,,:;;::;'';");usleep(90000);
						printf("\n                                           :+'+;:,,;:,,,::':.:;;;");usleep(90000);
						printf("\n                                            @+';:,,::,,,:;::.,:,:");usleep(90000);
						printf("\n                                      .`    `#+;:,,,:,::;,,:.:;;`");usleep(90000);
						printf("\n                                    `,';.   #@#';;:::::;,,:;::;");usleep(90000);
						printf("\n                                    '+;'', `+++++'''':..,,;;+:;");usleep(90000);
						printf("\n                                   ''+:;' :#+''';;:,...,,:;';::+#`");usleep(90000);
						printf("\n                                  `';;;;'''#';;:;:,,,,,.,:;'::;#++++,`");usleep(90000);
						printf("\n                                .'+;;';';;;'';::;:,,.,..,::,,;+''#+''+,`");usleep(90000);
						printf("\n                              ;;';;;;;;;;;;;;;:,,:,,,,,,:::::''@''+#+'''+");usleep(90000);
						printf("\n                            ;;+;:;;;;;;;::::::::,,,,,:,,::,,::;#;'''#+'';'`");usleep(90000);
						printf("\n                       `'++#';+;';;;::;:::::::::,,...,,,::,::+;';';''#';'''");usleep(90000);
						printf("\n                     .+++''#;;+;';;;;;;;;;;::,,,,,,::,,:,::,:::;+;;;';';;+;+");usleep(90000);
						printf("\n                    '+''''''';;+;';;;;;;;;;;;::::::::,,::::::::,#::;;:#;;;#;'");usleep(90000);
						printf("\n                   '+';;;;;;;::;+:;;:::::::::::::::::,::::::::::';,';;';;;;+;',");usleep(90000);
						printf("\n                  :+';;;:::+;::':;;::::::::::,:,,::::::::::::::::;:':';';:';''+;");usleep(90000);
						printf("\n                  ++';;::::+;,:'::::::::::::,,,,,:,,,,:,:::::::,,+,;:+:#;:;:;''+");usleep(90000);
						printf("\n                 +++';;::::;:::;;::::,,,::::::::,:,,:,,,:::,:,,,,;,;:+:';:;:;;;:");usleep(90000);
						printf("\n                 +++';;;:::;;:;::::::,::::::::,,,,,:::,:::::,,,,,,::,+::',;:,;;'");usleep(90000);
						printf("\n                ,++'';;;;;;;;;:::::::,,::::,,,,,,,::::::;:,:,,,,,,':,+::+::;,:;',");usleep(90000);
						printf("\n                #+''';;;:;;;;:::::,:,:::::,:,,,,,,,:,::::::,,,,,,,;:,'::',:;,::''");usleep(90000);
						printf("\n                ++'';;:::;';;;::;::::,,,,,,,,,,,,,,,,,,,::,,,,,,,,;:,;::;,:;,:;;'");usleep(90000);
						printf("\n                +'';'::,.;'';;:::;::::,:,,,,,,,,...,,,,,,:,,,,,,,,;:::;::,,;,::;;,");usleep(90000);
						printf("\n                +';;;::,,;+';;;;:;::::::,,,,,,,,...,.,,,,,,,..,,,,;:::';:::::::;;,");usleep(90000);
						printf("\n                +';:::,.,:#'';;;;:::::::,,,.,,,...,.....,,,.,.,,..;::,';,::,:,:;;:");usleep(90000);
						printf("\n                +';::,,..,#+'';;;;::::::,,,..,,,..,,....,,,.....,.;,;,+::::,:,:;:'");usleep(90000);
						printf("\n               `+';;:,,..,+++'';;;::::::,,,........,......,,...,.,',:.+:::,,;:;;:+        `  `  .");usleep(90000);
						printf("\n               `+';::,,.,,+'++''';::,:,,,,.........,.......,......',,.+:;:::::;''+   :''':;+';'.");usleep(90000);
						printf("\n               ;'';::,.,,,'''++'''::::,,,,,,...........`........,,':,,+:;:';;;;'++'+;:+:.;.:;:':;");usleep(90000);
						printf("\n               #''';:,,,:,+''''''''::,,,,,.............```......,:+::.+:;:';;;;;++'+:,''.';,';:;',");usleep(90000);
						printf("\n               +'';;,,,,::+''';';;;::::,,,,.......,.,....`..,.,,:;#,;.+:'::;';;''+'',,++:';':;;',':");usleep(90000);
						printf("\n              `+'';;,.::;;#';;;;;::::,,,,,,,......,.........,..::;@::,+:;;;+'''@',;,;;:,;.':::::,:'");usleep(90000);
						printf("\n             `'''';:,,,:;+@';;;;;::,,,,,,,....,..,,,,,.........,:;@;:,+:';'+';:##+:,;,:.;,+,::,::':;");usleep(90000);
						printf("\n              #''';;,,,:'+@+;;;;:::,,,.,..,,................`...,;@:;:+;'''+'';+++;`';::',,',,,:'';#");usleep(90000);
						printf("\n              +++++'+#':'+;+';;::::,,,,,,,,..........`````......,;#::,+;''++++::#,#:`.,,:;:+,,,,::;'`");usleep(90000);
						printf("\n              +++''+++++#,`+';;;::::,,,,,,,..........`````.....,,;@.:,'''+++#+;.'+'',`,.,;::;.+,,.:;`");usleep(90000);
						printf("\n                `+++++++# `+';;;;:::,,,,,.,.....`...``````......,;@::,;'++#;;':.,;'#:,.;,';;+;+,:';;");usleep(90000);
						printf("\n                      ..   #';;::::::,,,,,....`.`..````````.....,;@;;:;'+##;#+;..;:'+::,,;+'#:,;:,..");usleep(90000);
						printf("\n                           :+';:::::,,,,,,,,..```..````````.`...,;@;,;''#@+:+:#,:,';;#;;:.:;'',:';'");usleep(90000);
						printf("\n                           `+';:::::,,,,,,,...```..`````````...,,'@;,;+'#@@#':;+;;:';:'';:;;,#;',;");usleep(90000);
						printf("\n                            +';;::::,,,,,,.....``.`.```````....,:'@;,:;;#@@+;:;++';''';'';;+;;,,,,");usleep(90000);
						printf("\n                            ;+';:::,,,,,,,....```..````````....,,'@::,;;+@@+#;::,++''''';;;'+##;:`");usleep(90000);
						printf("\n                             +';:::,,,,,,,,..````...``````.....,,'@,:,':'@@++;:..'+';'';;;;;'';;;");usleep(90000);
						printf("\n                             ++;;:,,,,,:,,...``.`..`````........,:#,::;,;@#'#;;,..'+'';;;;;'+:';'.`");usleep(90000);
						printf("\n                             ;+;:,,,,:,,,,....```...````.....`...:#,,,.,'@;;;;';',;#+';;;;''':;';'`");usleep(90000);
						printf("\n                             `+;:,,.,,,,,,....```.``````.....`...,#,`..,;#:+@;',,,'#++'''''',::+::`");usleep(90000);
						printf("\n                          `#. +;:,,...,,,,..`.```..```.....````..,+,``..+:;'+.,':,#+++++++#;,';+:;:");usleep(90000);
						printf("\n                          ++.`+;:,,....,,,..`````..`.`.`....```..,+,`.`:':;+;,,'.:++++++@'';,;,+,';");usleep(90000);
						printf("\n                          ++;`+;:,,,...,,,....``.,,````...`.``....',.,`':;'+.,.:;,++++##@+';,;,;,':");usleep(90000);
						printf("\n                         :++`,';::,,...,,,,,,....,,..``......`...,;,.:;::;#.,,::;:';'+++@+';,;,:;';");usleep(90000);
						printf("\n                         '+@.,';:,,....,::,,,,,......`......``...,':`:',;'',,,:;:;;;;'#+@++:,;.,+;;");usleep(90000);
						printf("\n                        ,;+#,.+;:,,...,,,:,,,,.........``....`..,:+;`':;'+:.:,'':';::;#'#++:,;,,+::");usleep(90000);
						printf("\n                        ;'++# +';:,,:,.,,,,,.....``..,.```.....,,.';.',;+;.,::,+,;;,:;+'#++,,;,,+,,;");usleep(90000);
						printf("\n                       :;'++@ ++';:,,...,,,......``.`...`..``..,..;;;,;+',,::;:',:;;;+;+##+:,;,:+:,:");usleep(90000);
						printf("\n                       ':'++#.+'';:,,....,,,....``````....`...,,..;;;,;+,.,;:;;;::;::#;+###:.;,;'.,:");usleep(90000);
						printf("\n                      +;:;+#+@+';;::,.,..,,.......`.``...```..,..,;'.'+,.,',:.+,;,;::+;+#++:,;,''.::");usleep(90000);
						printf("\n                      +,;;+'+@+':,,:::,.,,,......,..............,,';;+:.,;:,;,+.:.;:;;'+#++:,;:'+.':");usleep(90000);
						printf("\n                      ;;;;;;+@+':,..,:,,,,..,,,,,,......`........:+:';.,;',;,;;::.::#:'+#+':,:,'#.;");usleep(90000);
						printf("\n                     ,;;:',;+@+':,,..,:,,,.....,,..........,,...,;:';:,:,#::,'.:;.::':'+#'':::,'+.+");usleep(90000);
						printf("\n                     ';:',,;@@+;:,,....,,,,................,.`.,;''',,:,',;,',::'.;',;;+#+',:,,'#.'");usleep(90000);
						printf("\n                     ';,,::+#@+;:,,...`.,,................,,...:''',,::;::.;:,,;',:,::'+#+;,:,,'#.'");usleep(90000);
						printf("\n                     ';:;:;'+@+;:,.....`.,,..................,,;+',:,;:;:,;',:,,',:,,:'+@+:,':,'@,'");usleep(90000);
						printf("\n                    ,;::::+;+@+;:,........,,..,..............,:+',::',::::'.;,;.',;,,;'+#';,':,;#:'");usleep(90000);
						printf("\n                    #';;:+;;'@+;:,......``.,.,,.......,...,.,:'',;;;:;::,'.:,,;.;,:,:;'+@';::;;:#'+");usleep(90000);
						printf("\n                   `+'';;#;''@';,,.....````.,,,,,,,...,,,,,,:;;,+',:::;,'.,:,;;,,,;,:;'+#':,,,;:;;'");usleep(90000);
						printf("\n                    +''''#';+#';,,.....```.`.,,,,,,..::::,,:;;:+:':,;:.;,,;.:,;,.,;::;'##';:,,;:;;:");usleep(90000);
						printf("\n                    +';;'#+;+#';,,,...........,::::::;:;::;';;:;:,,;,,::,:.,.,;,.:;:,''+#;';,,,:;#;");usleep(90000);
						printf("\n                    +';;++'''+';,,,,......,....,;;'';';;;;'':,,..:;,,',:,.,:,,;..,;,,;++#;';',,,,'");usleep(90000);
						printf("\n                    +';:++''''';:,,....,,......,:'+';';'';:,,..,:;,;:.;...'.,:;..:::,,'+#';;':,.,;");usleep(90000);
						printf("\n                    +';;'#';;;';::,,.,........,:,+++'+':,,,..,,;,,'..;...:;.:;,,,,::,,++#;:;:,,,;@");usleep(90000);
						printf("\n                    +';:;++;;;';':,,,,......,,:;;+';::::,.,.,:;,:,`:,::,,,:.:+,,,,;:,,+'#+;,:,:;.");usleep(90000);
						printf("\n                    #';;;++';;;;;';:,,,,.,:;;';:,,:,,,,,,.,,;,.:,::;:.;:,.,.;+,,,,::,,+;+;;,,,;;");usleep(90000);
						printf("\n                    +';;';'+;;::::''::;;;,;:::::,:,,.,,,,:;::;,.;;,.:::,..,,:+:;,.::,,+:#;;:;;,");usleep(90000);
						printf("\n                    `#';;;;+;::,,:,;:::::::,,,,,,,,,:,,:;:;,..;::`,;:,,,..,::+,:,,;:,:+:#;;;;',");usleep(90000);
						printf("\n                    .+#;;;'+:,,::::,,:::::,:,:,:,,,,:,;.;..,+;:.::,,,,.,...;:+,,,,:;,:+:#::;;:`");usleep(90000);
						printf("\n                     `+@';:,,:::,,,,:;::,,,,,,,,,:,,;,:.,';..:':..,,,,,.`,.;:+,.',::,;':+;,';");usleep(90000);
						printf("\n                      @'@'';::::,,,,,,,:::,,,,,,,,::;+',.,;';....,.,.`,..:,,:+,.@,:;:''::;;;;");usleep(90000);
						printf("\n                    +';;';'+;;::::''::;;;,;:::::,:,,.,,,,:;::;,.;;,.:::,..,,:+:;,.::,,+:#;;:;;,");usleep(90000);
						printf("\n                    `#';;;;+;::,,:,;:::::::,,,,,,,,,:,,:;:;,..;::`,;:,,,..,::+,:,,;:,:+:#;;;;',");usleep(90000);
						printf("\n                    .+#;;;'+:,,::::,,:::::,:,:,:,,,,:,;.;..,+;:.::,,,,.,...;:+,,,,:;,:+:#::;;:`");usleep(90000);
						printf("\n                     `+@';:,,:::,,,,:;::,,,,,,,,,:,,;,:.,';..:':..,,,,,.`,.;:+,.',::,;':+;,';");usleep(90000);
						printf("\n                      @'@'';::::,,,,,,,:::,,,,,,,,::;+',.,;';....,.,.`,..:,,:+,.@,:;:''::;;;;");usleep(90000);
						printf("\n                       `'#',;:::,,.,:::::,:::::::::,,,:'';+;:,,:,....,,.:,:;;+,,+,:;:'':,:,;;");usleep(90000);
						printf("\n                        `'+#,,''::::::'+;:;:,::,:,,,,,:;:,,,:;:,.,...,..:.;,;'.:'::;:#':,:.::");usleep(90000);
						printf("\n                        `#+;#',:'+#'::,.,:'+;::,,,,,,:;''+;;:,,.,,..:,.,,,;,';.';':;:#;,,,,::");usleep(90000);
						printf("\n                         ++#',+':,,,'+++':,,..:''''';;;;'::,....,.,,:,.;.::,';.;:#:::#;:,:,;:");usleep(90000);
						printf("\n                        +++:'''+;;:,:,,,:;,:::;;::::,:;:,:...,.,.,.:,..:.',,+',;,#,:;#:,:,,:");usleep(90000);
						printf("\n                    ';;,;''',:,:;''''''''';:,,,,,::::,.,,...,.,.,.::,.:,,':,'',;,',:;#:,;,,,");usleep(90000);
						printf("\n                    ;';.,'';',,,.,:..........,:::...,.:,:.,,.:,,.::,..;,;#:.'+:,,,::;#,,:,::`");usleep(90000);
						printf("\n                     +;,,'';,;.,..,...........`..,::,:,;.,,.,,,.,;,,..;,++:.;''.,.::;#,,:::'");usleep(90000);
						printf("\n                    :;':,';;;:;:,..,...............:,,;.::,,:,,.;:,..,,;'+:.:+:.,.;:;#,,;::.");usleep(90000);
						printf("\n                    .'':;;;;::,,;.,,,.,,.........;,,,;,;:.,;,:.;:,,..;:'';:.,+:.:.;:'#,:;,;`");usleep(90000);
						printf("\n                     ';;+:;;::,.,:,.,:,,,.,,.,;,,.,;,,:,:,;:'.:;,,..::::'::,,';;,.;;'+,:;::`");usleep(90000);
						printf("\n                       ,+;;::,,,..,,::,,,::::::::;.,;::;,;:'.,;,...,;,;:+::,.';:,.;:'',,;::");usleep(90000);
						printf("\n                        #':::,,,.......,;;:,::,::;;:,,;,;:;:,;,,...;,:::+,:,.;::,.;:'',,;::");usleep(90000);
						printf("\n                        #';::,.,,........,.,:;':,,,.,;,;:;',;,,...;:,'::+,',.:;:..;:;',,',:");usleep(90000);
						printf("\n                        #';:,,..,....,,,:::;::,,,..;,,::':,;,,...,;,::,;#,;..,::..::;;,:','");usleep(90000);
						printf("\n                        #+;:,,,,........,,,::,,.,.;.,;:',.;,....,',,+;,;#,;..,::,.::;;,:',;");usleep(90000);
						printf("\n                        ++;:,,...,..,.,,,,,,,,,..;.,;;',.;,..,,,;;.;;',;+:;.,.::,,::;;::;,.");usleep(90000);
						printf("\n                        '+;:,,........,,,,::,...;`:;;',,;:,,.,,,',,':;,'';,.,.:;:,::':''':");usleep(90000);
						printf("\n                        ;';:,,......,,.,:::,..,:.:;;'..;:.....,;:.;';,:';;,,,,:;:.:,';;'':");usleep(90000);
						printf("\n                         ';:,,......,.,,,,,,.:`,;:;;,,;,,.....:',,':+,;+:;,,:::;,,::;'::':`");usleep(90000);
						printf("\n                        .+;:,,......,,,,,:,.`,:::;;.,;,.....,::','':',;+,:.:::;':,::;;;:';");usleep(90000);
						printf("\n                        :+;::,......,,,,:,..,,,,;',::,.,,..,,,;,:+;;:,'#.:,'+::':,::;;,:':");usleep(90000);
						printf("\n                        .+;:,,.....,,,,,,,,..:;;,:',..,,.,.,,:','',',:'+,::#+::':,::::,:'");usleep(90000);
						printf("\n                       '@+;::,.....,,,,,,,,;;:,:';,..;,,,,,::',;';,',:'',::#'::':,,:::,,'.");usleep(90000);
						printf("\n                      `+#+;;:,,....,.,,:;;:,::';,..,;,,,,,::',,''::;,;+;,::@;::':,,:::,:;");usleep(90000);
						printf("\n                      ++#';;:,,....:;:,,::;''';,...;,,,,:;:',,;';,;,,;+::::#;:;',,::::,:;");usleep(90000);
						printf("\n                      '+#+';::,..,;:;;'''';;;:,..,;,,,,:;:':,;;':,+:,'+,;:;#;,:',,::::,:;`");usleep(90000);
						printf("\n                      +'++';;:,,,,::;;;:::;;,...,;:,,,:;,;',,;';,,+,:'#,+:;#;,:',,::::,:;.");usleep(90000);
						printf("\n                      #;''';;:::,,::::::;::....:;,:,,:',:+,,;'';.:;,:'+.#:'#:,,':,::::,:;");usleep(90000);
						printf("\n                     +++'''';;::::::::;;;,...,',.:,,;;::':.:;;':.;:,;+'.#,'+:,:':,,,:;:;`");usleep(90000);
						printf("\n                    ;+'';''';;::;:::;;::....;;,,;,::;:::',,;;';,,'::;+;.#,++,,,':,,,;;;'");usleep(90000);
						printf("\n                    +';;;;;;;;;;::;;:;,.``.;:.,:.::;:::':,;;'';,,'::'+:,#,+',,,+:,,:;;;:");usleep(90000);
						printf("\n                    ++;;;:;;;;:::;::;,...,;,,;,.;:;:::;+,;;:'':,:::;'+::+,#+;:;':,,,';;:");usleep(90000);
						printf("\n                   :'+;;;;;:::::::::,..:;;,:;,.;:;::;''::;;;';:,'::;'+,;',#+';:':,,,;:;:");usleep(90000);
						printf("\n                  `#;'';;;:::::::,,,:;:.,;':,.;:'::;'':,;:;'';,,'::;++.;;:@+'::';:,:':;");usleep(90000);
						printf("\n                  ;'';;;;:,,,,,,,::,.:;;':,:,':'::;+;,,;::;'':,:'::'+'.;;:@+::;';:::'+'");usleep(90000);
						printf("\n                  +'';;;::::::;;;;''''':,:,,;:'::;+;,,;:::;';,,;;:;'+;,;;;@+;::';::;'+;");usleep(90000);
						printf("\n                  '+'';::,,,::::;;;';:,,:.,::;;:;+;,,;:,:;;';,,'::;'+:,;;;@';::;;,::'++");usleep(90000);
						printf("\n                  ++';;;:,,::::;;;::,,:,.::;:;;'+:,,':,,:;'',.,'::;+#::;:;@';::;;:::'+,");usleep(90000);
						printf("\n                 .+'';;::::::;;;;;;:,:,.;:':;;'':,:+;::::'';:::'::'##,:','@':::;;::;'+`");usleep(90000);
						printf("\n                 ,+'';;::::;;;;;;;;:;:,';+':;+;:,;+;;:::;'+;;;'';;'#+,:',+#';:,;;:,;;+`");usleep(90000);
						printf("\n                +@++';;;:::;;;:;;;:;::'';';'+;,:'+;;;;;:'+';;;#+;'+#'.,',+#';,:;;;';;+");usleep(90000);
						printf("\n               .+##''';;;;;;;;;;;;;;;'+;;;'':,:+';:;;;:'+';:;;#';'+#;,,',+#+'';:::::'");usleep(90000);
						printf("\n               '+#++'';;;;;''';;;;;+'';;;+;:;+';::;:;:;'+':::;+;;'+#;,,',+#',:,,:,;:;");usleep(90000);
						printf("\n               '+#+''';;;;;;;;:':+'#'''++:;'';:::;;:;:+++;:::+';;'+#::,','+:;::,,,;';.");usleep(90000);
						printf("\n              .;'+++';;;;;;;;;;''#'++;;;;'';;;::;;:;:+'+;::::+;;'+#+:,:',++:::';,;;:;,");usleep(90000);
						printf("\n               ;''++''';;;;;;''+++;;;;;''';;;;;';;;:''';::::;+;;'+#',:;;,++;,::::;::;+");usleep(90000);
						printf("\n               ;+'''+'''''''++;;;:;;'+''';;;;;;:;;;'''':::;;+';;'+#':;;::#+;,::::;:';'");usleep(90000);
						printf("\n               .;++'';':;;':;;;;'+++''''';;;;;:::''';';:::::+';'+##;:;;::#+;,:,:;;''+'");usleep(90000);
						printf("\n                +;'+++'+++++++++'''+'''';;;';:::;'';'';:::;;#;;'+##;;;;::#+;:::::;:;'+");usleep(90000);
						printf("\n                ##;;;'+';;''''''';;;;;;;;'';::';'''++;:::;;;';;'+##;;;;::#+;::::;;:;'+");usleep(90000);
						printf("\n               :#+++'::;'';;::;;;;;:;;;''';;;';'';'++;::::;+';'+##+;;';:;#+':;,,:;;:''");usleep(90000);
						printf("\n               ;#+';''''';;;;;;;;;;;;;;+'''+'';;:;+';::::;;+''+###':;';:;#+';;:;:;;:''");usleep(90000);
						printf("\n               ;#+';;;';''++'''+++++'''''++;;;:::''''::;;;'+;++++@'::';:;##'++++'';:''");usleep(90000);
						printf("\n              `;#+''';;;''';;;;;;;;;+;''+;;;:;;;';;:':::;;++'+++#@;;;';;'++''';+';;:;'");usleep(90000);
						printf("\n              ;++''';;''''';;:::;'':;;+;;;';;''+'''+';;;;'+''+++##;;'';;''#;';;;';;:;.");usleep(90000);
						printf("\n             :++++';'';;;'''++++;;;;';;'';:'+;::::;'';';;'+''+++##;;;'++';'+;:;;';;:;");usleep(90000);
						printf("\n            ,+'';'';;:;'+';;''';';;'''';;'+':;'';::::;'''++'''+##+'+'#;;;::;#';;'';:,");usleep(90000);
						printf("\n          #+';'''';;;'';:;'#+;;::;:;;;'+'':;;;::'';;';:;'+''''+###'';#';;;::#;;'+';;`");usleep(90000);
						printf("\n        '+++';+;';;;;;;;;:,,;;'+++';:;;+;;;::;;''';';;;;;''''+++##;;'';;;:;+;;';':'");usleep(90000);
						printf("\n         +++++'+;';;:;;;;;::,,,:::,::;';;::::'';;;''''''';'''++''++#;;;;;;:;+;;'';''");usleep(90000);
						printf("\n      ,+++++'+'''':+:;;;;;;::,::::::;+:::::;++''''''''''''''+#''''''';;;;'+;+;';';';");usleep(90000);
						printf("\n    '+++++++'+'''+':;+,;'';;;;;'';;;':::;;+++#'+''':';''+';'+''''''''';;;;;'+;;;'''`");usleep(90000);
						printf("\n   '+'+++++''';'''#':;;+;'';;;''''+::::;+++'+#'+;';;+'';;';;'++'+'''#';;+';''''+''");usleep(90000);
						printf("\n   ++'+''+';;';';'+@#';;;'''''''+;:::;++'+'++#+++'';:+''';;+''''''''#;'';'''::;;;'");usleep(90000);
						printf("\n :`++''#''';;'''''++##@';;'':;;:;;+#'''''++++#++++'';';;'''+++++++++++++'+++++++++");usleep(90000);
						printf("\n +'+;';:';;'''''+++++++++'++++++'''++'++++++++++++';:;:;;;''++++++++++++++++++++++");usleep(90000);
						printf("\n`+#+'+''''''''+++++++++++++++++++++++'+''++'''++'++;;;'';'++'++++++++++++++++++++':");usleep(90000);
						printf("\n.#++'+''''+++++++++++++++++++++++++''+''''+''++'''+''+'''++'+++++++++++++++++++''';");usleep(90000);
						printf("\n,+++''+++++++++++++++++++++'+++++'+'+++++++++++++'+'+'++++''+''''+++++'+++'''''''':");usleep(90000);
						printf("\n.++''';''''+';;;;;;::::;::::,:,:,:::::::::::,:::,::,,::,,,:::;::::::,,:;:::';'++'''");usleep(90000);
						printf("\n.++''''''''::::::;:::::::::::::::::::::::;:::::::::::::::::::::,,,,:,,,,::::;'++''+");usleep(90000);
						printf("\n`++''';'''';;;;::::::;:;::::,::::,:,::::::::::::::::::::::::;;::::,,,:,,::::;''''''");usleep(90000);
						printf("\n +++'';'''+;;::::;::::::::::,:::::::::,,,:::::::::::::::::::;;::::::::;:::;;;'''';;");usleep(90000);
						printf("\n ++++''''++;;;;;;;;::::::::;::::::::::::;;;;;;;:::::::::::::::::::;;::::::::;';';;.");usleep(90000); 
							}
						}
						void read_file(struct Account c[100],int *jumlah2){
							
							FILE *fp;
							
							*jumlah2 = 0;
							fp=fopen("Data.txt","r");
							if(fp==NULL){
								printf("\nNo Data!");
							}
							else{
								while(!feof(fp)){
									fscanf(fp,"%[^#]#%d\n",&c[*jumlah2].Nama,&c[*jumlah2].Win);
									if(strcmp(c[*jumlah2].Nama,"") != 0)
									*jumlah2=*jumlah2+1;
								}
							}
							fclose(fp);
						}
						void write_file(struct Account c[100],int *jumlah2){
							FILE *fp;
							fp=fopen("Data.txt","w");
							for(int i=0;i<*jumlah2;i++){
								fprintf(fp,"%s#%d\n",c[i].Nama,c[i].Win);
							}
							fclose(fp);
						}
						void Insert(struct Account *c,int *jumlah2,struct Elemen a[100]){
							do{
								printf("\nInput Nickname[Max 25 Characters]: ");
								gets(c->Nama);
							}while(strlen(c->Nama)>25);
							printf("\n\nInput Success!!");
							c->Win=0;
							*jumlah2=*jumlah2+1;
							system("pause");
							for(int i=0;i<7;i++){
								strcpy(a[i].Stat,"Ada");
							}
							Winning=0;
							a[1].Health=120;a[2].Health=130;a[3].Health=125;a[4].Health=130;a[5].Health=120;a[6].Health=140;
						}
						void Sorting(struct Account c[100],int jumlah2,struct Account tuker){
							for(int i=0;i<jumlah2;i++){
								for(int j=i+1;j<jumlah2;j++){
									if(c[j].Win>c[i].Win){
										tuker=c[j];
										c[j]=c[i];
										c[i]=tuker;
									}
								}
							}
						}
						void ViewIn(struct Account c[100],int jumlah2){
							c[jumlah2].Win=Winning;
							printf("\n Your Account:%s\t\t\tWin:%12d",c[jumlah2-1].Nama,c[jumlah2].Win);
						}
						void ViewSort(struct Account c[100],int jumlah2){
							printf("\nNo.\tName\t\t    Win Score");
							if(jumlah2>5){
								jumlah2=5;
							}
							for(int i=0;i<jumlah2;i++){
								c[jumlah2-1].Win=Winning;
								printf("\n%d\t%-8s\t\t%d",i+1,c[i].Nama,c[i].Win);
							}
						}
						void Menu2(){
								printf("\n\n\t\t\tMenu:");
								printf("\n\n\t\t\t1.How to Play");
								printf("\n\n\t\t\t2.Create Account");
								printf("\n\n\t\t\t3.High Scores");
								printf("\n\n\t\t\t4.Save and exit");
								printf("\n\n\t\t\t>>>");
								scanf("%d",&Pilih);fflush(stdin);
						}
						void cerita(){
							printf("\n\n\t\t\t HOW TO PLAY?");
							printf("\n1. Create an Account!");
							printf("\n2. You can play anonimously or you can choose a character!");
							printf("\n3. Play the game!");
							printf("\n4. Everytime you lose, your character's health will be decrased by the enemy's status, the battle");
							printf("\n	 will continue till one of the character's (yours or the enemy) health runs out.");
							printf("\n5. If your character's health is 0, you can't use the same character again, therefore you should choose");
							printf("\n	 a new character. If you continue to battle, your character's health will remain the same, if you ");
							printf("\n	 want to restore the character's health you need to choose the same character or choose the another one");
							printf("\n6. keep winning to reach the hghest score ont he board");
							printf("\n7. Don't forget to save the game!!");
							printf("\n\n\n\t\t\t ENJOY THE GAME!!\n\n\t\t");
							system("pause");
						}
						void keluar(struct Elemen a[10]){
							if(strcmp(a[1].Stat,"Kosong")==0&&strcmp(a[2].Stat,"Kosong")==0&&strcmp(a[3].Stat,"Kosong")==0&&strcmp(a[4].Stat,"Kosong")==0&&strcmp(a[5].Stat,"Kosong")==0&&strcmp(a[6].Stat,"Kosong")==0){
								darah++;
							}
						}
						
						
						
						int main(){
							struct Elemen a[10];
							struct Elemen flag;
							struct Account c[100];
							struct Account tuker;
							int jumlah2=0;
							
							printf("\t\t\t\tWELCOME TO C BATTLE!!");
							Space();
							system("pause");
							read_file(c,&jumlah2);
							do{
								system("cls");
								Menu2();
								switch(Pilih){
									case 1:
										system("cls");
										cerita();
										getchar();
										break;
									case 2:
										system("cls");
										Insert(&c[jumlah2],&jumlah2,a);
										ViewIn(c,jumlah2);
										getchar();
										system("cls");
										do{
											keluar(a);
											if(darah==1){
											Choose=3;
											}
											system("cls");
											Menu();
											switch(Choose){
												case 1:
													darah=0;
													keluar(a);
														if(darah==1){
															Choose=3;
														}
													Character(a,flag);
													gambar(a);
													printf("\n\n\n");
													system("pause");
													View(a);
													getchar();
													system("cls");
													break;	
												case 2:
													keluar(a);
											  if(darah==1){
											Choose=3;
											}
													Default(a);
													gambar(a);
													getchar();
													ViewIn(c,jumlah2);
													printf("\n\n\n");
													View(a);
													printf("\n");
													Enemy(a);
													Suit(a,c,jumlah2);
													break;
												
										}
											}while(Choose!=3);
										break;
									case 3:
										system("cls");
										Sorting(c,jumlah2,tuker);
										ViewSort(c,jumlah2);
										getchar();
										break;
									case 4:
										write_file(c,&jumlah2);
										break;
							}
							}while(Pilih!=4);
							getchar();
							return 0;
						}

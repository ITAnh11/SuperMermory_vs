# SuperMemory

* Mục tiêu của game : Rèn luyện trí nhớ 
* Thể loại: Game ngắn, đơn giản (Casual)
* Chơi trên máy tính
* Cách thức chơi
  - Đầu tiên, màn hình sẽ xuất hiện các nhân vật di chuyển theo 2 hướng trái phải, mục tiêu người chơi phải ghi nhớ hình ảnh nhân vật, thứ tự và hướng di chuyển.
  - Sau khi màn hình sẽ chuyển cảnh, sẽ xuất hiện ngẫu nhiên nhân vật di chuyển, dựa vào trí nhớ người chơi sẽ phải lựa chọn đúng  
  - Chọn sai sẽ chơi lại, do tạo ngẫu nhiên nên mỗi lần chơi lại sẽ khác nhau
  - Chọn đúng hết tăng level (tăng số lượng nhân vật)


## Development Process

* 1.0 Hello Game  
	- 1.1 Tạo cửa sổ, load ảnh Hello game 
	- 1.2 Sử dụng SDL_image để load ảnh
	- 1.3 Header Common để include các thư viện, lưu các biến toàn cục, các biến const,... (dùng chung)
	- 1.4 Texture Loading and Rendering
	- 1.5 Tạo global.h để lưu các biến global. Tạo BaseObject(đối tượng hình ảnh cơ sở) để các Object khác kế thừa
	- 1.6 ScreenObject màn hình game khi play, render g_Screen
	- 1.7 CharacterObject
		- 1.7.1 Render clips, thêm flip để lật ảnh theo hướng di chuyển
		- 1.7.2 Thêm di chuyển, ngẫu nhiên hướng di chuyển trái phải
	- 1.8 set Fps
* 2.0 Main Game (Game.h)
	- 2.1 Screen 1
		- 2.1.1 List character1, size of list = LEVEL, ngẫu nhiên hình ảnh
		- 2.1.2 Xuất hiện lần lượt các character 
		
		https://user-images.githubusercontent.com/111406683/223747894-b5970f09-16a6-421a-be92-f5a9b5848502.mp4


		
	- 2.2 Move Screen sau khi kết thúc screen1
		- 2.2.1 add func handleMove cho ScreenObject,add func MoveScreen trong Game.h
		
		https://user-images.githubusercontent.com/111406683/223747936-d3fecda3-9896-43d5-a13a-6c5ce32988fa.mp4
	
	- 2.3 Screen 2
		- 2.3.1 Initalize list character2, check same between 2 character, list pos character list1 in list2
		- 2.3.2 Reset listcharacter2, xuất hiện lần lượt listCharacter2
		
		https://user-images.githubusercontent.com/111406683/224470247-c9438a7b-4a3b-4642-97f2-9de8211f54d4.mp4



#include <Dxlib.h>
#include <Scene\SceneMng.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int){
	SceneMng::Create();
	SceneMng::GetInstance().Run();
	SceneMng::Destroy();
	return 0;
}
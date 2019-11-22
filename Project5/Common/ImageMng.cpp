#include "ImageMng.h"
#include <DxLib.h>


//ImageMng* ImageMng::sInstance = nullptr;
std::unique_ptr<ImageMng,ImageMng::ImageMngDeleter> ImageMng::sInstance(new ImageMng());

const VecInt & ImageMng::GetId(const std::string & key)
{
	return GetId(key, key);
}

const VecInt & ImageMng::GetId(const std::string & key, const std::string filename)
{
	if (imgMap.find(key) == imgMap.end())
	{
		imgMap[key].resize(1);
		imgMap[key][0] = LoadGraph(filename.c_str());
	}
	return imgMap[key];
}

const VecInt & ImageMng::GetId(const std::string & key, const std::string filename, const Vector2Template<int> divsize, const Vector2Template<int> divcont)
{
	if (imgMap.find(key) == imgMap.end())
	{
	
		imgMap[key].resize(divcont.x*divcont.y);
		LoadDivGraph(filename.c_str(),divcont.x*divcont.y, divcont.x, 
			divcont.y, divsize.x, divsize.y,&imgMap[key][0]);

		//VecInt tmpdata;
		//tmpdata.resize(divcont.x*divcont.y);
		//if (LoadDivGraph(filename.c_str(), divcont.x*divcont.y, divcont.x,
		//	divcont.y, divsize.x, divsize.y, &tmpdata[0]) == 0)		//tmpdata�ɁA�ǂݍ���
		//{
		//	imgMap[key] = std::move(tmpdata);	//���L����n���B
		//}
		//else
		//{
		//	return std::move(tmpdata);		//���s�����ꍇ�A���L�����A�O���ɓn���B
		//}
		//return imgMap[key];

	}
	return imgMap[key];
}

ImageMng::ImageMng()
{
	
}

ImageMng::~ImageMng()
{
}


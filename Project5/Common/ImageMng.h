#pragma once
#include <memory>
#include <map>
#include <vector>
#include <Vector2.h>
#include <string>

using  VecInt = std::vector<int>;



#define lpImageMng ImageMng::GetInstance()
#define IMAGE_ID(KEY) (ImageMng::GetInstance().GetId(KEY))	

class ImageMng
{

public:
	static ImageMng &GetInstance(void)	//���̂��A�Ăяo���H����
	{
		return *sInstance;
	}

	const  VecInt& GetId(const std::string& key);								//�L�[�Ŏ��o���B
	const  VecInt& GetId(const std::string& key,const std::string filename);	//�L�[�ƁA�t�@�C�����Ŏ��o���B
	const  VecInt& GetId(const std::string& key, const std::string filename,	//�L�[�ƃt�@�C�����A�T�C�Y�Ɩ������w��
						const Vector2Template<int> divsize, const Vector2Template<int> divcont);

private:
	struct ImageMngDeleter				//�J�X�^���f���[�^
	{
		void operator()(ImageMng* imageMng)const
		{
			delete imageMng;
		}
	};

	ImageMng();
	~ImageMng();
	static std::unique_ptr<ImageMng, ImageMngDeleter> sInstance;

	std::map<std::string, VecInt> imgMap;		//�ǂݍ��񂾃C���[�W�f�[�^���i�[�����.


};


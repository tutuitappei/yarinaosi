#pragma once
template<class T> class Vector2Template
{
public:
	Vector2Template();
	Vector2Template(T x, T y);
	~Vector2Template();
	T x;
	T y;

	//ë„ì¸ââéZéq
	Vector2Template& operator = (const Vector2Template&Vec);

	//ìYÇ¶éöââéZéq
	Vector2Template& operator [] (T i);

	//î‰ärââéZéq
	bool operator == (const Vector2Template&Vec)const;

	bool operator != (const Vector2Template&Vec)const;

	bool operator >  (const Vector2Template&Vec)const;

	bool operator >= (const Vector2Template&Vec)const;

	bool operator <  (const Vector2Template&Vec)const;

	bool operator <= (const Vector2Template&Vec)const;

	//íPçÄââéZéq
	Vector2Template& operator+= (const Vector2Template&Vec);

	Vector2Template& operator-= (const Vector2Template&Vec);

	Vector2Template& operator*= (T k);

	Vector2Template& operator/= (T k);

	Vector2Template operator + () const;

	Vector2Template operator - () const;



};

//Õﬁ∏ƒŸÇÃââéZ


//Vector2 + Vector2
template<class T>
Vector2Template<T> operator + (const Vector2Template<T> & u, const Vector2Template<T> & v);

//Vector2 - Vector2
template<class T>
Vector2Template<T> operator - (const Vector2Template<T>& u, const Vector2Template<T>& v);

//Vector2 * Vector2
template<class T>
Vector2Template<T> operator * (const Vector2Template<T>& u, const Vector2Template<T>& v);

//Vector2 / Vector2
template<class T>
Vector2Template<T> operator / (const Vector2Template<T>& u, const Vector2Template<T>& v);

//Vector2 % Vector2
template<class T>
Vector2Template<T> operator % (const Vector2Template<T>& u, const Vector2Template<T>& v);

//Vector2 +Å@int
template<class T>
Vector2Template<T> operator + (const Vector2Template<T>& u, T a);

//Vector2 - int
template<class T>
Vector2Template<T> operator - (const Vector2Template<T>& u, T a);

//Vector2 * int
template<class T>
Vector2Template<T> operator * (const Vector2Template<T>& u, T a);

//int	  * vector2
template<class T>
Vector2Template<T> operator * (T a, const Vector2Template<T>& u);

//Vector2 / int
template<class T>
Vector2Template<T> operator / (const Vector2Template<T>& u, T a);

//Vector2 % int
template<class T>
Vector2Template<T> operator % (const Vector2Template<T>& u, T a);

#include "./details/Vector2.h"
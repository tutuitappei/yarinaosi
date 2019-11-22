#pragma once
template<class T> class Vector2Template
{
public:
	Vector2Template();
	Vector2Template(T x, T y);
	~Vector2Template();
	T x;
	T y;

	//������Z�q
	Vector2Template& operator = (const Vector2Template&Vec);

	//�Y�������Z�q
	Vector2Template& operator [] (T i);

	//��r���Z�q
	bool operator == (const Vector2Template&Vec)const;

	bool operator != (const Vector2Template&Vec)const;

	bool operator >  (const Vector2Template&Vec)const;

	bool operator >= (const Vector2Template&Vec)const;

	bool operator <  (const Vector2Template&Vec)const;

	bool operator <= (const Vector2Template&Vec)const;

	//�P�����Z�q
	Vector2Template& operator+= (const Vector2Template&Vec);

	Vector2Template& operator-= (const Vector2Template&Vec);

	Vector2Template& operator*= (T k);

	Vector2Template& operator/= (T k);

	Vector2Template operator + () const;

	Vector2Template operator - () const;



};

//�޸�ق̉��Z


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

//Vector2 +�@int
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
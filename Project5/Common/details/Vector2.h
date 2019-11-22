#include <Vector2.h>

template<class T>
Vector2Template<T>::Vector2Template()
{
	x = 0;
	y = 0;
}

template<class T>
Vector2Template<T>::Vector2Template(T x, T y)
{
	this->x = x;
	this->y = y;
}


template<class T>
Vector2Template<T>::~Vector2Template()
{
}

template<class T>
Vector2Template<T>& Vector2Template<T>::operator=(const Vector2Template<T> & Vec)
{
	this->x = Vec.x;
	this->y = Vec.y;
	return *this;
}

template<class T>
Vector2Template<T>& Vector2Template<T>::operator[](T i)
{
	if (i == 0)
	{
		return this->x;
	}
	else if (i == 1)
	{
		return this->y;
	}
	else
	{
		return this->x;			//��O�̏ꍇ
	}
	// TODO: return �X�e�[�g�����g�������ɑ}�����܂�
}

template<class T>
bool Vector2Template<T>::operator==(const Vector2Template & Vec) const
{
	return ((this->x == Vec.x) && (this->y == Vec.y));
}

template<class T>
bool Vector2Template<T>::operator!=(const Vector2Template & Vec) const
{
	return !((this->x == Vec.x) && (this->y == Vec.y));
}

template<class T>
bool Vector2Template<T>::operator>(const Vector2Template & Vec) const
{
	return ((this->x > Vec.x) && (this->y > Vec.y));
}

template<class T>
bool Vector2Template<T>::operator>=(const Vector2Template & Vec) const
{
	return ((this->x >= Vec.x) && (this->y >= Vec.y));
}

template<class T>
bool Vector2Template<T>::operator<(const Vector2Template & Vec) const
{
	return ((this->x < Vec.x) && (this->y < Vec.y));
}

template<class T>
bool Vector2Template<T>::operator<=(const Vector2Template & Vec) const
{
	return ((this->x <= Vec.x) && (this->y <= Vec.y));
}

template<class T>
Vector2Template<T> & Vector2Template<T>::operator+=(const Vector2Template & Vec)
{
	x += Vec.x;
	y += Vec.y;
	return *this;
}
template<class T>
Vector2Template<T> & Vector2Template<T>::operator-=(const Vector2Template & Vec)
{
	x -= Vec.x;
	y -= Vec.y;
	return *this;
}

template<class T>
Vector2Template<T> & Vector2Template<T>::operator*=(T k)
{
	x *= k;
	y *= k;
	return *this;
}

template<class T>
Vector2Template<T> & Vector2Template<T>::operator/=(T k)
{
	x /= k;
	y /= k;
	return *this;
}
template<class T>
Vector2Template<T> Vector2Template<T>::operator+() const
{
	return *this;
}
template<class T>
Vector2Template<T> Vector2Template<T>::operator-() const
{
	return Vector2Template(-this->x, -this->y);
}

//�޸�ق̉��Z



//Vector2 + Vector2
template<class T>
Vector2Template<T> operator + (const Vector2Template<T>& u, const Vector2Template<T>& v)
{
	Vector2Template<T> vec; //= { u.x + v.x ,u.y + v.y };
	vec.x = u.x + v.x;
	vec.y = u.y + v.y;
	return vec;
}

//Vector2 - Vector2
template<class T>
Vector2Template<T> operator - (const Vector2Template<T>& u, const Vector2Template<T>& v)
{
	Vector2Template<T> vec; //= { u.x - v.x ,u.y - v.y };
	vec.x = u.x - v.x;
	vec.y = u.y - v.y;
	return vec;
}

//Vector2 * Vector2
template<class T>
Vector2Template<T> operator * (const Vector2Template<T>& u, const Vector2Template<T>& v)
{
	Vector2Template<T> vec;
	vec.x = u.x * v.x;
	vec.y = u.y * v.y;
	return vec;
}

//Vector2 / Vector2
template<class T>
Vector2Template<T> operator / (const Vector2Template<T>& u, const Vector2Template<T>& v)
{
	Vector2Template<T> vec;
	vec.x = u.x / v.x;
	vec.y = u.y / v.y;
	return vec;
}

//Vector2 % Vector2
template<class T>
Vector2Template<T> operator % (const Vector2Template<T>& u, const Vector2Template<T>& v)
{
	Vector2Template<T> vec;
	vec.x = u.x % v.x;
	vec.y = u.y % v.y;
	return vec;
}

//Vector2 +�@int
template<class T>
Vector2Template<T> operator + (const Vector2Template<T>& u, T a)
{
	Vector2Template<T> vec;
	vec.x = u.x + a;
	vec.y = u.y + a;
	return vec;
}

//Vector2 - int
template<class T>
Vector2Template<T> operator - (const Vector2Template<T>& u, T a)
{
	Vector2Template<T> vec;
	vec.x = u.x - a;
	vec.y = u.y - a;
	return vec;
}

//Vector2 * int
template<class T>
Vector2Template<T> operator * (const Vector2Template<T>& u, T a)
{
	Vector2Template<T> vec;
	vec.x = u.x * a;
	vec.y = u.y * a;
	return vec;
}


//int	  * vector2
template<class T>
Vector2Template<T> operator * (T a, const Vector2Template<T>& u)
{
	Vector2Template<T> vec;
	vec.x = a * u.x;
	vec.y = a * u.y;
	return vec;
}


//Vector2 / int
template<class T>
Vector2Template<T> operator / (const Vector2Template<T>& u, T a)
{
	Vector2Template<T> vec;
	vec.x = u.x / a;
	vec.y = u.y / a;
	return vec;
}


//Vector2 % int
template<class T>
Vector2Template<T> operator % (const Vector2Template<T>& u, T a)
{
	Vector2Template<T> vec;
	vec.x = u.x % a;
	vec.y = u.y % a;
	return vec;
}


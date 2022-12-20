#include "TMonom.h"

TMonom::TMonom(double coef, std::vector<int> degrees) {
	_coef = coef;
	_degrees = degrees;
}

TDatValue* TMonom::GetCopy() {
	return new TMonom(this->_coef, this->_degrees);
}

double TMonom::GetCoeff(void) const {
	return _coef; 
}

std::vector<int> TMonom::GetDegrees(void) const {
	return _degrees; 
}

TMonom& TMonom::operator=(const TMonom& tmp)
{
	this->_coef = tmp._coef;
	this->_degrees = tmp._degrees;
	return *this;
}

bool TMonom::operator==(const TMonom& tmp) const
{
	return this->_coef == tmp._coef && this->_degrees == tmp._degrees;
}

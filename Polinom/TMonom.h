#pragma once
#include "TDatValue.h"
#include <vector>

class TMonom : public TDatValue {
protected:
	double _coef;
	std::vector<int> _degrees;

public:
	TMonom(double coef, std::vector<int> degrees);
	virtual TDatValue* GetCopy(); //??? override
	/// <summary>
	/// Получить коэфицент при мономе
	/// </summary>
	/// <returns>Коэфицент при мономе</returns>
	double GetCoeff() const;
	/// <summary>
	/// Получить степени монома
	/// </summary>
	/// <returns>Степени монома</returns>
	std::vector<int> GetDegrees() const;

	TMonom& operator=(const TMonom& tmp);

	bool operator==(const TMonom& tmp) const;

	bool operator<(const TMonom& tmp) const;

	friend class TPolinom;

};

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
	/// �������� ��������� ��� ������
	/// </summary>
	/// <returns>��������� ��� ������</returns>
	double GetCoeff() const;
	/// <summary>
	/// �������� ������� ������
	/// </summary>
	/// <returns>������� ������</returns>
	std::vector<int> GetDegrees() const;

	TMonom& operator=(const TMonom& tmp);

	bool operator==(const TMonom& tmp) const;

	bool operator<(const TMonom& tmp) const;

	friend class TPolinom;

};

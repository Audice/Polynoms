#pragma once
#include "TRootLink.h"

class TDatLink;
typedef TDatLink* PTDatLink;

class TDatLink : public TRootLink {
protected: 
	PTDatValue _pValue;
public:
	TDatLink(PTDatValue pVal = nullptr, PTRootLink pN = nullptr) : TRootLink(pN) {
		_pValue = pVal;
	}
	PTDatValue GetDatValue() {
		return _pValue;
	}
	PTDatLink GetNextDatLink() { 
		return static_cast<PTDatLink>(_pNext);
	}
	friend class TDatList;

};

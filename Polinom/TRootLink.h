#pragma once
#include "TDatValue.h"

class TRootLink;
typedef TRootLink* PTRootLink;

typedef TDatValue* PTDatValue;

class TRootLink {
protected:
	PTRootLink _pNext;
public:
	TRootLink(PTRootLink pN = nullptr) { _pNext = pN; }
	PTRootLink GetNext() {
		return _pNext;
	}
	void SetNextLink(PTRootLink newNextLink) {
		_pNext = newNextLink;
	}

	void InsertNextLink(PTRootLink newNextLink) {
		PTRootLink tmp = _pNext;
		_pNext = newNextLink;
		if (newNextLink != nullptr)
			newNextLink->_pNext = tmp;
	}

	virtual void SetDatValue(PTDatValue pVal) = 0;
	virtual PTDatValue GetDatValue() = 0;


	friend class TDatList;
};

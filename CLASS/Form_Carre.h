#pragma once
#include "Form.h"

class Form_Carre : public Form
{

public:

    Form_Carre();

    // ===== Form ===========================================================

    virtual ~Form_Carre();

    virtual double GetArea() const;
    virtual double GetDiameter() const;

    virtual unsigned int GetInfoCount() const;
    virtual const char* GetInfoName(unsigned int aIndex) const;

    virtual void SetInfo(unsigned int aIndex, double aValue_mm);

private:

    double mBase_mm;

};
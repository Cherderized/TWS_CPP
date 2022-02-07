#pragma once
#pragma once
#include "Form.h"

class Form_Cercle : public Form
{

public:

    Form_Cercle();

    // ===== Form ===========================================================

    virtual ~Form_Cercle();

    virtual double GetArea() const;
    virtual double GetDiameter() const;

    virtual unsigned int GetInfoCount() const;
    virtual const char* GetInfoName(unsigned int aIndex) const;

    virtual void SetInfo(unsigned int aIndex, double aValue_mm);

private:

    double mRayon_mm;

};
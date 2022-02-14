#pragma once
#pragma once
#pragma once
#include "Form.h"

class Form_Ellipse : public Form
{

public:

    Form_Ellipse();

    // ===== Form ===========================================================

    virtual ~Form_Ellipse();

    virtual double GetArea() const;
    virtual double GetDiameter() const;

    virtual unsigned int GetInfoCount() const;
    virtual const char* GetInfoName(unsigned int aIndex) const;

    virtual void SetInfo(unsigned int aIndex, double aValue_mm);

private:

    double mRayonA_mm;
    double mRayonB_mm;

};
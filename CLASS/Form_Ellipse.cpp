
// Author    KMS - Martin Dubois, P. Eng.
// Copyright (C) 2022 KMS
// License   http ://www.apache.org/licenses/LICENSE-2.0
// Product   TWS - CPP
// File      CLASS/Form_Rectangle.cpp

// ===== C ==================================================================
#include <assert.h>

// ===== CLASS ==============================================================
#include "Form_Ellipse.h"
#define _USE_MATH_DEFINES
#include <cmath>
// Public
// //////////////////////////////////////////////////////////////////////////

Form_Ellipse::Form_Ellipse() : mRayonA_mm(1.0), mRayonB_mm(1.0)
{
}

// ===== Form ===============================================================

Form_Ellipse::~Form_Ellipse()
{
}

double Form_Ellipse::GetArea() const
{
    return mRayonA_mm * mRayonB_mm * 3.14159265358979323846;
}

double Form_Ellipse::GetDiameter() const
{
    return 3.14159265358979323846 * sqrt(2 * (pow(mRayonA_mm, 2) + pow(mRayonB_mm, 2)));
}

unsigned int Form_Ellipse::GetInfoCount() const
{
    return 2;
}

const char* Form_Ellipse::GetInfoName(unsigned int aIndex) const
{
    const char* lResult = NULL;

    switch (aIndex)
    {
    case 0: lResult = "le rayon A"; break;
    case 1: lResult = "le rayon B"; break;

    default: assert(false);
    }

    return lResult;
}

void Form_Ellipse::SetInfo(unsigned int aIndex, double aValue_mm)
{
    switch (aIndex)
    {
    case 0: mRayonA_mm = aValue_mm; break;
    case 1: mRayonB_mm = aValue_mm; break;

    default: assert(false);
    }
}

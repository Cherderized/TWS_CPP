
// Author    KMS - Martin Dubois, P. Eng.
// Copyright (C) 2022 KMS
// License   http ://www.apache.org/licenses/LICENSE-2.0
// Product   TWS - CPP
// File      CLASS/Form_Rectangle.cpp

// ===== C ==================================================================
#include <assert.h>

// ===== CLASS ==============================================================
#include "Form_Cercle.h"

// Public
// //////////////////////////////////////////////////////////////////////////

Form_Cercle::Form_Cercle() : mRayon_mm(1.0)
{
}

// ===== Form ===============================================================

Form_Cercle::~Form_Cercle()
{
}

double Form_Cercle::GetArea() const
{
    return 3.14159265358979323846 * (mRayon_mm * mRayon_mm);
}

double Form_Cercle::GetDiameter() const
{
    return 2 * 3.14159265358979323846 * mRayon_mm;
}

unsigned int Form_Cercle::GetInfoCount() const
{
    return 1;
}

const char* Form_Cercle::GetInfoName(unsigned int aIndex) const
{
    const char* lResult = NULL;

    switch (aIndex)
    {
    case 0: lResult = "le rayon"; break;

    default: assert(false);
    }

    return lResult;
}

void Form_Cercle::SetInfo(unsigned int aIndex, double aValue_mm)
{
    switch (aIndex)
    {
    case 0: mRayon_mm = aValue_mm; break;

    default: assert(false);
    }
}

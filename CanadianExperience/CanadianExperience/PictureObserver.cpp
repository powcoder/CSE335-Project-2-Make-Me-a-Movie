https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
https://powcoder.com
代写代考加微信 powcoder
Assignment Project Exam Help
Add WeChat powcoder
/**
 * \file PictureObserver.cpp
 *
 * \author Charles B. Owen
 */

#include "pch.h"
#include "PictureObserver.h"

#include "Picture.h"

CPictureObserver::CPictureObserver()
{
}



/** Set the picture for this observer
* \param picture The picture to set */
void CPictureObserver::SetPicture(std::shared_ptr<CPicture> picture)
{
    mPicture = picture;
    mPicture->AddObserver(this);
}

/** Destructor */
CPictureObserver::~CPictureObserver()
{
    if (mPicture != nullptr)
    {
        mPicture->RemoveObserver(this);
    }
}

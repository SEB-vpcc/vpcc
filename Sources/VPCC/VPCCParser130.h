/**
* This file is part of Nokia VPCC implementation
*
* Copyright (c) 2019-2020 Nokia Corporation and/or its subsidiary(-ies). All rights reserved.
*
* Contact: VPCC.contact@nokia.com
*
* This software, including documentation, is protected by copyright controlled by Nokia Corporation and/ or its
* subsidiaries. All rights are reserved.
*
* Copying, including reproducing, storing, adapting or translating, any or all of this material requires the prior
* written consent of Nokia.
*/

#pragma once

#include "VPCC/VPCCDatatypes130.h"

#include "FileSystem.h"

namespace VPCC130
{
    bool parseFrameGroups(IOBuffer& buffer, std::vector<FrameGroup>& frameGroups, bool firstOnly = false);
}

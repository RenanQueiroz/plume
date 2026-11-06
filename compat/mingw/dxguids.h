//
// plume
//
// Copyright (c) 2024 renderbag and contributors. All rights reserved.
// Licensed under the MIT license. See LICENSE file for details.
//

// Stands in for DirectX-Headers' dxguids.h when Plume is built by MinGW against mingw-w64's own
// d3d12.h (PLUME_D3D12_AGILITY_SDK_ENABLED off). D3D12MemoryAllocator includes <dxguids.h> whenever
// the compiler is not MSVC; mingw-w64's d3d12.h and dxgi headers already declare every interface's
// GUID (__CRT_UUID_DECL), so nothing more is needed.

#pragma once

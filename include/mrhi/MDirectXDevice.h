//
// Created by ericg on 11/11/2024.
//

#ifndef MDIRECTXDEVICE_H
#define MDIRECTXDEVICE_H
#include <d3d12.h>
#include <dxgi1_6.h>

namespace mrhi::d3d12
{
    class MDirectXDevice
    {
    public:
        void Initialize();
    private:
        IDXGIFactory *factory;
        IDXGIAdapter *adapter;
        ID3D12Device *device;
    };
}

#endif //MDIRECTXDEVICE_H

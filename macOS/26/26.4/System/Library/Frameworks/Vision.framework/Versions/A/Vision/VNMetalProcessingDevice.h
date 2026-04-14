@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (id)metalDevice;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)isEqual:(id)a0;
- (int)espressoEngine;
- (BOOL)targetsGPU;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (int)espressoDeviceID;
- (id)computeDevice;
- (id)description;

@end

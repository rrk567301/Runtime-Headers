@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoEngine;
- (id)description;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;
- (id)computeDevice;
- (int)espressoDeviceID;
- (void).cxx_destruct;
- (BOOL)targetsGPU;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)metalDevice;

@end

@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoStorageType;
- (int)espressoEngine;
- (id)metalDevice;
- (unsigned long long)hash;
- (BOOL)targetsGPU;
- (id)initWithMetalDevice:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)espressoDeviceID;
- (BOOL)isEqual:(id)a0;
- (id)computeDevice;

@end

@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoDeviceID;
- (BOOL)targetsGPU;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;
- (id)description;
- (id)metalDevice;
- (int)espressoEngine;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)computeDevice;
- (void).cxx_destruct;

@end

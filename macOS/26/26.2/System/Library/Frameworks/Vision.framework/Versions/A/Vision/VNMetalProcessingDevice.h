@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (int)espressoEngine;
- (int)espressoStorageType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)computeDevice;
- (int)espressoDeviceID;
- (void).cxx_destruct;
- (id)description;
- (id)metalDevice;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)targetsGPU;

@end

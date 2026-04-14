@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)metalDevice;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;

@end

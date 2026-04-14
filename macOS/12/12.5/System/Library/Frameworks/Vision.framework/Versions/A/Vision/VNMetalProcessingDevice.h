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
- (BOOL)targetsGPU;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;

@end

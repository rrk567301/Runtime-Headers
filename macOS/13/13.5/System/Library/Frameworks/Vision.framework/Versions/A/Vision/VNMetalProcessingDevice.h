@protocol MTLDevice;

@interface VNMetalProcessingDevice : VNProcessingDevice {
    id<MTLDevice> _metalDevice;
}

+ (id)allDevices;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)metalDevice;
- (int)espressoDeviceID;
- (int)espressoEngine;
- (int)espressoStorageType;
- (id)initWithMetalDevice:(id)a0;
- (BOOL)targetsGPU;

@end

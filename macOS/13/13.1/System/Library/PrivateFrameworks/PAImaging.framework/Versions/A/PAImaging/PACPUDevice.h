@class _PALowPriorityCPUDevice;

@interface PACPUDevice : PADevice {
    _PALowPriorityCPUDevice *_lowPriorityDevice;
}

+ (id)cpuDevice;
+ (id)availableDevices;

- (id)name;
- (id)init;
- (void).cxx_destruct;
- (int)type;
- (id)identifier;
- (id)renderFormatWithBitDepth:(long long)a0 alpha:(BOOL)a1;
- (id)extendedRangeRenderFormat;
- (id)renderFormatForPixelFormat:(id)a0 alpha:(BOOL)a1;
- (id)subDeviceWithQoS:(unsigned int)a0;

@end

@class _PALowPriorityCPUDevice;

@interface PACPUDevice : PADevice {
    _PALowPriorityCPUDevice *_lowPriorityDevice;
}

+ (id)availableDevices;
+ (id)cpuDevice;

- (int)type;
- (id)identifier;
- (void).cxx_destruct;
- (id)name;
- (id)init;
- (id)renderFormatWithBitDepth:(long long)a0 alpha:(BOOL)a1;
- (id)extendedRangeRenderFormat;
- (id)renderFormatForPixelFormat:(id)a0 alpha:(BOOL)a1;
- (id)subDeviceWithQoS:(unsigned int)a0;

@end

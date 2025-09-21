@class _PALowPriorityCPUDevice;

@interface PACPUDevice : PADevice {
    _PALowPriorityCPUDevice *_lowPriorityDevice;
}

+ (id)availableDevices;
+ (id)cpuDevice;

- (id)identifier;
- (int)type;
- (id)init;
- (id)name;
- (void).cxx_destruct;
- (id)renderFormatWithBitDepth:(long long)a0 alpha:(BOOL)a1;
- (id)extendedRangeRenderFormat;
- (id)renderFormatForPixelFormat:(id)a0 alpha:(BOOL)a1;
- (id)subDeviceWithQoS:(unsigned int)a0;

@end

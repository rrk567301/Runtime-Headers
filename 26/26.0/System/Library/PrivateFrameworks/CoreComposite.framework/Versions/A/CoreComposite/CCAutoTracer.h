@class NSHashTable;
@protocol MTLDevice, CCAutoTracerEngine;

@interface CCAutoTracer : NSObject {
    float _frameLimit;
    float _traceLimit;
    double _lastTrace;
    id<CCAutoTracerEngine> _engines[2];
    id<MTLDevice> _mostRecentDevice;
    NSHashTable *_deviceGroups;
    NSHashTable *_contexts;
}

+ (id)sharedAutoTracer;

- (id)device;
- (id)deviceGroup;
- (id)init;
- (void)registerContext:(id)a0;
- (id)contexts;
- (void).cxx_destruct;
- (id)getURLForType:(id)a0 withName:(id)a1 length:(double)a2;
- (void)registerCommandBuffer:(id)a0;
- (void)registerDeviceGroup:(id)a0;
- (void)updateWithFrameStart:(double)a0 end:(double)a1;

@end

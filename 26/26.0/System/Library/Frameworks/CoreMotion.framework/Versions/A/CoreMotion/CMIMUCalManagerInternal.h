@class NSObject;
@protocol OS_dispatch_queue;

@interface CMIMUCalManagerInternal : NSObject {
    void *fLocationdConnection;
    NSObject<OS_dispatch_queue> *fPrivateQueue;
}

- (void)dealloc;
- (id)init;
- (void)_eraseStoreForParam:(int)a0;
- (void)_insertEstimate:(const struct SensorParameterEstimate { unsigned char x0; unsigned char x1; float x2[3]; double x3[6]; float x4; unsigned long long x5; } *)a0 intervalBeforeCurrentTimeSec:(double)a1;
- (void)_insertImpact:(const struct DeviceImpactEvent { unsigned char x0; unsigned long long x1; float x2; } *)a0;
- (void)_readAndLogforParam:(int)a0;
- (void)_sendCommand:(struct CMIMUCalTestCommand { struct SensorParameterEstimate { unsigned char x0; unsigned char x1; float x2[3]; double x3[6]; float x4; unsigned long long x5; } x0; struct DeviceImpactEvent { unsigned char x0; unsigned long long x1; float x2; } x1; int x2; double x3; })a0;

@end

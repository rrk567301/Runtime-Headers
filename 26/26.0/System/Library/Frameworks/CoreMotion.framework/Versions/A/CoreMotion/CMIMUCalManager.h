@interface CMIMUCalManager : NSObject

@property (readonly, nonatomic) id _internal;

- (void)dealloc;
- (id)init;
- (void)eraseStoreForParam:(int)a0;
- (void)insertEstimate:(const struct SensorParameterEstimate { unsigned char x0; unsigned char x1; float x2[3]; double x3[6]; float x4; unsigned long long x5; } *)a0 intervalBeforeCurrentTimeSec:(double)a1;
- (void)insertImpact:(const struct DeviceImpactEvent { unsigned char x0; unsigned long long x1; float x2; } *)a0;
- (void)readAndLogforParam:(int)a0;

@end

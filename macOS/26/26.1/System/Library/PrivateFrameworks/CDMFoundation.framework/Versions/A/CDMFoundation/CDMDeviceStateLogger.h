@interface CDMDeviceStateLogger : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ memoryPressureSource;
}

+ (void)logThermalState;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)monitorMemoryPressure;

@end

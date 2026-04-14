@interface CDMDeviceStateLogger : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ memoryPressureSource;
}

+ (void)logThermalState;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)monitorMemoryPressure;

@end

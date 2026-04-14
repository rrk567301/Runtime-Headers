@interface ASDTExclavesSensorManager : NSObject {
    struct unique_ptr<ASDT::Exclaves::Sensor, std::default_delete<ASDT::Exclaves::Sensor>> { struct Sensor *__ptr_; } _sensor;
}

@property (readonly, nonatomic) void *sensor;

+ (id)forSensorName:(id)a0;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithSensorName:(id)a0;
- (void)ioThreadStartStop:(BOOL)a0 withStatusTracker:(void *)a1;

@end

@interface ASDTExclavesSensorManager : NSObject {
    struct unique_ptr<ASDT::Exclaves::Sensor, std::default_delete<ASDT::Exclaves::Sensor>> { struct __compressed_pair<ASDT::Exclaves::Sensor *, std::default_delete<ASDT::Exclaves::Sensor>> { struct Sensor *__value_; } __ptr_; } _sensor;
    struct unique_ptr<ASDT::Exclaves::StatusTracker, std::default_delete<ASDT::Exclaves::StatusTracker>> { struct __compressed_pair<ASDT::Exclaves::StatusTracker *, std::default_delete<ASDT::Exclaves::StatusTracker>> { struct StatusTracker *__value_; } __ptr_; } _statusTracker;
}

@property (readonly, nonatomic) void *sensor;
@property (readonly, nonatomic) void *statusTracker;

+ (id)forMic;
+ (id)forSensorName:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithSensorName:(id)a0;
- (void)ioThreadStartStop:(BOOL)a0;

@end

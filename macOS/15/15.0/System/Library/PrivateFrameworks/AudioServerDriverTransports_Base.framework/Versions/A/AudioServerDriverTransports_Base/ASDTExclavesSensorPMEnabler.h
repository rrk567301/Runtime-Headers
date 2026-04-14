@class NSDictionary, NSString;

@interface ASDTExclavesSensorPMEnabler : ASDTPMEnabler <ASDTStatusProtocol> {
    struct unique_ptr<ASDT::Exclaves::Sensor, std::default_delete<ASDT::Exclaves::Sensor>> { struct __compressed_pair<ASDT::Exclaves::Sensor *, std::default_delete<ASDT::Exclaves::Sensor>> { struct Sensor *__value_; } __ptr_; } _sensor;
}

@property (readonly, nonatomic) NSDictionary *status;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configForAutoSensorProperty;
+ (id)configForMic;

- (void).cxx_destruct;
- (id).cxx_construct;
- (int)enable:(BOOL)a0;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;

@end

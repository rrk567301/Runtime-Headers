@class NSString, ASDTExclavesSensorManager;

@interface ASDTExclavesStatusProperty : ASDTCustomProperty <ASDTConcreteCustomProperty>

@property (retain, nonatomic) NSString *sensorName;
@property (retain, nonatomic) ASDTExclavesSensorManager *sensorManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)configForMic;

@end

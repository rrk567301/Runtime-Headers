@class NSString, ASDTIPCAudioDeviceClient;

@interface ASDTIPCAudioPMDevice : ASDTPMDevice <ASDTIPCAudioObject>

@property (retain, nonatomic) NSString *deviceID;
@property (nonatomic) unsigned int deviceStateIdle;
@property (nonatomic) unsigned int deviceStatePrepare;
@property (nonatomic) unsigned int deviceStatePrewarm;
@property (nonatomic) unsigned int deviceStateOn;
@property (weak, nonatomic) ASDTIPCAudioDeviceClient *deviceClient;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithConfig:(id)a0 forSequencer:(id)a1;
- (BOOL)asdtHandlesPowerTransition:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStatePrepare:(int)a0;
- (int)setDeviceState:(unsigned int)a0 forPowerState:(int)a1;
- (int)getDeviceState:(unsigned int *)a0;

@end

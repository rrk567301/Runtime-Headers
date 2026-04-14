@class ASDTIOServiceMatcher, ASDTIPCAudioController, NSString;

@interface ASDTSCDeviceManager : ASDTDeviceManager <ASDTIOServiceMatchDelegate, ASDTIPCAudioDeviceAvailableDelegate>

@property (retain, nonatomic) ASDTIOServiceMatcher *ioServiceMatcher;
@property (retain, nonatomic) ASDTIPCAudioController *ipcAudioController;
@property (nonatomic) unsigned int startupMSGReadyWaitTimeUs;
@property (nonatomic) unsigned int wakeMSGReadyWaitTimeUs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)systemHasPoweredOn;
- (void)configureDevices;
- (id)initWithConfig:(id)a0 withDelegate:(id)a1;
- (void)initializeDevicesWhenReadyWithController:(id)a0;
- (void)ipcAudioDeviceClientAvailable:(id)a0 forController:(id)a1;
- (void)logStatsForDevice:(id)a0 withPowerState:(int)a1;
- (void)matchedIOService:(unsigned int)a0 withProperties:(id)a1;
- (id)messageForDroppedPacketsFromDevice:(id)a0 withScope:(unsigned int)a1;
- (id)messageForDroppedPacketsFromDevice:(id)a0 withScope:(unsigned int)a1 andElement:(unsigned int)a2;
- (void)msgSystemIsReady;
- (void)publishDevice:(id)a0;

@end

@class NSString, ASDTMSGController, NSLock;

@interface ASDTSCAudioDevice : ASDTAudioDevice

@property (retain, nonatomic) ASDTMSGController *localMSGController;
@property (retain, nonatomic) ASDTMSGController *remoteMSGController;
@property (copy, nonatomic) id /* block */ msgTrackingBlock;
@property (nonatomic) id /* block */ msgTrackingBlockUnretained;
@property (nonatomic) BOOL hasMSGStopPMDevice;
@property (nonatomic) unsigned int startDelayUs;
@property (nonatomic) unsigned int failureDelayUs;
@property (nonatomic) unsigned long long timeStampSeed;
@property (nonatomic) struct ASDTSCDeviceIOConfig { struct ASDTTimeStamp { struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } time; unsigned long long sample; } masterSyncTimeStamp; struct ASDTTimeStamp { struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } time; unsigned long long sample; } startTimeStamp; struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } zeroTimeStampPeriodTime; unsigned int zeroTimeStampPeriodFrames; unsigned int localMasterSyncID; unsigned int remoteMasterSyncID; BOOL useRemoteMasterSync; unsigned long long ioBufferCycles; struct ASDTTimeStamp { struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } time; unsigned long long sample; } zeroTimeStamp; } ioConfig;
@property (retain, nonatomic) NSString *synchronousUID;
@property (retain, nonatomic) NSLock *synchronizationLock;
@property (weak, nonatomic) ASDTSCAudioDevice *synchronousDevice;

+ (id)startStopLock;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (int)performStartIO;
- (int)performStopIO;
- (void)_updateTimestampPeriod:(double)a0;
- (id /* block */)getZeroTimestampBlock;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStateIdle:(int)a0;
- (BOOL)setupSynchronizationWithDevice:(id)a0;
- (BOOL)setupStopPMDevices;
- (BOOL)checkStreams:(id)a0 withIOConfig:(struct ASDTSCDeviceIOConfig { struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x0; struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x1; struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned long long x7; struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x8; } *)a1;
- (BOOL)checkAllStreamsWithIOConfig:(struct ASDTSCDeviceIOConfig { struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x0; struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x1; struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x2; unsigned int x3; unsigned int x4; unsigned int x5; BOOL x6; unsigned long long x7; struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } x8; } *)a0;
- (unsigned int)checkMSGStartDelayForStream:(id)a0 forRemote:(BOOL)a1;
- (int)startStreamSyncs:(id)a0 withMasterSyncTimeStamp:(const struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } *)a1 andDuration:(const struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } *)a2;
- (void)stopStreamSyncs:(id)a0;
- (void)stopMSGSyncsInDirection:(int)a0;
- (void)stopStreamSession:(id)a0;
- (void)stopStreamSessionsInDirection:(int)a0;

@end

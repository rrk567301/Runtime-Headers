@class NSSet, ASDTDeviceManager, NSDictionary, ASDTPMSequencer, NSString;

@interface ASDTAudioDevice : ASDAudioDevice <ASDTPMProtocol>

@property (nonatomic) unsigned int pmOrderPowerUp;
@property (nonatomic) unsigned int pmOrderPowerDown;
@property (retain, nonatomic) ASDTPMSequencer *pmSequencer;
@property (retain, nonatomic) ASDTDeviceManager *deviceManager;
@property (nonatomic) BOOL willDoReadInputInPlace;
@property (nonatomic) BOOL willDoWriteMixInPlace;
@property (retain, nonatomic) NSSet *relatedDeviceUIDs;
@property (readonly, nonatomic) NSSet *relatedDeviceObjectIDs;
@property (retain, nonatomic) NSDictionary *inputLatencies;
@property (retain, nonatomic) NSDictionary *outputLatencies;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) int powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultSamplingRate;
+ (id)deviceForConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;

- (id)name;
- (void).cxx_destruct;
- (void)terminate;
- (id)allStreams;
- (void)setSamplingRate:(double)a0;
- (BOOL)addCustomProperties:(id)a0;
- (BOOL)addStreams:(id)a0;
- (void)_updateSafetyOffsets:(double)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (int)performStartIO;
- (int)performStopIO;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (BOOL)addControls:(id)a0;
- (BOOL)addPMDevices:(id)a0;
- (id)customPropertyForAddress:(id)a0;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateSleep;
- (int)streamPowerStateTrantition:(int)a0;
- (int)systemCompletedPowerOn;
- (int)systemSleepPending;
- (BOOL)updateCustomProperty:(id)a0 withAddress:(id)a1;
- (void)updateInputLatency;
- (void)updateOutputLatency;

@end

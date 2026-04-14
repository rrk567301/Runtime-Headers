@class NSString, NSSet, ASDTDeviceManager, NSArray, ASDTPMSequencer, NSMutableDictionary, NSDictionary;

@interface ASDTAudioDevice : ASDAudioDevice <ASDTPMProtocol, ASDTStatusProtocol>

@property (nonatomic) unsigned int pmOrderPowerUp;
@property (nonatomic) unsigned int pmOrderPowerDown;
@property (nonatomic) BOOL pmNoStateChangeOnFailure;
@property (retain, nonatomic) ASDTPMSequencer *pmSequencer;
@property (retain, nonatomic) ASDTDeviceManager *deviceManager;
@property (nonatomic) BOOL willDoReadInputInPlace;
@property (nonatomic) BOOL willDoWriteMixInPlace;
@property (retain, nonatomic) NSSet *relatedDeviceUIDs;
@property (readonly, nonatomic) NSSet *relatedDeviceObjectIDs;
@property (retain, nonatomic) NSArray *statusProtocolObjects;
@property (nonatomic) BOOL terminated;
@property (retain, nonatomic) NSMutableDictionary *ioThreads;
@property (retain, nonatomic) NSDictionary *inputLatencies;
@property (retain, nonatomic) NSDictionary *outputLatencies;
@property (readonly, nonatomic) NSDictionary *status;
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
- (BOOL)changeSamplingRate:(double)a0;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 qualifierData:(const void *)a2 dataSize:(unsigned int *)a3 andData:(void *)a4 forClient:(int)a5;
- (int)performStartIO;
- (int)performStopIO;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (void)_updateSafetyOffsets:(double)a0;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress { unsigned int x0; unsigned int x1; unsigned int x2; } *)a0 withQualifierSize:(unsigned int)a1 andQualifierData:(const void *)a2;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (void)ioThreadStateChange:(id)a0;
- (void)performIOThreadStateChange:(id)a0;
- (BOOL)addControls:(id)a0;
- (BOOL)addPMDevices:(id)a0;
- (void)addStatusProtocolObject:(id)a0 toArray:(id)a1;
- (BOOL)configurationChangesPending;
- (id)customPropertyForAddress:(id)a0;
- (void)doTerminate;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (unsigned int)numberOfIOThreadsForUseCaseID:(unsigned int)a0;
- (unsigned int)numberOfIOThreadsForUseCaseInDescription:(id)a0;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (int)performPowerStateSleep;
- (void)performTerminate;
- (void)setupStatusProtocol;
- (int)streamPowerStateTransition:(int)a0;
- (int)systemCompletedPowerOn;
- (int)systemSleepPending;
- (BOOL)updateCustomProperty:(id)a0 withAddress:(id)a1;
- (id)updateIOThreadStateChangeDescription:(id)a0;
- (void)updateInputLatency;
- (void)updateOutputLatency;

@end

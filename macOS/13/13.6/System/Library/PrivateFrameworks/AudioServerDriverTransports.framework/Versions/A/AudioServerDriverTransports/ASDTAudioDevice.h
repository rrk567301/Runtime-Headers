@class NSString, NSDictionary, ASDTDeviceManager, ASDTPMSequencer;

@interface ASDTAudioDevice : ASDAudioDevice <ASDTPMProtocol>

@property (nonatomic) unsigned int pmOrderPowerUp;
@property (nonatomic) unsigned int pmOrderPowerDown;
@property (retain, nonatomic) ASDTPMSequencer *pmSequencer;
@property (retain, nonatomic) ASDTDeviceManager *deviceManager;
@property (nonatomic) BOOL willDoReadInputInPlace;
@property (nonatomic) BOOL willDoWriteMixInPlace;
@property (retain, nonatomic) NSDictionary *inputLatencies;
@property (retain, nonatomic) NSDictionary *outputLatencies;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) int powerState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceForConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
+ (void)setUnitTestAllowStreamFailure:(BOOL)a0;

- (id)name;
- (void).cxx_destruct;
- (id)allStreams;
- (void)setSamplingRate:(double)a0;
- (void)_updateSafetyOffsets:(double)a0;
- (BOOL)changeSamplingRate:(double)a0;
- (id)diagnosticDescriptionWithIndent:(id)a0 walkTree:(BOOL)a1;
- (id)initWithDeviceUID:(id)a0 withPlugin:(id)a1;
- (int)performStartIO;
- (int)performStopIO;
- (id /* block */)willDoReadInputBlock;
- (id /* block */)willDoWriteMixBlock;
- (id)customPropertyForAddress:(id)a0;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (int)performPowerStateIdle:(int)a0;
- (int)performPowerStateOn;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (void)updateInputLatency;
- (void)updateOutputLatency;

@end

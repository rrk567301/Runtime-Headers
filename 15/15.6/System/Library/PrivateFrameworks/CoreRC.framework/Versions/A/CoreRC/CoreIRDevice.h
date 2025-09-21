@class NSString, NSArray, NSUUID, CoreIRLearningSession;

@interface CoreIRDevice : CoreRCDevice

@property (copy, nonatomic) NSString *OSDName;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) char isTransmitter;
@property (nonatomic) char isReceiver;
@property (readonly, nonatomic) char is3rdPartyRemote;
@property (nonatomic) unsigned long long vendorID;
@property (retain, nonatomic) CoreIRLearningSession *learningSession;
@property (readonly, nonatomic) char isAppleRemote;
@property (readonly, nonatomic) NSUUID *deviceID;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (char)sendCommand:(id)a0 error:(id *)a1;
- (id)mergeProperties;
- (char)updateMappingWithSession:(id)a0 error:(id *)a1;
- (char)changeButtonCombination:(id)a0 delay:(double)a1 enabled:(char)a2 error:(id *)a3;
- (char)clearAllStoredCommands:(id *)a0;
- (char)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (char)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (id)initWithBus:(id)a0 local:(char)a1;
- (id)initWithBus:(id)a0 local:(char)a1 deviceType:(unsigned long long)a2;
- (char)is3rdPartyRemote;
- (char)isAppleRemote;
- (char)pairAppleRemote:(id *)a0;
- (char)setCommand:(unsigned long long)a0 target:(id)a1 forButtonCombination:(id)a2 delay:(double)a3 error:(id *)a4;
- (char)setOSDName:(id)a0 error:(id *)a1;
- (char)setRemoteName:(id)a0 error:(id *)a1;
- (id)startLearningSessionWithReason:(unsigned long long)a0 error:(id *)a1;
- (char)unpairAppleRemote:(id *)a0;

@end

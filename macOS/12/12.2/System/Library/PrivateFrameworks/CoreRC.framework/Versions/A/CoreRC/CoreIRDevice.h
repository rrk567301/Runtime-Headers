@class NSString, NSArray, NSUUID, CoreIRLearningSession;

@interface CoreIRDevice : CoreRCDevice

@property (copy, nonatomic) NSString *OSDName;
@property (copy, nonatomic) NSArray *buttons;
@property (nonatomic) BOOL isTransmitter;
@property (nonatomic) BOOL isReceiver;
@property (readonly, nonatomic) BOOL is3rdPartyRemote;
@property (nonatomic) unsigned long long vendorID;
@property (retain, nonatomic) CoreIRLearningSession *learningSession;
@property (readonly, nonatomic) BOOL isAppleRemote;
@property (readonly, nonatomic) NSUUID *deviceID;

+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDevice:(id)a0;
- (BOOL)sendCommand:(id)a0 error:(id *)a1;
- (id)initWithBus:(id)a0 local:(BOOL)a1 deviceType:(unsigned long long)a2;
- (BOOL)pairAppleRemote:(id *)a0;
- (BOOL)unpairAppleRemote:(id *)a0;
- (BOOL)isAppleRemote;
- (id)initWithBus:(id)a0 local:(BOOL)a1;
- (BOOL)is3rdPartyRemote;
- (BOOL)setOSDName:(id)a0 error:(id *)a1;
- (id)mergeProperties;
- (id)startLearningSessionWithReason:(unsigned long long)a0 error:(id *)a1;
- (BOOL)updateMappingWithSession:(id)a0 error:(id *)a1;
- (BOOL)clearAllStoredCommands:(id *)a0;
- (BOOL)setCommand:(unsigned long long)a0 target:(id)a1 forButtonCombination:(id)a2 delay:(double)a3 error:(id *)a4;
- (BOOL)enableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)disableButtonCombination:(id)a0 delay:(double)a1 error:(id *)a2;
- (BOOL)changeButtonCombination:(id)a0 delay:(double)a1 enabled:(BOOL)a2 error:(id *)a3;
- (BOOL)setRemoteName:(id)a0 error:(id *)a1;

@end

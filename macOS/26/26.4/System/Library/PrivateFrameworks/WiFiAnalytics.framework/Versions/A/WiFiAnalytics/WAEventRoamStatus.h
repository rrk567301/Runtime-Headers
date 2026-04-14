@class NSString, NSMutableArray, WADeviceAnalytics_BandsInNetwork;

@interface WAEventRoamStatus : WAEvent

@property (nonatomic) int flags;
@property (nonatomic) short driverRoamProfile;
@property (nonatomic) unsigned short scannedChannelCount;
@property (nonatomic) BOOL deviceIs6eCapable;
@property (nonatomic) short sourceRssi;
@property (nonatomic) short sourceChannel;
@property (nonatomic) short sourceBand;
@property (nonatomic) short sourceBW;
@property (nonatomic) unsigned int sourceAuth;
@property (nonatomic) unsigned int sourceAKMs;
@property (nonatomic) unsigned int sourcePhyMode;
@property (retain, nonatomic) NSString *sourceBssid;
@property (nonatomic) short targetRssi;
@property (nonatomic) short targetChannel;
@property (nonatomic) short targetBand;
@property (nonatomic) short targetBW;
@property (nonatomic) unsigned int targetAuth;
@property (nonatomic) unsigned int targetAKMs;
@property (nonatomic) unsigned int targetPhyMode;
@property (retain, nonatomic) NSString *targetBssid;
@property (retain, nonatomic) NSMutableArray *roamCache;
@property (nonatomic) BOOL hasRoamScanDuration;
@property (nonatomic) BOOL hasCcaTotal;
@property (nonatomic) BOOL hasCcaOthers;
@property (nonatomic) BOOL hasCcaInt;
@property (nonatomic) BOOL hasOriginChannelScore;
@property (nonatomic) BOOL hasOriginTxPer;
@property (nonatomic) BOOL hasOriginBcnPer;
@property (nonatomic) BOOL hasOriginFwTxPer;
@property (nonatomic) BOOL hasAssociatedDur;
@property (nonatomic) BOOL hasHostReason;
@property (nonatomic) BOOL hasMotionState;
@property (nonatomic) BOOL hasVoipActive;
@property (nonatomic) BOOL hasLateRoam;
@property (nonatomic) long long roamScanDuration;
@property (nonatomic) unsigned int ccaTotal;
@property (nonatomic) unsigned int ccaOthers;
@property (nonatomic) unsigned int ccaInt;
@property (nonatomic) char originChannelScore;
@property (nonatomic) unsigned long long originTxPer;
@property (nonatomic) unsigned long long originBcnPer;
@property (nonatomic) unsigned long long originFwTxPer;
@property (nonatomic) long long associatedDur;
@property (nonatomic) short hostReason;
@property (nonatomic) BOOL voipActive;
@property (nonatomic) BOOL lateRoam;
@property (retain, nonatomic) WADeviceAnalytics_BandsInNetwork *bandsInNetwork;
@property (readonly) int status;
@property (retain, nonatomic) NSString *targetApProfile;

+ (id)stringRepresentationWithStatus:(int)a0;
+ (id)stringRepresentationWithReason:(int)a0;
+ (id)akmsAsDictionary:(unsigned int)a0 withPrefix:(id)a1;
+ (id)roamFlagAsDictionary:(int)a0;

- (void)setMotionState:(short)a0;
- (void)updateRecord:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)dictionaryForCA;
- (id)eventNameForCA;
- (id)initWithDriverEvent:(id)a0 andDeviceCapabilities:(id)a1 at:(id)a2 withLqmHistory:(id)a3 withError:(id *)a4;
- (BOOL)processEventOnPersistentContainer:(id)a0 andRunPostprocessing:(id)a1 withError:(id *)a2;
- (BOOL)verifyDriverEvent:(id)a0 andDeviceCapabilities:(id)a1 withError:(id *)a2;

@end

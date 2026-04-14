@class BSSMO, NSObject;

@interface RoamMO : WADeviceAnalyticsDatedRecord

@property (nonatomic) short cacheChannel;
@property (nonatomic) int cacheChannelFlags;
@property (nonatomic) short cacheRssiBin;
@property (retain, nonatomic) NSObject *channelsScanned;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) int fwReason;
@property (nonatomic) int fwSubReason;
@property (retain, nonatomic) NSObject *historyBcnPer;
@property (retain, nonatomic) NSObject *historyBcnSched;
@property (retain, nonatomic) NSObject *historyCca;
@property (retain, nonatomic) NSObject *historyFwTxFrames;
@property (retain, nonatomic) NSObject *historyFwTxPer;
@property (retain, nonatomic) NSObject *historyRssi;
@property (retain, nonatomic) NSObject *historySnr;
@property (retain, nonatomic) NSObject *historyTxFrames;
@property (retain, nonatomic) NSObject *historyTxPer;
@property (nonatomic) short hostReason;
@property (nonatomic) BOOL isLateRoam;
@property (nonatomic) BOOL isPingPong;
@property (nonatomic) short motionState;
@property (retain, nonatomic) NSObject *neighborCache;
@property (nonatomic) short roamDelta;
@property (nonatomic) long long roamLatencyMs;
@property (nonatomic) short roamProfileType;
@property (nonatomic) short sourceBand;
@property (nonatomic) short sourceCcaOther;
@property (nonatomic) short sourceCcaSelf;
@property (nonatomic) short sourceCcaTotal;
@property (nonatomic) short sourceChannel;
@property (nonatomic) short sourceChannelWidth;
@property (nonatomic) int sourcePhyMode;
@property (nonatomic) short sourceRssi;
@property (nonatomic) short sourceSnr;
@property (nonatomic) long long sourceTimeSpentSecs;
@property (nonatomic) int status;
@property (nonatomic) short targetBand;
@property (nonatomic) short targetCca;
@property (nonatomic) short targetChannel;
@property (nonatomic) short targetChannelWidth;
@property (nonatomic) BOOL targetDhcpFailed;
@property (nonatomic) int targetDhcpLatencyMs;
@property (nonatomic) int targetDhcpLeaseMins;
@property (nonatomic) int targetPhyMode;
@property (nonatomic) short targetRssi;
@property (nonatomic) short targetSnr;
@property (nonatomic) BOOL userInteractive;
@property (nonatomic) BOOL voipActive;
@property (retain, nonatomic) BSSMO *source;
@property (retain, nonatomic) BSSMO *target;

+ (id)fetchRequest;
+ (id)roamsIntoBssid:(id)a0;
+ (id)successfulRoams;
+ (unsigned long long)dwellTimeInBand:(id)a0 bandIs24:(BOOL)a1 bssid:(id)a2 maxAgeInDays:(unsigned long long)a3 moc:(id)a4;
+ (id)roamsOutOf:(id)a0;
+ (id)roamsOutOfBssid:(id)a0;
+ (id)successfulRoamsInOrOutOf:(id)a0;
+ (id)successfulRoamsOutOf:(id)a0;
+ (id)successfulRoamsOutOf:(id)a0 since:(id)a1;

@end

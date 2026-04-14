@class NSString;

@interface WiFiUsageLQMWindowAnalysisRoaming : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *roamingReason;
@property (retain, nonatomic) NSString *roamingStatus;
@property (nonatomic) long long latency;
@property (nonatomic) BOOL isWNMScoreRoam;
@property (retain, nonatomic) NSString *roamBssSupports;
@property (nonatomic) long long roamConfigTriggerRssi;
@property (nonatomic) unsigned long long roamConfig24GHzChannelCount;
@property (nonatomic) unsigned long long roamConfig5GHzChannelCount;
@property (nonatomic) unsigned long long roamConfigTotalChannelCount;
@property (nonatomic) unsigned long long roamScannedChannelCount;
@property (nonatomic) long long originRssi;
@property (nonatomic) long long targetRssi;
@property (nonatomic) unsigned long long roamPingPongNth;

+ (id)bssSupportWithFlags:(unsigned long long)a0;
+ (BOOL)isWNMRoam:(unsigned long long)a0;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 WithRoamingState:(BOOL)a1 andReasonString:(id)a2 andStatus:(unsigned long long)a3 asString:(id)a4 andLatency:(unsigned long long)a5 andFlags:(unsigned long long)a6 andScannedChannelCount:(unsigned long long)a7 andRoamConfigTriggerRssi:(long long)a8 andRoamConfig24GHzChannelCount:(unsigned long long)a9 andRoamConfig5GHzChannelCount:(unsigned long long)a10 andOriginRSSI:(long long)a11 andTargetRssi:(long long)a12 andActiveCall:(BOOL)a13 andPingPongNth:(unsigned long long)a14 onQueue:(id)a15;

@end

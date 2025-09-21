@class NSString, WiFiUsageSessionPingPongStats;

@interface WiFiUsageLQMWindowAnalysisRoaming : WiFiUsageLQMWindowAnalysis

@property (retain, nonatomic) NSString *roamingReason;
@property (retain, nonatomic) NSString *roamingStatus;
@property (nonatomic) long long latency;
@property (nonatomic) char isWNMScoreRoam;
@property (nonatomic) char isColocatedRoam;
@property (retain, nonatomic) NSString *roamBssSupports;
@property (nonatomic) long long roamConfigTriggerRssi;
@property (nonatomic) struct { long long valueByBand[3]; char valid[3]; } roamConfigChannels;
@property (nonatomic) struct { char isAllowed; char forceApply; char deviceSupport; char isEAP; unsigned long long environment; unsigned long long networkOfInterestType; unsigned long long LOIType; } roamConfigCriteria;
@property (nonatomic) long long originRssi;
@property (nonatomic) long long targetRssi;
@property (retain, nonatomic) WiFiUsageSessionPingPongStats *pingPongStats;
@property (nonatomic) unsigned long long roamSuppressionEnabledPerc;
@property (nonatomic) char firstRoamAfterRoamRecommLifted;
@property (nonatomic) double roamSuppressionWaitForRoamStart;
@property (nonatomic) double roamSuppressionWaitForRoamEnd;
@property (nonatomic) long long scanDuration;
@property (nonatomic) unsigned long long roamScannedChannelCount;
@property (nonatomic) unsigned long long roamFullBandScanCount;
@property (nonatomic) unsigned long long roamPartialBandScanCount;
@property (nonatomic) unsigned long long roamPktsPendingAqm;
@property (nonatomic) unsigned long long roamPktsPendingTxSubQ;

+ (id)bssSupportWithFlags:(id)a0;
+ (char)isColocatedRoam:(id)a0;
+ (char)isWNMRoam:(id)a0;

- (void).cxx_destruct;
- (id)addDimensionsTo:(id)a0;
- (id)initWithRollingWindow:(id)a0 WithRoamingState:(char)a1 andReasonString:(id)a2 andStatus:(unsigned long long)a3 asString:(id)a4 andLatency:(unsigned long long)a5 andRoamData:(id)a6 andCurrentBSSSession:(id)a7 andContext:(struct context { char x0; char x1; char x2; })a8 andPingPongStats:(id)a9 andTimestamp:(id)a10 onQueue:(id)a11;

@end

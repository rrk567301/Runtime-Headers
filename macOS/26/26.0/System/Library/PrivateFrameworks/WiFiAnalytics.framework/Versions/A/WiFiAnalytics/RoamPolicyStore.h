@class AnalyticsStoreMOHandler;

@interface RoamPolicyStore : NSObject

@property (retain, nonatomic) AnalyticsStoreMOHandler *roamPolicyMOHandler;
@property BOOL enabled;

+ (BOOL)doWeHaveEnoughSamplesToBuildChanList:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
+ (BOOL)doWeHaveEnoughSamplesToBuildRoamCache:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
+ (BOOL)doWeHaveEnoughSamplesToDeriveRSSITrigger:(unsigned long long)a0 numRoamSamples:(unsigned long long)a1;
+ (id)extractChannelList:(id)a0 channelKeyPath:(id)a1 bandKeyPath:(id)a2 logFor:(const char *)a3;
+ (id)neighborChannelsAsArrayOfChanInfo:(id)a0;
+ (id)neighborChannelsOf:(id)a0;
+ (id)rangeStringWithRssiLevel:(unsigned long long)a0;

- (void)setDeploymentFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)storeNeighborsInfoLearningsFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)storeNeighborsInfoLearningsFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (BOOL)inRange:(long long)a0 high:(long long)a1 value:(long long)a2;
- (void)listOutTimeSpentOnBss:(unsigned long long)a0 timeSpentOnBss:(unsigned long long)a1 motionState:(long long)a2;
- (void)listOutLazyRoamScanInfo:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (void)listOutMostUsedSourceRssi:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (void)deriveRoamDeltaFromRoamCacheInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (void)listOutBTMRoams:(unsigned long long)a0;
- (void)checkForFrequentRoams:(unsigned long long)a0 date:(id)a1 motionState:(long long)a2;
- (void)setDeploymentFromRoamInfo:(id)a0 neighborCount:(unsigned long long)a1;
- (id)initWithAnalyticsStore:(id)a0;
- (void)locateTheNeighbor:(unsigned long long)a0 cacheRssi:(long long)a1;
- (void)listOutReassocRoams:(id)a0 neighborCount:(unsigned long long)a1 sourceRssi:(long long)a2;
- (BOOL)buildRoamPoliciesForSourceBSS:(id)a0 numRoamSamples:(unsigned long long)a1 withError:(id *)a2;
- (BOOL)monitorDeploymentChangesAfterRoam:(id)a0;
- (void)updateNeighborChannelsFromRoamTargetsChannels:(id)a0 bss:(id)a1;
- (id)deriveRoamInfo:(id)a0 numRoamSamplesCollectedSoFar:(unsigned long long)a1;
- (void)updateNeighborChannelsInCoreDataWith:(id)a0 bss:(id)a1;
- (BOOL)buildRoamCacheInfoForBss:(id)a0 numRoamSamples:(unsigned long long)a1 withError:(id *)a2;
- (void)listOutMostUsedRoamReasons:(unsigned long long)a0 roamReason:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)resetAdaptiveRoamingStateMachine:(id)a0;

@end

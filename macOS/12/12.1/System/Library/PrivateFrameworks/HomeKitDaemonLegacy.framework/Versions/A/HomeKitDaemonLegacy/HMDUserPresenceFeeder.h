@class HMDUserPresenceFeedSession, NSString, HMDUserPresenceFeed, HMDBackgroundTaskAgentTimer;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMFLogging>

@property (nonatomic) unsigned long long presenceRegionStatus;
@property (readonly, nonatomic) HMDBackgroundTaskAgentTimer *btaUpdateTimer;
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession;
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (void)submitPresenceReportMetricWithPresenceAuth:(id)a0 presenceCompute:(id)a1 reason:(id)a2 error:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)presenceAuthStatusChangedForUser:(id)a0 presenceAuthStatus:(id)a1;
- (void)presenceAuthChanged;
- (void)notifyDidLeaveHome;
- (void)notifyDidArriveHome;
- (void)notifyDidLeaveHomeRegion;
- (void)notifyDidEnterHomeRegion;
- (void)homeDataProcessed;

@end

@class HMDUserPresenceFeed, NSString, HMDUserPresenceFeedSession;

@interface HMDUserPresenceFeeder : HMDHomePresenceBase <HMFLogging>

@property (nonatomic) unsigned long long presenceRegionStatus;
@property (retain, nonatomic) HMDUserPresenceFeedSession *currentFeedSession;
@property (retain, nonatomic) HMDUserPresenceFeed *lastSentFeed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (void)presenceAuthStatusChangedForUser:(id)a0 presenceAuthStatus:(id)a1;
- (void)presenceAuthChanged;
- (void)homeDataProcessed;
- (void)notifyDidArriveHome;
- (void)notifyDidLeaveHome;
- (void)notifyDidEnterHomeRegion;
- (void)notifyDidLeaveHomeRegion;

@end

@class NSString, AMSStoreReviewGatingController, AMSBagKeySet, NSObject;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSSharedStoreReview : NSObject <AMSBagConsumer>

@property (class, readonly) NSString *bagSubProfile;
@property (class, readonly) NSString *bagSubProfileVersion;
@property (class, readonly) AMSBagKeySet *bagKeySet;

@property (readonly) NSObject<OS_dispatch_queue> *sharedStoreReviewQueue;
@property (retain, nonatomic) AMSStoreReviewGatingController *storeReviewGatingController;
@property (retain) id<AMSBagProtocol> bag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;
+ (void)_logNewSessionWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (id)_storeReviewMetrics;
+ (BOOL)_isRepeatedPromptsSupported;
+ (void)_logDidAttemptPromptReviewWithStoreReviewMetrics:(id)a0 currentTime:(id)a1;
+ (void)_persistStoreReviewMetrics:(id)a0;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 sessionCount:(long long)a1;
+ (BOOL)_shouldPromptReviewForStoreReviewMetrics:(id)a0 currentTime:(id)a1 sessionCount:(long long)a2 promptInterval:(long long)a3;
+ (BOOL)_shouldLogNewSessionWithLastLoggedTimeStamp:(id)a0 currentTime:(id)a1 sessionInterval:(long long)a2;
+ (BOOL)_isGroupedLogicSupported;
+ (void)_applicationDidForegroundWithCurrentTime:(id)a0 storeReviewMetrics:(id)a1 sessionInterval:(long long)a2;

- (BOOL)isEnabled;
- (id)initWithBag:(id)a0;
- (void)applicationDidForeground;
- (BOOL)shouldAttemptPromptReview;
- (void).cxx_destruct;
- (id)isReviewEnabled;
- (void)didAttemptPromptReview;
- (id)shouldAttemptReview;

@end

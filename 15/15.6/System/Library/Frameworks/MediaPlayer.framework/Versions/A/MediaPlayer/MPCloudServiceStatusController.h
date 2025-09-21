@class ICUserIdentity, SSVSubscriptionStatus, NSString, NSMutableDictionary, ICMusicSubscriptionStatus, SSVFairPlaySubscriptionStatus, NSObject, ICMusicSubscriptionFairPlayKeyStatus, ICMusicSubscriptionStatusMonitor;
@protocol OS_dispatch_queue, NSCopying;

@interface MPCloudServiceStatusController : NSObject <ICEnvironmentMonitorObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_cloudLibraryStatusAccessQueue;
    long long _cloudLibraryStatus;
    unsigned long long _cloudLibraryObservationCount;
    char _hasLoadedMatchStatus;
    char _hasLoadedSubscriptionAvailability;
    ICMusicSubscriptionStatusMonitor *_subscriptionStatusMonitor;
    id<NSCopying> _subscriptionStatusObservationToken;
    unsigned long long _matchStatusObservationCount;
    unsigned long long _matchStatus;
    char _observingNetworkReachability;
    char _hasSubscriptionLease;
    char _shouldPlaybackRequireSubscriptionLease;
    char _subscriptionAvailable;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *globalSerialQueue;
@property (class, readonly, nonatomic) NSMutableDictionary *controllers;
@property (class, readonly, nonatomic) MPCloudServiceStatusController *sharedController;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly, nonatomic) ICUserIdentity *userIdentity;
@property (readonly, nonatomic) SSVFairPlaySubscriptionStatus *lastKnownFairPlaySubscriptionStatus;
@property (readonly, nonatomic) ICMusicSubscriptionFairPlayKeyStatus *lastKnownSubscriptionFairPlayKeyStatus;
@property (readonly, nonatomic) unsigned long long matchStatus;
@property (readonly, nonatomic) char hasLoadedSubscriptionAvailability;
@property (readonly, nonatomic, getter=isSubscriptionAvailable) char subscriptionAvailable;
@property (readonly, copy, nonatomic) SSVSubscriptionStatus *subscriptionStatus;
@property (readonly, copy, nonatomic) ICMusicSubscriptionStatus *musicSubscriptionStatus;
@property (readonly, nonatomic) char shouldPlaybackRequireSubscriptionLease;
@property (readonly, nonatomic, getter=isCloudLibraryEnabled) char cloudLibraryEnabled;
@property (readonly, nonatomic, getter=isPurchaseHistoryEnabled) char purchaseHistoryEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_cloudServiceStatusControllerWithUserIdentity:(id)a0 createIfRequired:(char)a1;
+ (void)_postNotificationName:(id)a0 controller:(id)a1;
+ (void)_postNotificationName:(id)a0 controller:(id)a1 userInfo:(id)a2;
+ (id)cloudServiceStatusControllerWithUserIdentity:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_initWithUserIdentity:(id)a0;
- (void)endObservingCloudLibraryEnabled;
- (void)_updateSubscriptionAvailability;
- (void)_beginObservingCloudLibraryEnabled;
- (void)_beginObservingMatchStatus;
- (char)_calculateShouldPlaybackRequireSubscriptionLeaseReturningLikelyToReachRemoteServer:(char *)a0;
- (void)_cloudClientAuthenticationDidChange;
- (void)_copyObservationStateFrom:(id)a0;
- (char)_currentCloudLibraryEnabled;
- (char)_currentPurchaseHistoryEnabled;
- (void)_enableICMLErrorReasonChange:(id)a0;
- (void)_endObservingCloudLibraryEnabled;
- (void)_endObservingMatchStatus;
- (char)_handlesSameAccountAs:(id)a0;
- (void)_performBlockOnControllerHandlingTheSameAccount:(id /* block */)a0;
- (void)_updateMatchStatus;
- (void)_updateSubscriptionAvailabilityWithValue:(char)a0;
- (void)_userIdentityStoreDidChange:(id)a0;
- (void)beginObservingCloudLibraryEnabled;
- (void)beginObservingFairPlaySubscriptionStatus;
- (void)beginObservingMatchStatus;
- (void)beginObservingPurchaseHistoryEnabled;
- (void)beginObservingSubscriptionAvailability;
- (void)endObservingFairPlaySubscriptionStatus;
- (void)endObservingMatchStatus;
- (void)endObservingPurchaseHistoryEnabled;
- (void)endObservingSubscriptionAvailability;
- (void)environmentMonitorDidChangeNetworkReachability:(id)a0;
- (void)refreshMusicSubscriptionStatus;

@end

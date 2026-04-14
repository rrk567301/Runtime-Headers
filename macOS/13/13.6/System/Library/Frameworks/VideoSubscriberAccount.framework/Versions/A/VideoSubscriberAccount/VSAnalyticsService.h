@class NSObject, NSString, NSMutableArray, VSPreferences;
@protocol OS_dispatch_queue;

@interface VSAnalyticsService : VSServiceListener <VSManagedProfileConnectionObserver, VSAnalyticsServiceProtocol>

@property (retain, nonatomic) NSMutableArray *eventCache;
@property BOOL didBuddyComplete;
@property BOOL optedIn;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *eventQueue;
@property (retain, nonatomic) VSPreferences *preferences;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)onBuddyComplete;
- (void)profileConnectionSettingsChanged:(id)a0;
- (void)recordFederatedPunchoutEventWithError:(id)a0 metadata:(id)a1;
- (void)recordMetricsCenterClickEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)recordMetricsCenterEnterEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)recordMetricsCenterExitEventWithPage:(id)a0 pageType:(id)a1 data:(id)a2;
- (void)recordMetricsCenterFlexibleEventWithName:(id)a0 data:(id)a1;
- (void)recordNowPlayingBrokenEventWithBundleID:(id)a0;

@end

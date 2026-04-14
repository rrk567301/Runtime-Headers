@class NSString, HMDRemoteEventRouterProcessStateChangeAssertion, NSNotificationCenter, NSHashTable, NSObject;
@protocol OS_dispatch_queue, HMETimerProvider;

@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDelegate> {
    BOOL _isPluggedIn;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_clients;
    id<HMETimerProvider> _timerProvider;
    HMDRemoteEventRouterProcessStateChangeAssertion *_homeAppStateChangeAssertion;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_handleProcessStateChange:(id)a0;
- (void)configure;
- (void)registerClient:(id)a0;
- (void)didChangeForegroundState:(BOOL)a0;
- (void)didExpireHysteresis:(BOOL)a0;
- (id)initWithQueue:(id)a0 notificationCenter:(id)a1;

@end

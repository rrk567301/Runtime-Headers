@class NSString, HMDRemoteEventRouterProcessStateChangeAssertion, NSNotificationCenter, NSHashTable, NSObject;
@protocol OS_dispatch_queue, HMETimerProvider;

@interface HMDRemoteEventRouterAssertionController : NSObject <HMFLogging, HMDRemoteEventRouterProcessStateChangeAssertionDataSource, HMDRemoteEventRouterClientActiveStateDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isPluggedIn;
    NSObject<OS_dispatch_queue> *_queue;
    NSNotificationCenter *_notificationCenter;
    NSHashTable *_clients;
    id<HMETimerProvider> _timerProvider;
    HMDRemoteEventRouterProcessStateChangeAssertion *_appStateChangeAssertion;
    NSHashTable *_daemonAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)configure;
- (id)createEventRouterAssertion;
- (void)assertionDidBecomeInactive:(id)a0;
- (id)initWithQueue:(id)a0 notificationCenter:(id)a1;
- (void)handleConnectionActiveStateUpdatedNotification:(id)a0;
- (void)registerClient:(id)a0;
- (id)takeEventRouterAssertion;
- (void).cxx_destruct;

@end

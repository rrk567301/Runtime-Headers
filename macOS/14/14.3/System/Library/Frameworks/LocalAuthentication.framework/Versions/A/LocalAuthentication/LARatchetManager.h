@class NSString, LARatchetState, NSHashTable;
@protocol LACDTOServiceXPCClient, LACDarwinNotificationCenter;

@interface LARatchetManager : NSObject <LACDarwinNotificationCenterObserver> {
    NSHashTable *_observers;
    id<LACDTOServiceXPCClient> _remoteObjectProxy;
    id<LACDarwinNotificationCenter> _notificationCenter;
}

@property (readonly, nonatomic) BOOL isFeatureEnabled;
@property (readonly, nonatomic) BOOL isFeatureSupported;
@property (readonly, nonatomic) BOOL isFeatureAvailable;
@property (readonly, nonatomic) LARatchetState *ratchetState;
@property (readonly, nonatomic) BOOL isRatchetFeatureEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)reset;
- (void)stateWithCompletion:(id /* block */)a0;
- (long long)_armPolicy;
- (long long)_optionForRatchetOption:(long long)a0;
- (void)_performArmRequestWithIdentifier:(id)a0 context:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)cancelArmRequestWithIdentifier:(id)a0 reason:(id)a1 completion:(id /* block */)a2;
- (void)cancelCurrentRatchetWithReason:(id)a0 completion:(id /* block */)a1;
- (void)checkCanEnableFeatureWithCompletion:(id /* block */)a0;
- (void)currentRatchetWithCompletion:(id /* block */)a0;
- (void)disableFeatureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)enableFeatureWithCompletion:(id /* block */)a0;
- (void)enableFeatureWithReply:(id /* block */)a0;
- (void)notificationCenter:(id)a0 didReceiveNotification:(struct __CFString { } *)a1;
- (void)performArmRequestWithIdentifier:(id)a0 context:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (void)stateInContext:(id)a0 completion:(id /* block */)a1;

@end

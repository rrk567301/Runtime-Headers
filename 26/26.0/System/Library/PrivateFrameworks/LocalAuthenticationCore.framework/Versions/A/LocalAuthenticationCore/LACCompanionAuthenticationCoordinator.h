@class OS_dispatch_queue, NSString;
@protocol LACCompanionAuthenticationProviding;

@interface LACCompanionAuthenticationCoordinator : NSObject <LACCompanionAuthenticationProviderDelegate, LACDarwinNotificationCenterObserver, LACCompanionAuthenticationCoordinating, LACDomainStateProviding> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_mockedAuthProvider;
    void /* unknown type, empty encoding */ pendingSessions;
}

@property (nonatomic, retain) id<LACCompanionAuthenticationProviding> authProvider;
@property (nonatomic, readonly) long long companion;
@property (nonatomic, readonly) OS_dispatch_queue *replyQueue;
@property (nonatomic, retain) id<LACCompanionAuthenticationProviding> mockedAuthProvider;
@property (nonatomic, readonly) id<LACCompanionAuthenticationProviding> authenticationProvider;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) BOOL isAvailable;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)notificationCenter:(id)a0 didReceiveNotification:(const struct __CFString { } *)a1;
- (void)authenticateRequest:(id)a0 completion:(id /* block */)a1;
- (void)authenticationProvider:(id)a0 didCompleteAuthenticationWithID:(id)a1;
- (void)authenticationProvider:(id)a0 didFailAuthenticationWithID:(id)a1 error:(id)a2;
- (void)authenticationProvider:(id)a0 didStartAuthenticationWithID:(id)a1;
- (void)cancelAuthenticationForRequestIdentifier:(unsigned int)a0;
- (void)domainStateForRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithCompanion:(long long)a0 replyQueue:(id)a1;

@end

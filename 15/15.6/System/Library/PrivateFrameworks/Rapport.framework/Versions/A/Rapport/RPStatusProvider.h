@class NSString, NSMutableDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, RPSignedInUserProvider;

@interface RPStatusProvider : NSObject <NSSecureCoding, RPStatusUpdatableXPCClientInterface, RPStatusUpdatableProvider> {
    char _activateCalled;
    char _invalidateCalled;
    char _invalidateDone;
    id<RPSignedInUserProvider> _userProvider;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *currentlyProviding;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) char targetUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void)_invalidated;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)_ensureXPCStarted;
- (void)_interrupted;
- (void)_activateWithCompletion:(id /* block */)a0 reactivate:(char)a1;
- (id)_connectionWithClient:(id)a0 queue:(id)a1 userProvider:(id)a2 interruptionHandler:(id /* block */)a3 invalidationHandler:(id /* block */)a4;
- (void)cancelStatusUpdate:(id)a0 completion:(id /* block */)a1;
- (void)provideStatusUpdate:(id)a0 statusInfo:(id)a1 completion:(id /* block */)a2;

@end

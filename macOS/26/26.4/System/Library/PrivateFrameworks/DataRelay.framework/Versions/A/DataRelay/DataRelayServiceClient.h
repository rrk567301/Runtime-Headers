@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface DataRelayServiceClient : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (void)_reportError:(id)a0;
- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (void)_activate;
- (id)description;
- (void)activateWithCompletion:(id /* block */)a0;
- (id)initWithCoder:(id)a0;
- (void)sensorDataAvailable:(id)a0 dataTypes:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sensorDataUnavailable:(id)a0 dataTypes:(unsigned long long)a1 completion:(id /* block */)a2;

@end

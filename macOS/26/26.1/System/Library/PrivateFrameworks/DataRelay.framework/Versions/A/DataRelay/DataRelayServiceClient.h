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

- (id)_ensureXPCStarted;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_activate;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_invalidated;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_reportError:(id)a0;
- (void)_interrupted;
- (id)init;
- (void)sensorDataAvailable:(id)a0 dataTypes:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)sensorDataUnavailable:(id)a0 dataTypes:(unsigned long long)a1 completion:(id /* block */)a2;

@end

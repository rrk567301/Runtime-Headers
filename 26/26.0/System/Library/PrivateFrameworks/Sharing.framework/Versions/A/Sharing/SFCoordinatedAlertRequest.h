@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFCoordinatedAlertRequest : NSObject <NSSecureCoding, SFXPCInterface> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _started;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL bestIsMe;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ updateHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (nonatomic) double timeout;
@property (nonatomic) long long type;

- (void)_ensureXPCStarted;
- (void)_start;
- (void)_interrupted;
- (void)start;
- (void)dealloc;
- (void)invalidate;
- (void)_invalidated;
- (void)_invalidate;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_timeoutFired;
- (void)_startWithTimer;
- (void)coordinatedAlertUpdatedWithError:(id)a0 bestIsMe:(BOOL)a1 info:(id)a2;

@end

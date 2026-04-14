@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AA3PDeviceRoutingControl : NSObject <NSSecureCoding> {
    BOOL _activateCalled;
    id /* block */ _activateCompletion;
    BOOL _direct;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_reportError:(id)a0;
- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (void)setProperty:(id)a0 value:(id)a1;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)_handleServerDied;
- (void)setInEarState:(int)a0 inEarStateSecondary:(int)a1;

@end

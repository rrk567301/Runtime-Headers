@class NSXPCListenerEndpoint, NSString, NSDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface BTAudioRoutingRequest : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSXPCListenerEndpoint *testListenerEndpoint;
@property (nonatomic) int audioScore;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (retain, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSString *reason;
@property (copy, nonatomic) id /* block */ responseHandler;

+ (BOOL)isSupported;

- (id)_ensureXPCStarted;
- (void)_activate;
- (void)invalidate;
- (void)activate;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)_invalidated;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_reportError:(id)a0;
- (id)activateSync;
- (void)_interrupted;
- (id)init;
- (void)updateAudioState:(id)a0 withState:(unsigned int)a1;
- (BOOL)isSystemContext;
- (id)_activateSync;
- (void)_handleServerDied;

@end

@class NSXPCListenerEndpoint, NSString, NSXPCConnection, NSObject;
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
@property (copy, nonatomic) NSString *deviceAddress;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) unsigned int flags;
@property (copy, nonatomic) id /* block */ responseHandler;

- (id)description;
- (id)init;
- (void)_activate;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_invalidated;
- (void)_interrupted;
- (void)_reportError:(id)a0;
- (void)_ensureXPCStarted;

@end

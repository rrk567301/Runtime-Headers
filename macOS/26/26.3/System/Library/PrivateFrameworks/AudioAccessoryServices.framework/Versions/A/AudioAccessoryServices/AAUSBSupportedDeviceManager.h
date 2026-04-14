@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface AAUSBSupportedDeviceManager : NSObject <NSSecureCoding> {
    id /* block */ _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)invalidate;
- (id)description;
- (id)init;
- (void)_reportError:(id)a0;
- (void)_invalidated;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_interrupted;
- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)_handleServerDied;
- (void)proxCardUserActionOnHeadphone:(id)a0 withAction:(unsigned char)a1 completion:(id /* block */)a2;

@end

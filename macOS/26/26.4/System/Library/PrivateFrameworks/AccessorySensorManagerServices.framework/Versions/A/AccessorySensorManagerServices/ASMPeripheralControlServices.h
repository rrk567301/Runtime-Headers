@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ASMPeripheralControlServices : NSObject <NSSecureCoding> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSXPCConnection *_xpcCnx;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int clientID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (copy, nonatomic) id /* block */ invalidationHandler;

- (id)_ensureXPCStarted;
- (void)encodeWithCoder:(id)a0;
- (void)_interrupted;
- (void)_invalidated;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isSystemContext;
- (void)modifyPeripheralConfiguration:(id)a0 identifier:(id)a1 completion:(id /* block */)a2;
- (void)writeWithData:(id)a0 characteristic:(id)a1 identifier:(id)a2 completion:(id /* block */)a3;

@end

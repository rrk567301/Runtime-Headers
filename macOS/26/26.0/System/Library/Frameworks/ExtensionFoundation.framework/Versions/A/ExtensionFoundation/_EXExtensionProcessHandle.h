@class _EXLaunchConfiguration, RBSProcessIdentity, NSString, _EXExtensionIdentity, RBSAssertion;

@interface _EXExtensionProcessHandle : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ innerProcessHandle;
    void /* unknown type, empty encoding */ xpcConnectionLock;
    void /* unknown type, empty encoding */ xpcConnections;
    void /* unknown type, empty encoding */ observersLock;
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ mainEndpoint;
    void /* unknown type, empty encoding */ libXPCEndpoint;
    void /* unknown type, empty encoding */ sessionEndpoint;
    void /* unknown type, empty encoding */ invalidationLock_invalidated;
    void /* unknown type, empty encoding */ invalidationLock;
    void /* unknown type, empty encoding */ sandboxExtensions;
    void /* unknown type, empty encoding */ manager;
    void /* unknown type, empty encoding */ assertionAquireCount;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) _EXLaunchConfiguration *launchConfiguration;
@property (nonatomic, readonly) struct { unsigned int x0[8]; } auditToken;
@property (nonatomic, readonly) int pid;
@property (nonatomic, retain) RBSAssertion *launchAssertion;
@property (nonatomic, retain) RBSAssertion *assertion;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;
@property (nonatomic, readonly) BOOL valid;
@property (nonatomic, readonly) NSString *description;

- (void)dealloc;
- (id)makeLibXPCConnectionAndReturnError:(id *)a0;
- (void)invalidate;
- (void)encodeWithCoder:(id)a0;
- (void)removeObserver:(id)a0;
- (id)init;
- (id)makeSessionXPCConnection;
- (void)addObserver:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)makeXPCConnectionRetainProcess:(BOOL)a0 error:(id *)a1;
- (void).cxx_destruct;

@end

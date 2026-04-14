@class RBSProcessIdentity, _EXExtensionProcessHandle, _EXHostConfiguration, _EXExtensionIdentity;

@interface _EXExtensionProcess : NSObject {
    void /* unknown type, empty encoding */ _processHandle;
    void /* unknown type, empty encoding */ _observer;
    void /* unknown type, empty encoding */ suspendAssertion;
}

@property (nonatomic, readonly) BOOL valid;
@property (nonatomic, readonly) BOOL isValid;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) struct { unsigned int x0[8]; } auditToken;
@property (nonatomic, retain) _EXHostConfiguration *configuration;
@property (nonatomic, readonly) _EXExtensionIdentity *extensionIdentity;
@property (nonatomic, readonly) _EXExtensionProcessHandle *internalExtensionProcess;
@property (nonatomic, readonly) RBSProcessIdentity *processIdentity;

+ (id)extensionProcessWithConfiguration:(id)a0 error:(id *)a1;
+ (void)extensionProcessWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

- (BOOL)resumeWithError:(id *)a0;
- (id)initWithProcessHandle:(id)a0;
- (BOOL)suspendWithError:(id *)a0;
- (id)capabilityEndpointForIdentifier:(id)a0 error:(id *)a1;
- (id)processPredicate;
- (id)makeSessionXPCConnectionWithError:(id *)a0;
- (BOOL)matchesProcess:(id)a0;
- (int)rbs_pid;
- (id)makeLibXPCConnectionWithError:(id *)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)init;
- (id)newXPCConnectionWithError:(id *)a0;
- (void)invalidateLaunchAssertion;
- (void)dealloc;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)initWithProcessHandle:(id)a0 configuration:(id)a1;

@end

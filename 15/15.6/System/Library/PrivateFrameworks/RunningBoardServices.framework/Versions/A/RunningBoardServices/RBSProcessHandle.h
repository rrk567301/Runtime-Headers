@class RBSProcessIdentity, RBSProcessBundle, NSObject, RBSProcessMonitor, BSProcessHandle, RBSProcessInstance, NSString, RBSProcessState, BSAuditToken, RBSMachPortTaskNameRight, RBSProcessExitContext, RBSProcessLimitations, NSUUID;
@protocol OS_xpc_object;

@interface RBSProcessHandle : NSObject <RBSXPCSecureCoding, RBSProcessIdentifier, NSSecureCoding> {
    RBSMachPortTaskNameRight *_taskPort;
    RBSProcessMonitor *_monitor;
    BSProcessHandle *_legacyHandle;
    NSObject<OS_xpc_object> *_codedHandle;
    BSAuditToken *_bsAuditToken;
    unsigned long long _data;
    NSString *_cachedName;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) RBSProcessInstance *instance;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic, getter=isReported) char reported;
@property (readonly, nonatomic, getter=isLifecycleManaged) char lifecycleManaged;
@property (readonly, copy, nonatomic) NSString *beforeTranslocationBundlePath;
@property (readonly, copy, nonatomic) NSString *executablePath;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, nonatomic) RBSProcessBundle *bundle;
@property (readonly, nonatomic) int platform;
@property (readonly, nonatomic) RBSProcessState *currentState;
@property (readonly, nonatomic) RBSProcessExitContext *lastExitContext;
@property (readonly, nonatomic) RBSProcessLimitations *activeLimitations;
@property (readonly, nonatomic, getter=isDaemon) char daemon;
@property (readonly, copy, nonatomic) NSString *daemonJobLabel;
@property (readonly, nonatomic, getter=hasConsistentLaunchdJob) char consistentLaunchdJob;
@property (readonly, copy, nonatomic) NSString *consistentJobLabel;
@property (readonly, nonatomic, getter=isXPCService) char XPCService;
@property (readonly, copy, nonatomic) NSString *xpcServiceIdentifier;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) RBSProcessHandle *hostProcess;
@property (readonly, nonatomic, getter=isApplication) char application;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handleForPredicate:(id)a0 error:(out id *)a1;
+ (id)currentProcess;
+ (id)handleForIdentifier:(id)a0 error:(out id *)a1;
+ (id)handleForKey:(unsigned long long)a0 fetchIfNeeded:(char)a1;
+ (id)handleForLegacyHandle:(id)a0 error:(out id *)a1;
+ (id)observeForImminentAssertionsExpiration:(id /* block */)a0;
+ (char)supportsRBSXPCSecureCoding;

- (void)dealloc;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentity:(id)a0;
- (char)matchesProcess:(id)a0;
- (id)currentStateMatchingDescriptor:(id)a0;
- (int)rbs_pid;
- (double)elapsedCPUTimeForFrontBoard;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)endowmentInfoForHandle;
- (void)fullEncode:(id)a0 forKey:(id)a1;
- (id)initWithInstance:(id)a0 auditToken:(id)a1 bundleData:(id)a2 manageFlags:(unsigned char)a3 beforeTranslocationBundlePath:(id)a4 executablePath:(id)a5 cache:(char)a6;
- (id)initWithLaunchContext:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (void)intendToExitWith:(id)a0;
- (char)isManaged;
- (id)legacyHandle;
- (void)monitorForDeath:(id /* block */)a0;
- (id)processPredicate;

@end

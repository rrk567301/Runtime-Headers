@class RBSProcessIdentity, RBProcessState, RBJetsamProperties, RBSProcessIdentifier, NSDictionary, NSObject, RBSProcessInstance, NSString, RBSProcessHandle, RBSAssertionIdentifier, RBSProcessExitContext, RBSProcessExitStatus, RBSAuditToken;
@protocol OS_dispatch_source, RBBundleProperties;

@interface RBProcess : NSObject <RBSProcessIdentifier, RBConcreteTargeting> {
    int _pid;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _dataLock;
    RBProcessState *_lock_appliedState;
    RBProcessState *_lock_state;
    int _appliedJetsamPriority;
    char _usesSocketMonitoring;
    char _systemPreventsIdleSleep;
    char _diagnosticsStarted;
    char _diagnosticsComplete;
    int _appNapEligible;
    int _isTestApp;
    int _memlimit;
    char _wasVisible;
    unsigned char _manageFlags;
    RBSAssertionIdentifier *_launchAssertion;
    NSObject<OS_dispatch_source> *_procSource;
    double _cachedProcessStartTime;
}

@property (nonatomic) unsigned long long resourceCoalitionID;
@property (nonatomic) unsigned long long jetsamCoalitionID;
@property (nonatomic, getter=isJetsamCoalitionLeader) char jetsamCoalitionLeader;
@property (readonly, copy, nonatomic) RBSProcessIdentifier *identifier;
@property (readonly, copy, nonatomic) RBSProcessHandle *handle;
@property (readonly, copy, nonatomic) RBSProcessIdentity *identity;
@property (readonly, copy, nonatomic) RBSProcessInstance *instance;
@property (readonly, copy, nonatomic) RBJetsamProperties *memoryLimits;
@property (copy, nonatomic) RBSAuditToken *auditToken;
@property (readonly, nonatomic) id<RBBundleProperties> bundleProperties;
@property (readonly, nonatomic) RBProcess *hostProcess;
@property (nonatomic, getter=isTerminating) char terminating;
@property (readonly, nonatomic) int pidversion;
@property (readonly, nonatomic) NSString *shortDescription;
@property (copy, nonatomic) RBSProcessExitStatus *intendedExitStatus;
@property (retain, nonatomic) RBSProcessExitContext *lastExitContext;
@property (readonly, nonatomic, getter=isBeingPtraced) char beingPtraced;
@property (readonly, nonatomic, getter=isLifecycleManaged) char lifecycleManaged;
@property (readonly, nonatomic, getter=isJetsamManaged) char jetsamManaged;
@property (readonly, nonatomic, getter=isReported) char reported;
@property (readonly, nonatomic, getter=isPlatformBinary) char platformBinary;
@property (readonly, nonatomic, getter=isSuspended) char suspended;
@property (readonly, nonatomic, getter=isTestApp) char testApp;
@property (readonly, nonatomic) NSString *underlyingAssertion;
@property (readonly, nonatomic) double processStartTime;
@property (readonly, nonatomic) NSString *homeDirectory;
@property (readonly, nonatomic) NSString *tmpDirectory;
@property (readonly, nonatomic, getter=isContainerized) char containerized;
@property (readonly, nonatomic) NSDictionary *managedEndpointByLaunchIdentifier;
@property (retain, nonatomic) RBSAssertionIdentifier *launchAssertionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) RBProcess *process;
@property (readonly, copy, nonatomic) NSString *environment;
@property (readonly, nonatomic, getter=isSystem) char system;

+ (id)testProcessWithPid:(int)a0 andIdentity:(id)a1;
+ (id)processStateApplicationQueue;
+ (id)testProcessWithPid:(int)a0;
+ (id)testProcessWithPid:(int)a0 identity:(id)a1 launchdProps:(id)a2 andBundleProps:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (char)matchesProcess:(id)a0;
- (int)rbs_pid;
- (id)processPredicate;
- (id)createRBSTarget;
- (void)_applyState:(id)a0;
- (id)_initThinWithInstance:(id)a0 auditToken:(id)a1 bundleProperties:(id)a2 jetsamProperties:(id)a3 hostProcess:(id)a4 properties:(id)a5;
- (id)_initWithInstance:(id)a0 auditToken:(id)a1 bundleProperties:(id)a2 jetsamProperties:(id)a3 initialState:(id)a4 hostProcess:(id)a5 properties:(id)a6 systemPreventsIdleSleep:(char)a7;
- (char)_sendSignal:(int)a0;
- (void)_systemPreventIdleSleepStateDidChange:(char)a0;
- (void)collectDiagnostic:(unsigned long long)a0 description:(id)a1 domain:(unsigned int)a2 code:(unsigned long long)a3 additionalPayload:(id)a4 completion:(id /* block */)a5;
- (void)invokeHandlerOnProcessDeath:(id /* block */)a0 onQueue:(id)a1;
- (void)setProcessStartTime:(double)a0;
- (char)terminateWithContext:(id)a0;

@end

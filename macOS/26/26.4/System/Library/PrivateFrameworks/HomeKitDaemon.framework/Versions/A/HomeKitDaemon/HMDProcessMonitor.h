@class NSArray, NSString, NSMutableSet, NSObject, RBSProcessMonitor;
@protocol OS_dispatch_queue;

@interface HMDProcessMonitor : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableSet *processInfos;
@property (retain, nonatomic) RBSProcessMonitor *rbsProcessMonitor;
@property (readonly, copy) NSArray *processes;
@property (readonly, copy) NSArray *foregroundProcesses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)foregroundAssertionReasonForProcessState:(id)a0;
+ (id)logCategory;
+ (BOOL)shouldUpgradeFromBackgroundToForegroundForProcessInfo:(id)a0 processState:(id)a1;
+ (unsigned long long)applicationStateForProcessInfo:(id)a0 rbsProcessState:(id)a1;

- (void)removeProcess:(id)a0;
- (id)initWithQueue:(id)a0;
- (id)processInfoForPID:(int)a0;
- (void)updateApplicationMonitor;
- (void).cxx_destruct;
- (void)_removeProcess:(id)a0;
- (void)updateProcessInfoForRBSProcessHandle:(id)a0 usingUpdate:(id)a1;
- (void)dealloc;
- (id)processInfoForXPCConnection:(id)a0;
- (void)updateProcessInfo:(id)a0 withProcessState:(id)a1;

@end

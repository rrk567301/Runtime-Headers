@class NSSet, NSString, NSMutableDictionary, NSArray, NSData, SASampleStore, NSDictionary;

@interface UBUnblockReactiveRecovery : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_stuckServices;
    NSData *_stackshotData;
    SASampleStore *_sampleStore;
    NSDictionary *_dependencyGraph;
    NSSet *_deadlocks;
    NSDictionary *_threadIDToDeadlockDict;
}

@property (readonly) NSString *clientName;
@property (readonly) NSMutableDictionary *taskIs3PAppDict;

+ (id)getDiagnosticsQueue;

- (void)clearCaches;
- (void).cxx_destruct;
- (void)dealloc;
- (id)selectThreadExhaustionInAllThreadExhaustionsWithServiceContext:(id)a0;
- (id)_recover:(unsigned long long)a0 error:(id *)a1;
- (BOOL)avoidKillingTask:(id)a0 options:(unsigned long long)a1;
- (id)dependencyChainForNode:(id)a0 processInfos:(id)a1 options:(unsigned long long)a2;
- (void)doTermination:(id)a0 options:(unsigned long long)a1;
- (void)emitTelemetryForError:(id)a0;
- (void)fillInRecoveryInfo:(id)a0 deadlockNodeSelected:(id)a1 exhaustedTaskSelected:(id)a2 suspendedTaskSelected:(id)a3 threadExhaustions:(id)a4 processLevelDependencies:(id)a5 options:(unsigned long long)a6;
- (void)findDeadlocks;
- (id)initForStuckServices:(id)a0 clientName:(id)a1;
- (id)prepareCrashMessage:(id)a0;
- (void)prepareDependencyGraph;
- (id)processThreadInfosForDeadlock:(id)a0 processInfos:(id)a1 options:(unsigned long long)a2;
- (long long)reasonToAvoidKillingTask:(id)a0 options:(unsigned long long)a1;
- (id)recover:(unsigned long long)a0 error:(id *)a1;
- (id)selectNodeInDeadlocks:(id)a0 longerThan:(double)a1 serviceContext:(id)a2;
- (id)selectNodeInDeadlocksBlockingTask:(id)a0 preferredMinimumDuration:(double)a1 serviceContext:(id)a2 processLevelDependencies:(out id *)a3;
- (id)selectTaskBlockingTask:(id)a0 serviceContext:(id)a1;
- (id)selectTaskForServiceNode:(id)a0 serviceResult:(id)a1 options:(unsigned long long)a2;
- (id)selectTaskInTasks:(id)a0 serviceContext:(id)a1;
- (id)selectTaskInThreadDependencyChainWithServiceContext:(id)a0;
- (id)selectTaskInvolvedInAnyIssueWithServiceContext:(id)a0 ignoreMinTimeBlocked:(BOOL)a1;
- (id)selectThreadExhaustionBlockingTask:(id)a0 serviceContext:(id)a1 processLevelDependencies:(out id *)a2;
- (id)selectThreadExhaustionInThreadExhaustions:(id)a0 allowSuspended:(BOOL)a1 serviceContext:(id)a2;
- (BOOL)takeLiveStackshot;
- (BOOL)taskIs3PApp:(id)a0 options:(unsigned long long)a1;
- (id)threadExhaustionsAboveLimit:(double)a0 threadIDToThreadExhaustionDict:(id *)a1;
- (void)useStackshotBuffer:(const void *)a0 size:(unsigned long long)a1;
- (void)writeDiagnostics:(id)a0 terminatedProcBundleID:(id)a1 options:(unsigned long long)a2;

@end

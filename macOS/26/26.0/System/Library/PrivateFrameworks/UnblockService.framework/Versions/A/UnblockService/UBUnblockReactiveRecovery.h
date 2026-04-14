@class NSMutableDictionary, NSString, NSArray, NSData, SASampleStore, NSDictionary, NSSet;

@interface UBUnblockReactiveRecovery : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSArray *_stuckServices;
    NSData *_stackshotData;
    SASampleStore *_sampleStore;
    NSDictionary *_dependencyGraph;
    NSSet *_deadlocks;
    NSDictionary *_threadIDToDeadlockDict;
    NSMutableDictionary *_taskIs3PAppDict;
}

@property (readonly) NSString *clientName;

+ (id)getDiagnosticsQueue;

- (void)clearCaches;
- (void)dealloc;
- (void).cxx_destruct;
- (id)_recover:(unsigned long long)a0 error:(id *)a1;
- (BOOL)avoidKillingTask:(id)a0 options:(unsigned long long)a1;
- (id)dependencyChainForNode:(id)a0 processInfos:(id)a1;
- (void)doTermination:(id)a0 options:(unsigned long long)a1;
- (void)emitTelemetryForError:(id)a0;
- (void)fillInRecoveryInfo:(id)a0 deadlockNodeSelected:(id)a1 exhaustedTaskSelected:(id)a2 threadExhaustions:(id)a3;
- (void)findDeadlocks;
- (id)initForStuckServices:(id)a0 clientName:(id)a1;
- (id)prepareCrashMessage:(id)a0;
- (void)prepareDependencyGraph;
- (id)processThreadInfosForDeadlock:(id)a0 processInfos:(id)a1;
- (id)recover:(unsigned long long)a0 error:(id *)a1;
- (id)selectNodeInDeadlocks:(id)a0 longerThan:(double)a1 serviceContext:(id)a2;
- (id)selectNodeInDeadlocksBlockingTask:(id)a0 preferredMinimumDuration:(double)a1 serviceContext:(id)a2;
- (id)selectTaskBlockingTask:(id)a0 serviceContext:(id)a1;
- (id)selectTaskForServiceNode:(id)a0 serviceResult:(id)a1 options:(unsigned long long)a2;
- (id)selectTaskInDefinitiveIssuesWithServiceContext:(id)a0;
- (id)selectTaskInTasks:(id)a0 serviceContext:(id)a1;
- (id)selectTaskInvolvedInAnyIssueWithServiceContext:(id)a0;
- (id)selectThreadExhaustionBlockingTask:(id)a0 serviceContext:(id)a1;
- (id)selectThreadExhaustionInThreadExhaustions:(id)a0 allowSuspended:(BOOL)a1 serviceContext:(id)a2;
- (BOOL)takeLiveStackshot;
- (BOOL)taskIs3PApp:(id)a0;
- (id)threadExhaustionsAboveLimit:(double)a0 threadIDToThreadExhaustionDict:(id *)a1;
- (void)useStackshotBuffer:(const void *)a0 size:(unsigned long long)a1;
- (void)writeDiagnostics:(id)a0 terminatedProcBundleID:(id)a1 options:(unsigned long long)a2;

@end

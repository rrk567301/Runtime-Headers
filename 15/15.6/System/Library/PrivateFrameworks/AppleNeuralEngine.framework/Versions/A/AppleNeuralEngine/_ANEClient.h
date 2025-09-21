@class _ANEVirtualClient, NSArray, NSMutableDictionary, _ANEDaemonConnection;

@interface _ANEClient : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    _ANEDaemonConnection *_fastConn;
}

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) char allowRestrictedAccess;
@property (readonly, nonatomic) _ANEDaemonConnection *fastConn;
@property (readonly, nonatomic) NSArray *priorityQ;
@property (readonly, nonatomic) _ANEVirtualClient *virtualClient;
@property (readonly, nonatomic) NSMutableDictionary *connectionsUsedForLoadingModels;
@property (readonly, nonatomic) NSMutableDictionary *connections;
@property (readonly, nonatomic) char isRootDaemon;

+ (id)new;
+ (void)initialize;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)compiledModelExistsFor:(id)a0;
- (char)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (char)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)loadModelNewInstance:(id)a0 options:(id)a1 modelInstParams:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(char)a2 error:(id *)a3;
- (void)purgeCompiledModel:(id)a0;
- (char)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)unmapIOSurfacesWithModel:(id)a0 request:(id)a1;
- (char)endRealTimeTask;
- (char)isVirtualClient;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (char)beginRealTimeTask;
- (char)buffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)compiledModelExistsMatchingHash:(id)a0;
- (id)connectionForLoadingModel:(id)a0 options:(id)a1;
- (id)connectionUsedForLoadingModel:(id)a0;
- (char)doBuffersReadyWithModel:(id)a0 inputBuffers:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)doEnqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)doLoadModelNewInstance:(id)a0 options:(id)a1 modelInstParams:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)doPrepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (char)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (char)echo:(id)a0;
- (char)enqueueSetsWithModel:(id)a0 outputSet:(id)a1 options:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (id)fastConnWithoutLock;
- (id)initWithRestrictedAccessAllowed:(char)a0;
- (char)isAnetoolRootDaemonConnection;
- (char)prepareChainingWithModel:(id)a0 options:(id)a1 chainingReq:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (void)reportEvaluateFailure:(id)a0 failureReason:(unsigned int)a1 qIdx:(unsigned long long)a2;
- (char)sessionHintWithModel:(id)a0 hint:(id)a1 options:(id)a2 report:(id)a3 error:(id *)a4;

@end

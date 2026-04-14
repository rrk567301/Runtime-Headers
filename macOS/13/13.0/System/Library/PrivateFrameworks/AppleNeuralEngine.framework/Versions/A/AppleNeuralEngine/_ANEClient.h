@class _ANEDaemonConnection, NSArray, _ANEVirtualClient;

@interface _ANEClient : NSObject

@property (readonly, nonatomic) _ANEDaemonConnection *conn;
@property (readonly, nonatomic) NSArray *priorityQ;
@property (readonly, nonatomic) _ANEVirtualClient *virtualClient;

+ (void)initialize;
+ (id)new;
+ (id)sharedConnection;
+ (id)sharedPrivateConnection;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)evaluateRealTimeWithModel:(id)a0 options:(id)a1 request:(id)a2 error:(id *)a3;
- (BOOL)unloadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)unloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)loadRealTimeModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)loadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)evaluateWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)compiledModelExistsFor:(id)a0;
- (void)purgeCompiledModel:(id)a0;
- (BOOL)mapIOSurfacesWithModel:(id)a0 request:(id)a1 cacheInference:(BOOL)a2 error:(id *)a3;
- (BOOL)compileModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)compiledModelExistsMatchingHash:(id)a0;
- (void)purgeCompiledModelMatchingHash:(id)a0;
- (BOOL)beginRealTimeTask;
- (BOOL)endRealTimeTask;
- (BOOL)echo:(id)a0;
- (id)initWithRestrictedAccessAllowed:(BOOL)a0;
- (BOOL)doUnloadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (void)unmapIOSurfacesWithModel:(id)a0 request:(id)a1;
- (BOOL)doLoadModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 error:(id *)a3;
- (BOOL)doEvaluateDirectWithModel:(id)a0 options:(id)a1 request:(id)a2 qos:(unsigned int)a3 error:(id *)a4;
- (BOOL)isVirtualClient;

@end

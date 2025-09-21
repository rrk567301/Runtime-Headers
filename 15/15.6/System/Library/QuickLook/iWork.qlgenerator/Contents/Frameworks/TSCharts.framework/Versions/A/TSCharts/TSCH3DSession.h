@class NSCountedSet, TSCH3DResourceCache, TSCH3DDocumentDataCache, TSCH3DContext, TSCH3DGPUSharegroup, NSMutableSet;

@interface TSCH3DSession : NSObject {
    char _interactiveCanvas;
    unsigned long long _failures;
    TSCH3DContext *_context;
    TSCH3DResourceCache *_cache;
    TSCH3DGPUSharegroup *_sharegroup;
    NSMutableSet *_activeResourceSet;
    NSMutableSet *_allResourceSet;
    NSCountedSet *_scopeProtectedResourceSet;
    long long _virtualScreen;
}

@property (readonly, nonatomic) TSCH3DContext *context;
@property (readonly, nonatomic) TSCH3DContext *sharegroupContext;
@property (nonatomic) int performance;
@property (readonly, nonatomic) char hasFailed;
@property (readonly, nonatomic) char isOneShot;
@property (readonly, nonatomic) char mustRunOnMainThread;
@property (nonatomic) long long virtualScreen;
@property (readonly, nonatomic) TSCH3DDocumentDataCache *dataCache;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addActiveResource:(id)a0;
- (void)endFrameWithSharegroupDelegate:(id)a0;
- (void)flushResources:(id)a0;
- (void)beginFrameWithSharegroupDelegate:(id)a0;
- (void)flushMemoryForResources:(id)a0;
- (void)flushResourcesIfNecessary;
- (void)flushTrackedResources;
- (void)forceFlushResources:(id)a0;
- (void)garbageCollectAllUnretainedResources;
- (id)handleOfResource:(id)a0 loader:(id)a1;
- (char)hasEnoughFreeMemoryOfBytes:(unsigned long long)a0;
- (id)initWithSharegroupToken:(id)a0 dataCache:(id)a1;
- (char)isProtectedResource:(id)a0;
- (id)loadResource:(id)a0 reload:(char)a1 withLoader:(id)a2 config:(id)a3;
- (id)p_contextOrNil;
- (void)p_lock;
- (void)p_setContext:(id)a0;
- (void)p_unlock;
- (void)protectResource:(id)a0 unprotectOnFail:(char)a1;
- (void)resetFailures;
- (void)resetTrackingToActiveResources;
- (void)setFailed;
- (void)setIfIsMoreDemandingPerformance:(int)a0;
- (id)shaderForShaderContext:(id)a0 initializeProgramBlock:(id /* block */)a1;
- (void)trackResourcesInBlock:(id /* block */)a0;
- (void)unprotectResource:(id)a0 clearOnFailProtection:(char)a1;

@end

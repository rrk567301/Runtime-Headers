@class TSCH3DContext, NSRecursiveLock;

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {
    TSCH3DContext *_GPUContext;
    long long _lockLevel;
    NSRecursiveLock *_lock;
}

+ (BOOL)hasInterestForSharegroupToken:(id)a0;
+ (void)addInterestForSharegroupTokens:(id)a0;
+ (void)removeInterestForSharegroupTokens:(id)a0;
+ (void)flushSharegroupForToken:(id)a0;
+ (id)sharegroupForToken:(id)a0;
+ (void)deleteSharegroupForToken:(id)a0;

- (id)description;
- (void)lock;
- (void).cxx_destruct;
- (void)unlock;
- (void)garbageCollectAllUnretainedResources;
- (id)initWithOwningThread:(id)a0 token:(id)a1;
- (id)initWithOwningThread:(id)a0 token:(id)a1 context:(id)a2;
- (BOOL)debug_isInteractive;
- (id)targetThreadForFlushing;
- (void)p_flushCache;
- (void)p_clearContextInCurrentThread;
- (void)p_owningThreadWillChange;
- (void)garbageCollectResources:(id)a0;
- (void)p_flushPurgeableResourceSet;
- (void)p_forceFlushResourceSet:(id)a0;
- (id)GPUContext;
- (void)updateSharegroupMapToken:(id)a0;

@end

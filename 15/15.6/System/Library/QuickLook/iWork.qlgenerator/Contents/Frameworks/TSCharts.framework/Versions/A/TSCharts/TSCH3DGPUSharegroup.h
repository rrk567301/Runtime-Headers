@class TSCH3DContext, NSRecursiveLock;

@interface TSCH3DGPUSharegroup : TSCH3DSharegroup {
    TSCH3DContext *_GPUContext;
    long long _lockLevel;
    NSRecursiveLock *_lock;
}

+ (void)addInterestForSharegroupTokens:(id)a0;
+ (void)deleteSharegroupForToken:(id)a0;
+ (void)flushSharegroupForToken:(id)a0;
+ (char)hasInterestForSharegroupToken:(id)a0;
+ (void)removeInterestForSharegroupTokens:(id)a0;
+ (id)sharegroupForToken:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)lock;
- (void)unlock;
- (id)GPUContext;
- (char)debug_isInteractive;
- (void)garbageCollectAllUnretainedResources;
- (void)garbageCollectResources:(id)a0;
- (id)initWithOwningThread:(id)a0 token:(id)a1;
- (id)initWithOwningThread:(id)a0 token:(id)a1 context:(id)a2;
- (void)p_clearContextInCurrentThread;
- (void)p_flushCache;
- (void)p_flushPurgeableResourceSet;
- (void)p_forceFlushResourceSet:(id)a0;
- (void)p_owningThreadWillChange;
- (id)targetThreadForFlushing;
- (void)updateSharegroupMapToken:(id)a0;

@end

@class TSCH3DResourceCache, NSString, NSThread, NSMutableSet, TSCH3DSharegroupToken, TSCH3DShaderCache;
@protocol TSCH3DSharegroupDelegate;

@interface TSCH3DSharegroup : NSObject <TSUiOSMemoryWarningFlushable> {
    NSThread *_owningThread;
    NSMutableSet *_purgeableResourceSet;
    BOOL _didReceiveFlush;
}

@property (nonatomic) int performance;
@property (nonatomic) id<TSCH3DSharegroupDelegate> delegate;
@property (readonly, nonatomic) TSCH3DResourceCache *resourceCache;
@property (readonly, nonatomic) TSCH3DShaderCache *shaderCache;
@property (readonly, weak, nonatomic) TSCH3DSharegroupToken *token;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)uniqueSharegroupWithOwningThread:(id)a0 token:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)flush;
- (BOOL)isOneShot;
- (void)setOwningThread:(id)a0;
- (BOOL)mustRunOnMainThread;
- (void)setIfIsMoreDemandingPerformance:(int)a0;
- (void)nonThreadOwnedFlushCache;
- (void)flushIfNecessary;
- (id)initWithOwningThread:(id)a0 token:(id)a1;
- (BOOL)owningThreadIsNil;
- (BOOL)isCurrentThreadOwner;
- (void)flushMemoryForResourceSet:(id)a0;
- (struct FlushResult { BOOL x0; BOOL x1; })p_flushCacheIfNecessary;
- (void)flushResourceSet:(id)a0;
- (void)forceFlushResourceSet:(id)a0;
- (void)p_flushInTargetThread;
- (void)flushInTargetThread;

@end

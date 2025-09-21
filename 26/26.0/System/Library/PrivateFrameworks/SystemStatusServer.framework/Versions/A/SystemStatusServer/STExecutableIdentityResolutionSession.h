@class NSArray, STReferenceCountedCache;
@protocol STExecutableIdentityResolving;

@interface STExecutableIdentityResolutionSession : NSObject <STExecutableIdentityBatchResolving> {
    BOOL _invalidated;
    id<STExecutableIdentityResolving> _resolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedIdentities;
}

- (void)dealloc;
- (void)resolveIdentities:(id)a0;
- (void)invalidate;
- (id)resolvedIdentityForIdentity:(id)a0;
- (id)initWithResolver:(id)a0 cache:(id)a1;
- (void).cxx_destruct;

@end

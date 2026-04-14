@class NSArray, STReferenceCountedCache;
@protocol STExecutableIdentityResolving;

@interface STExecutableIdentityResolutionSession : NSObject <STExecutableIdentityBatchResolving> {
    BOOL _invalidated;
    id<STExecutableIdentityResolving> _resolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedIdentities;
}

- (id)resolvedIdentityForIdentity:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)initWithResolver:(id)a0 cache:(id)a1;
- (void)resolveIdentities:(id)a0;
- (void)dealloc;

@end

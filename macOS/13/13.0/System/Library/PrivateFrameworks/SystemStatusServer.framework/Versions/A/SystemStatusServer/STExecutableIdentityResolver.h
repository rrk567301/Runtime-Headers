@class STReferenceCountedCache;

@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving> {
    STReferenceCountedCache *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)beginBatchResolutionSession;
- (id)resolvedIdentityForIdentity:(id)a0;

@end

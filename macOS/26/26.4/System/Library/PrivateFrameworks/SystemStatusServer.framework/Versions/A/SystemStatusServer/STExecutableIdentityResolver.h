@class STReferenceCountedCache;

@interface STExecutableIdentityResolver : NSObject <STExecutableIdentityResolving> {
    STReferenceCountedCache *_cache;
}

+ (id)responsibleIdentityForAuditToken:(struct { unsigned int x0[8]; })a0;

- (id)resolvedIdentityForIdentity:(id)a0;
- (id)beginBatchResolutionSession;
- (void).cxx_destruct;
- (id)init;

@end

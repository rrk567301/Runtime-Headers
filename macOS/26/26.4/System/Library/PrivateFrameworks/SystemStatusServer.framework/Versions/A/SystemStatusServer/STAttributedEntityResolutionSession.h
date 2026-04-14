@class NSArray, STReferenceCountedCache;
@protocol STAttributedEntityResolving, STExecutableIdentityBatchResolving;

@interface STAttributedEntityResolutionSession : NSObject <STAttributedEntityBatchResolving> {
    BOOL _invalidated;
    id<STAttributedEntityResolving> _entityResolver;
    id<STExecutableIdentityBatchResolving> _identityResolver;
    STReferenceCountedCache *_cache;
    NSArray *_cachedEntities;
}

- (void)resolveEntities:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (id)resolveEntity:(id)a0;
- (void)dealloc;
- (id)initWithEntityResolver:(id)a0 identityResolver:(id)a1 cache:(id)a2;

@end

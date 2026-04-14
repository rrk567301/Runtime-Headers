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
- (void)invalidate;
- (id)initWithEntityResolver:(id)a0 identityResolver:(id)a1 cache:(id)a2;
- (void)dealloc;
- (void).cxx_destruct;
- (id)resolveEntity:(id)a0;

@end

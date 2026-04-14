@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)init;
- (void).cxx_destruct;
- (id)resolveEntity:(id)a0;
- (id)beginBatchResolutionSession;

@end

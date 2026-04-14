@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)initWithPreferredLocalizations:(id)a0;
- (id)initWithPreferredLocalizations:(id)a0 identityResolver:(id)a1;
- (id)init;
- (id)resolveEntity:(id)a0;
- (id)beginBatchResolutionSession;
- (void).cxx_destruct;

@end

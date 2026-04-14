@class NSArray, STExecutableIdentityResolver, STReferenceCountedCache;

@interface STAttributedEntityResolver : NSObject <STAttributedEntityResolving> {
    STExecutableIdentityResolver *_identityResolver;
    STReferenceCountedCache *_cache;
}

@property (readonly, copy, nonatomic) NSArray *preferredLocalizations;
@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)initWithPreferredLocalizations:(id)a0;
- (id)initWithPreferredLocalizations:(id)a0 identityResolver:(id)a1;
- (void).cxx_destruct;
- (id)resolveEntity:(id)a0;
- (id)beginBatchResolutionSession;
- (id)init;

@end

@class NSArray, STExecutableIdentityResolver, NSMutableDictionary;

@interface STAttributedEntityResolverProvider : NSObject <STAttributedEntityResolverProviding> {
    STExecutableIdentityResolver *_identityResolver;
    NSMutableDictionary *_entityResolversByLocalization;
}

@property (copy, nonatomic) NSArray *dynamicAttributions;

- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentityResolver:(id)a0;
- (id)resolverForPreferredLocalizations:(id)a0;

@end

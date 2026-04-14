@class NSMutableDictionary;
@protocol STAttributedEntityResolverProviding;

@interface STDataAccessStatusDomainDisplayNameTransformerProvider : NSObject <STStatusDomainClientDataTransformerProviding> {
    id<STAttributedEntityResolverProviding> _entityResolverProvider;
    NSMutableDictionary *_transformersByLocalization;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithEntityResolverProvider:(id)a0;
- (id)dataTransformerForClient:(id)a0;

@end

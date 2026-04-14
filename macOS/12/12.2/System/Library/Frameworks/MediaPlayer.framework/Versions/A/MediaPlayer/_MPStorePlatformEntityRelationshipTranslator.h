@interface _MPStorePlatformEntityRelationshipTranslator : _MPKeyPathEntityRelationshipTranslator

@property (readonly, nonatomic) id /* block */ payloadTransformBlock;

- (void).cxx_destruct;
- (id)prepareSource:(id)a0 context:(id)a1;
- (id)initWithRelatedMPModelClass:(Class)a0 payloadTransformBlock:(id /* block */)a1;

@end

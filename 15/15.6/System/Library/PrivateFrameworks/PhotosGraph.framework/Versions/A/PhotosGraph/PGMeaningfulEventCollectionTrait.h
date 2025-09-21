@class PGGraphNodeCollection;

@interface PGMeaningfulEventCollectionTrait : PGMeaningfulEventTrait

@property (readonly, nonatomic) PGGraphNodeCollection *nodes;
@property (readonly, nonatomic) PGGraphNodeCollection *negativeNodes;
@property (copy, nonatomic) id /* block */ additionalMatchingBlock;

- (void).cxx_destruct;
- (char)isActive;
- (id)debugDescriptionWithMomentNode:(id)a0;
- (id)initWithNodes:(id)a0;
- (id)initWithNodes:(id)a0 negativeNodes:(id)a1;

@end

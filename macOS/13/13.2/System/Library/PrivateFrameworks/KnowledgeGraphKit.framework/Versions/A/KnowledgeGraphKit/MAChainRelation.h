@class NSArray;

@interface MAChainRelation : MARelation

@property (readonly, nonatomic) NSArray *steps;

+ (id)scanRelationWithScanner:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)inverse;
- (id)initWithSteps:(id)a0;
- (id)visualString;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;

@end

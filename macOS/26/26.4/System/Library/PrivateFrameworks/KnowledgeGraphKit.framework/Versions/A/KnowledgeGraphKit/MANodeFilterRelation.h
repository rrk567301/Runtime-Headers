@class MANodeFilter;

@interface MANodeFilterRelation : MARelation

@property (readonly, copy, nonatomic) MANodeFilter *nodeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)inverse;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)initWithNodeFilter:(id)a0;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)visualString;

@end

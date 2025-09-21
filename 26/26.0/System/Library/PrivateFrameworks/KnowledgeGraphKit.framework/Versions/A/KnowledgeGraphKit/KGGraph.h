@class NSUUID;
@protocol KGEntityFactory, KGGraphImplementation;

@interface KGGraph : NSObject

@property (readonly, nonatomic) id<KGGraphImplementation> implementation;
@property (readonly, nonatomic) NSUUID *graphIdentifier;
@property (readonly, nonatomic) id<KGEntityFactory> entityFactory;

- (id)nodeLabels;
- (BOOL)noFatalError;
- (id)changesAfterToken:(id)a0 transactionLimit:(long long)a1 error:(id *)a2;
- (id)edgeChangesAfterToken:(id)a0 transactionLimit:(long long)a1 edgeFilter:(id)a2 error:(id *)a3;
- (id)labelsOfNodesForIdentifiers:(id)a0;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)labelsOfEdgesForIdentifiers:(id)a0;
- (id)nodeChangesAfterToken:(id)a0 transactionLimit:(long long)a1 nodeFilter:(id)a2 error:(id *)a3;
- (id)edgeLabels;
- (void).cxx_destruct;
- (id)edgeIdentifiersMatchingFilter:(id)a0;
- (id)edgesForIdentifiers:(id)a0;
- (id)nodeIdentifiersMatchingFilter:(id)a0;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)adjacencyWithSourceNodeIdentifiers:(id)a0 edgeFilter:(id)a1 edgeDirection:(unsigned long long)a2;
- (id)adjacencyWithTargetNodeIdentifiers:(id)a0 edgeFilter:(id)a1 edgeDirection:(unsigned long long)a2;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (id)edgeIdentifiersBetweenStartNodeIdentifiers:(id)a0 endNodeIdentifiers:(id)a1 edgeFilter:(id)a2 edgeDirection:(unsigned long long)a3;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)initWithImplementation:(id)a0 entityFactory:(id)a1;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2;
- (id)nodeIdentifiersOfEdgesForIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)nodesForIdentifiers:(id)a0;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0;
- (id)transitiveClosureNeighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2;

@end

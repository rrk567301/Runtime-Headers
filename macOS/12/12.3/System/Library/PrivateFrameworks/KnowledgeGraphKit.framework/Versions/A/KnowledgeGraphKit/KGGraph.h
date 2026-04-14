@protocol KGGraphImplementation;

@interface KGGraph : NSObject

@property (readonly, nonatomic) id<KGGraphImplementation> implementation;

- (void).cxx_destruct;
- (id)nodeLabels;
- (id)edgeLabels;
- (id)nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)nodeIdentifiersMatchingFilter:(id)a0;
- (id)targetsBySourceWithEdgeIdentifiers:(id)a0;
- (id)sourcesByTargetWithEdgeIdentifiers:(id)a0;
- (id)nodesForIdentifiers:(id)a0;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (id)edgesForIdentifiers:(id)a0;
- (id)edgeIdentifiersMatchingFilter:(id)a0;
- (id)edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)neighborNodeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1 edgeFilter:(id)a2;
- (id)edgeIdentifiersWithStartNodeIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)nodeIdentifiersOfEdgesForIdentifiers:(id)a0 edgeDirection:(unsigned long long)a1;
- (id)_nodeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)_edgeIdentifiersMatchingFilter:(id)a0 intersectingIdentifiers:(id)a1;
- (id)initWithImplementation:(id)a0;

@end

@class PGGraphFeatureNodeCollection, NSString, PGGraphAddressNodeCollection;

@interface PGGraphLocationNodeCollection : PGGraphNodeCollection <PGGraphLocationOrAreaNodeCollection>

@property (readonly, nonatomic) PGGraphAddressNodeCollection *addressNodes;
@property (readonly, nonatomic) PGGraphFeatureNodeCollection *featureNodeCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)nodeClass;

- (id)parentLocationNodes;
- (id)deepParentLocationNodesWithLabel:(id)a0;
- (id)nearestDeepParentLocationNodesWithLabel:(id)a0;
- (id)childLocationNodes;
- (id)deepParentLocationNodes;
- (id)deepChildLocationNodes;
- (id)nearestDeepChildLocationNodesWithLabel:(id)a0;
- (id)nearestDeepNeighborWithLabel:(id)a0 usingOutEdges:(BOOL)a1;
- (id)deepChildLocationNodesWithLabel:(id)a0;

@end

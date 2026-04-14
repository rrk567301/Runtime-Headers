@class NSString, NSMutableArray, MANode;

@interface MANodeLegacyImplementation : NSObject <MANodeImplementationProtocol> {
    NSMutableArray *_edges;
    MANode *_node;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)enumerateNeighborEdgesAndNodesMatchingFilter:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNeighborEdgesAndNodesThroughEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 withNode:(id)a1;
- (void)enumerateNeighborNodesMatchingFilter:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 matchingFilter:(id)a1;
- (void)enumerateEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEdgesOfType:(unsigned long long)a0 withNode:(id)a1 usingBlock:(id /* block */)a2;
- (void)removeEdge:(id)a0;
- (id)initWithNode:(id)a0;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1 usingBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)a0 matchingFilter:(id)a1;
- (void)addEdge:(id)a0;
- (void)enumerateEdgesOfType:(unsigned long long)a0 usingBlock:(id /* block */)a1;

@end

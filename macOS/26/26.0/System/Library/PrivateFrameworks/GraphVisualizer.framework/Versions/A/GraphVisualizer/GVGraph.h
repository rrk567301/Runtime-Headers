@class NSOrderedSet, NSMutableDictionary, NSMutableOrderedSet, NSDictionary;

@interface GVGraph : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableOrderedSet *_nodes;
@property (retain, nonatomic) NSMutableOrderedSet *_edges;
@property (retain, nonatomic) NSMutableDictionary *_groups;
@property (retain, nonatomic) NSMutableOrderedSet *_sourceNodes;
@property (retain, nonatomic) NSMutableOrderedSet *_sinkNodes;
@property (readonly, nonatomic) NSOrderedSet *nodes;
@property (readonly, nonatomic) NSOrderedSet *edges;
@property (readonly, nonatomic) NSDictionary *groups;
@property (readonly, nonatomic) NSOrderedSet *sourceNodes;
@property (readonly, nonatomic) NSOrderedSet *sinkNodes;
@property (readonly, nonatomic) unsigned long long nodeCount;
@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) unsigned int randomSeed;
@property (nonatomic) BOOL allowRedundantEdges;
@property (nonatomic) BOOL minimizeEdgeLengths;
@property (nonatomic) BOOL minimizeEdgeCrossings;

- (id)debugDescription;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allEdges;
- (void)addEdgeFrom:(id)a0 to:(id)a1;
- (void)removeEdge:(id)a0;
- (id)init;
- (id)description;
- (void)removeNode:(id)a0;
- (id)allNodes;
- (void)addNode:(id)a0;
- (BOOL)render:(id)a0;
- (BOOL)hasEdgeFrom:(id)a0 to:(id)a1;
- (unsigned long long)outEdgeCountOf:(id)a0;
- (void)addEdgeFrom:(id)a0 to:(id)a1 reversed:(BOOL)a2;
- (void)addNodeGroup:(id)a0 identifier:(id)a1 margins:(struct { double x0; double x1; double x2; double x3; })a2;
- (id)connectedSubgraphs;
- (id)findEdgeBetween:(id)a0 and:(id)a1;
- (id)findEdgeFrom:(id)a0 to:(id)a1;
- (BOOL)hasEdgeBetween:(id)a0 :(id)a1;
- (BOOL)hasEdgeFrom:(id)a0 to:(id)a1 reversed:(BOOL)a2;
- (BOOL)hasNode:(id)a0;
- (unsigned long long)inDegreeOf:(id)a0;
- (unsigned long long)inEdgeCountOf:(id)a0;
- (id)inNodesOf:(id)a0;
- (long long)minimumSlack;
- (unsigned long long)outDegreeOf:(id)a0;
- (id)outNodesOf:(id)a0;
- (void)removeEdgeFrom:(id)a0 to:(id)a1;
- (void)reverseEdge:(id)a0;
- (long long)slackOfEdge:(id)a0;
- (void)traverseEdgesFromStart:(id)a0 callback:(id /* block */)a1;
- (void)traverseNodesFromStart:(id)a0 direction:(int)a1 randomize:(BOOL)a2 callback:(id /* block */)a3;

@end

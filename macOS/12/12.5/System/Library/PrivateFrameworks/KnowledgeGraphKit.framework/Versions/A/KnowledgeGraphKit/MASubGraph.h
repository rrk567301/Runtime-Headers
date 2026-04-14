@class NSMutableDictionary, MABaseGraph;

@interface MASubGraph : NSObject {
    NSMutableDictionary *_nodesByIdentifier;
    NSMutableDictionary *_nodesByLabel;
    NSMutableDictionary *_nodesByName;
    NSMutableDictionary *_edgesByIdentifier;
    NSMutableDictionary *_edgesByLabel;
    NSMutableDictionary *_edgesByName;
    NSMutableDictionary *_nodesByNameGroupByNodes;
}

@property (readonly, nonatomic) MABaseGraph *graph;

+ (id)subGraphWithGraph:(id)a0;
+ (id)subGraphIntersectionsWithSubGraphs:(id)a0;

- (id)description;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (id)allNodes;
- (id)allEdges;
- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (unsigned long long)nodesCount;
- (unsigned long long)edgesCount;
- (id)nodesForLabel:(id)a0;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (id)edgesForLabel:(id)a0;
- (void)enumerateNodesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEdgesWithLabel:(id)a0 domain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (id)nodeForIdentifier:(unsigned long long)a0;
- (id)nodesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)nodesForName:(id)a0;
- (id)nodesForName:(id)a0 fromNode:(id)a1;
- (id)nodesNames;
- (id)edgesNames;
- (id)edgesForName:(id)a0;
- (id)nodesLabels;
- (id)edgesLabels;
- (void)enumerateNodesWithName:(id)a0 usingBlock:(id /* block */)a1;
- (id)allNamedNodes;
- (id)edgesForLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)edgeForIdentifier:(unsigned long long)a0;
- (unsigned long long)nodesCountForLabel:(id)a0;
- (unsigned long long)edgesCountForLabel:(id)a0;
- (id)graphRepresentation;
- (void)_addEdge:(id)a0 withName:(id)a1;
- (void)_addNode:(id)a0 withName:(id)a1 forKeyNode:(id)a2;
- (void)_addNode:(id)a0 withName:(id)a1;
- (void)mergeWithSubGraph:(id)a0;
- (void)enumerateNodesByNameUsingBlock:(id /* block */)a0;
- (void)enumerateEdgesByNameUsingBlock:(id /* block */)a0;
- (void)addNodes:(id)a0 withName:(id)a1;
- (unsigned long long)nodesCountForName:(id)a0;
- (unsigned long long)edgesCountForName:(id)a0;
- (void)addEdges:(id)a0 withName:(id)a1;
- (id)nodesForNames:(id)a0;
- (unsigned long long)nodesCountForName:(id)a0 fromNode:(id)a1;
- (void)enumerateNodesWithName:(id)a0 fromNode:(id)a1 usingBlock:(id /* block */)a2;
- (id)allNamedEdges;
- (void)enumerateEdgesWithName:(id)a0 usingBlock:(id /* block */)a1;

@end

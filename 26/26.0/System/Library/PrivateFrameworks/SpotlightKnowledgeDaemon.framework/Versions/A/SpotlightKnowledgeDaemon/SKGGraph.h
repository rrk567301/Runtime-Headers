@class NSString, NSMutableSet, MAGraph;

@interface SKGGraph : NSObject {
    NSString *_resourcePath;
    unsigned long long _currentAddedNodeCount;
    unsigned long long _currentAddedEdgeCount;
    NSMutableSet *_nodeBatch;
    NSMutableSet *_edgeBatch;
    MAGraph *_graph;
}

@property (readonly, nonatomic) BOOL available;

- (id)graph;
- (void)dealloc;
- (long long)edgeCount;
- (long long)nodeCount;
- (void).cxx_destruct;
- (BOOL)addNodes:(id)a0 addEdges:(id)a1 cancelBlock:(id /* block */)a2;
- (BOOL)batchAddNodes:(id)a0 addEdges:(id)a1;
- (BOOL)clearWithCancelBlock:(id /* block */)a0;
- (void)closeGraph;
- (BOOL)commitBatch;
- (BOOL)commitWithCancelBlock:(id /* block */)a0;
- (long long)countOfNodesWithLabel:(id)a0;
- (long long)edgeCacheCount;
- (BOOL)flushWithCancelBlock:(id /* block */)a0;
- (id)graphURL;
- (id)initWithResourceDirectoryPath:(id)a0;
- (long long)nodeCacheCount;
- (id)nodesForNode:(id)a0;
- (BOOL)removeNodeSet:(id)a0 removeEdgeSet:(id)a1 cancelBlock:(id /* block */)a2;
- (id)resourceRoot;

@end

@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)a0;

- (void)setEdges:(id)a0;
- (id)nodesForLabel:(id)a0;
- (id)targetNode;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmpty;
- (id)edgesForLabel:(id)a0;
- (id)init;
- (void)enumerateWithBlock:(id /* block */)a0;
- (id)description;
- (BOOL)isEqualToPath:(id)a0;
- (void).cxx_destruct;
- (id)sourceNode;
- (id)nodeAtIndex:(unsigned long long)a0;
- (BOOL)containsNode:(id)a0;
- (unsigned long long)edgesCount;
- (unsigned long long)nodesCount;
- (void)removeFirstEdge;
- (void)addFirstEdge:(id)a0;
- (void)addLastEdge:(id)a0;
- (BOOL)containsEdge:(id)a0;
- (id)edgeAtIndex:(unsigned long long)a0;
- (double)edgesWeight;
- (id)graphRepresentation;
- (void)removeAllEdges;
- (void)removeLastEdge;

@end

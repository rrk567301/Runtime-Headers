@class NSMutableArray, NSMutableSet;

@interface MAPath : NSObject <NSCopying> {
    NSMutableArray *_edges;
    NSMutableSet *_nodes;
}

+ (id)path;
+ (id)pathWithEdges:(id)a0;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (void)enumerateWithBlock:(id /* block */)a0;
- (BOOL)isEqualToPath:(id)a0;
- (void)setEdges:(id)a0;
- (id)nodeAtIndex:(unsigned long long)a0;
- (BOOL)containsNode:(id)a0;
- (unsigned long long)nodesCount;
- (unsigned long long)edgesCount;
- (id)nodesForLabel:(id)a0;
- (id)edgesForLabel:(id)a0;
- (id)sourceNode;
- (id)targetNode;
- (id)edgeAtIndex:(unsigned long long)a0;
- (BOOL)containsEdge:(id)a0;
- (double)edgesWeight;
- (void)addFirstEdge:(id)a0;
- (void)addLastEdge:(id)a0;
- (void)removeFirstEdge;
- (void)removeLastEdge;
- (void)removeAllEdges;
- (id)graphRepresentation;

@end

@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (float)distance;
- (id)descriptor;
- (void)dealloc;
- (id)right;
- (id)left;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (float)avgDistance;
- (id)getLeafNodes;
- (int)leafsCount;
- (int)nodeId;

@end

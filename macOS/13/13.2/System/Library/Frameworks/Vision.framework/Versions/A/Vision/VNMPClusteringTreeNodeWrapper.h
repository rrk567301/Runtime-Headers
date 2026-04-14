@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property BOOL freeNodeOnDealloc;

- (void)dealloc;
- (id)descriptor;
- (id)left;
- (id)right;
- (float)distance;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(BOOL)a1;
- (int)nodeId;
- (float)avgDistance;
- (int)leafsCount;
- (id)getLeafNodes;

@end

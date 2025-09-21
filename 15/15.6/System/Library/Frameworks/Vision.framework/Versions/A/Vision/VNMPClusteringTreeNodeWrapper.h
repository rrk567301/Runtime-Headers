@interface VNMPClusteringTreeNodeWrapper : NSObject

@property void *node;
@property char freeNodeOnDealloc;

- (void)dealloc;
- (id)descriptor;
- (id)left;
- (id)right;
- (float)distance;
- (id)initWithNode:(void *)a0 freeNodeOnDealloc:(char)a1;
- (float)avgDistance;
- (id)getLeafNodes;
- (int)leafsCount;
- (int)nodeId;

@end

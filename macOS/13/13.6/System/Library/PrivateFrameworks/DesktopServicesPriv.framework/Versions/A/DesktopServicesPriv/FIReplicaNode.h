@class FIDSNode;

@interface FIReplicaNode : FINode {
    FIDSNode *_node;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)original;
- (void *)asTNode;

@end

@class FITNode;

@interface FIReplicaNode : FINode {
    struct TNSRef<FITNode, void> { FITNode *fRef; } _node;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)init:(id)a0;
- (id)original;
- (void *)asTNode;

@end

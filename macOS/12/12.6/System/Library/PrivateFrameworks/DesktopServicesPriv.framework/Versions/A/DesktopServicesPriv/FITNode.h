@interface FITNode : FINode {
    void *_node[13];
}

- (void)dealloc;
- (id)description;
- (void *)asTNode;
- (void *)asTNodeObject;

@end

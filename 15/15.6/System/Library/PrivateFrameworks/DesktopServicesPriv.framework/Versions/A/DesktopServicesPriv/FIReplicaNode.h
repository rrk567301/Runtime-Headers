@class FINode;

@interface FIReplicaNode : NSObject {
    FINode *_original;
}

- (void)dealloc;
- (char)conformsToProtocol:(id)a0;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)original;
- (struct OpaqueNodeRef { } *)nodeRef;

@end

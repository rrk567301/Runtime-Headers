@class FINode;

@interface FIReplicaNode : NSObject {
    FINode *_original;
}

- (void)dealloc;
- (BOOL)isKindOfClass:(Class)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (id)original;
- (id)init:(id)a0;
- (void).cxx_destruct;
- (struct OpaqueNodeRef { } *)nodeRef;

@end

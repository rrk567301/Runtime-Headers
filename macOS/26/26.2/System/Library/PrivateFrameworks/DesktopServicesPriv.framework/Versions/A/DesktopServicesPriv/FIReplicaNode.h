@class FINode;

@interface FIReplicaNode : NSObject {
    FINode *_original;
}

- (id)init:(id)a0;
- (id)original;
- (BOOL)conformsToProtocol:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (struct OpaqueNodeRef { } *)nodeRef;

@end

@class FINode;

@interface FIReplicaNode : NSObject {
    FINode *_original;
}

- (id)forwardingTargetForSelector:(SEL)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)description;
- (BOOL)isKindOfClass:(Class)a0;
- (id)init:(id)a0;
- (id)original;
- (void).cxx_destruct;
- (void)dealloc;
- (struct OpaqueNodeRef { } *)nodeRef;

@end

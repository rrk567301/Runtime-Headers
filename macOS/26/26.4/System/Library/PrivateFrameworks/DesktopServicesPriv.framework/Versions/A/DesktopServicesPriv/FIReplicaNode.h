@class FINode;

@interface FIReplicaNode : NSObject {
    FINode *_original;
}

- (id)init:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (id)original;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)description;
- (void)dealloc;
- (struct OpaqueNodeRef { } *)nodeRef;

@end

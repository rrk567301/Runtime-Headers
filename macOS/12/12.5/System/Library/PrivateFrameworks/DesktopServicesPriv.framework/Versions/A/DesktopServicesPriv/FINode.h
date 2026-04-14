@interface FINode : NSObject <NSCopying>

+ (id)nodeFromNodeRef:(struct OpaqueNodeRef { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopy;
- (id)original;
- (struct OpaqueNodeRef { } *)nodeRef;
- (void *)asTNode;

@end

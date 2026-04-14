@class NSTouchBarItemTreeNode;
@protocol NSTouchBarItemTreeParentNode;

@interface NSTouchBarItemTreePosition : NSObject <NSCopying>

@property (readonly, copy) NSTouchBarItemTreeNode<NSTouchBarItemTreeParentNode> *parentNode;
@property (readonly) long long indexInParent;

+ (id)positionInParentNode:(id)a0 atIndex:(long long)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end

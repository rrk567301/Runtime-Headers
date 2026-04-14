@class NSArray, NSMutableArray, NATreeNode;

@interface NATreeNodeDeepNodeEnumerator : NSEnumerator <NSCopying> {
    NSMutableArray *_enumeratorStack;
}

@property (readonly, copy, nonatomic) NATreeNode *node;
@property (readonly, copy, nonatomic) NSArray *allObjects;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;

@end

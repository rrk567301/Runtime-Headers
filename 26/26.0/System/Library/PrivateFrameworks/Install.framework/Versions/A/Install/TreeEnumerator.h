@class TreeNode, NSMutableArray;

@interface TreeEnumerator : NSObject {
    TreeNode *root;
    TreeNode *current;
    NSMutableArray *nodes;
}

+ (id)enumeratorWithRoot:(id)a0;

- (void)reset;
- (void)dealloc;
- (id)nextObject;
- (void)skipDescendants;
- (id)initWithRoot:(id)a0;

@end

@class TreeNode, NSMutableArray;

@interface TreeEnumerator : NSObject {
    TreeNode *root;
    TreeNode *current;
    NSMutableArray *nodes;
}

+ (id)enumeratorWithRoot:(id)a0;

- (id)nextObject;
- (void)dealloc;
- (void)reset;
- (void)skipDescendants;
- (id)initWithRoot:(id)a0;

@end

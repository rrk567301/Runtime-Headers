@class TreeNode, NSMutableArray;

@interface TreeEnumerator : NSObject {
    TreeNode *root;
    TreeNode *current;
    NSMutableArray *nodes;
}

+ (id)enumeratorWithRoot:(id)a0;

- (id)nextObject;
- (void)reset;
- (void)skipDescendants;
- (void)dealloc;
- (id)initWithRoot:(id)a0;

@end

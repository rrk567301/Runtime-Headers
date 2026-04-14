@class VSTrieNode;

@interface VSTrie : NSObject

@property (retain, nonatomic) VSTrieNode *root;

- (void).cxx_destruct;
- (id)init;
- (void)insertString:(id)a0 withAssociatedObject:(id)a1;
- (id)objectsMatchingPrefix:(id)a0;

@end

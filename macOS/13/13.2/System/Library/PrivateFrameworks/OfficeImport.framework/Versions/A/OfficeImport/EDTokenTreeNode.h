@interface EDTokenTreeNode : NSObject {
    unsigned int mTokenIndex;
    int mTokenType;
    EDTokenTreeNode *mFirstChild;
    EDTokenTreeNode *mSibling;
}

+ (id)tokenTreeNodeWithIndexAndType:(unsigned int)a0 type:(int)a1;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)firstChild;
- (id)initWithIndexAndType:(unsigned int)a0 type:(int)a1;
- (unsigned int)tokenIndex;
- (void)setFirstChild:(id)a0;
- (id)sibling;
- (void)setSibling:(id)a0;

@end

@class NSString, NSMutableArray, SCTGRL;

@interface SCTGRLTree : NSObject {
    NSString *mKey;
    SCTGRL *mGRL;
    NSMutableArray *mChildren;
    SCTGRLTree *mParent;
}

- (id)initWithKey:(id)a0;
- (id)parent;
- (id)setParent:(id)a0;
- (id)key;
- (void)dealloc;
- (id)setKey:(id)a0;
- (id)children;
- (id)init;
- (id)addChild:(id)a0;
- (id)toString;
- (id)setGRL:(id)a0;
- (id)grl;
- (void)addGRLToTree:(id)a0;
- (void)addGRLsInGRLIndex:(id)a0;
- (id)childWithKey:(id)a0;
- (id)initRootWithKey:(id)a0 withGRLIndex:(id)a1;
- (id)newChildWithKey:(id)a0;

@end

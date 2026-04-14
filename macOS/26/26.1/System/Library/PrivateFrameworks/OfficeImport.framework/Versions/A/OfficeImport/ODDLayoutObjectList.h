@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)children;
- (void).cxx_destruct;
- (id)init;
- (void)addChild:(id)a0;

@end

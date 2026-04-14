@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)init;
- (void).cxx_destruct;
- (id)children;
- (void)addChild:(id)a0;

@end

@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (id)init;
- (id)children;
- (void).cxx_destruct;
- (void)addChild:(id)a0;

@end

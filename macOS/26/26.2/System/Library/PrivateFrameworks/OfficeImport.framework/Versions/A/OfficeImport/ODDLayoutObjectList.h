@class NSMutableArray;

@interface ODDLayoutObjectList : ODDLayoutObject {
    NSMutableArray *mChildren;
}

- (void).cxx_destruct;
- (id)children;
- (id)init;
- (void)addChild:(id)a0;

@end

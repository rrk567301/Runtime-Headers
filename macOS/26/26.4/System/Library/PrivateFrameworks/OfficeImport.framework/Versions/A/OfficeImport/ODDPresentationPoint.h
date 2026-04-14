@class NSMutableArray;

@interface ODDPresentationPoint : ODDPoint {
    ODDPresentationPoint *mParent;
    NSMutableArray *mChildren;
}

- (id)children;
- (id)parent;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (void)addChild:(id)a0 order:(unsigned long long)a1;

@end

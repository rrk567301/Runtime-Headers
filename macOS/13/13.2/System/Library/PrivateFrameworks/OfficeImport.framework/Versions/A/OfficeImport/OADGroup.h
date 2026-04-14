@class NSString, NSMutableArray;

@interface OADGroup : OADDrawable <OADDrawableContainer> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mLogicalBounds;
    NSMutableArray *mChildren;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)children;
- (unsigned long long)childCount;
- (id)childAtIndex:(unsigned long long)a0;
- (void)addChild:(id)a0;
- (void)removeChild:(id)a0;
- (void)addChildren:(id)a0;
- (void)setParentTextListStyle:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })logicalBounds;
- (void)setLogicalBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)replaceChild:(id)a0 with:(id)a1;
- (id)groupProperties;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)removeUnnecessaryOverrides;

@end

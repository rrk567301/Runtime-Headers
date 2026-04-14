@interface TNAdditionalPageContentRep : TNPageContentRep

- (BOOL)masksToBounds;
- (void)drawInContext:(struct CGContext { } *)a0;
- (unsigned long long)pageIndex;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (void)willBeRemoved;
- (BOOL)directlyManagesLayerContent;
- (BOOL)forcesPlacementOnTop;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;

@end

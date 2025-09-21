@interface TNAdditionalPageContentRep : TNPageContentRep

- (void)drawInContext:(struct CGContext { } *)a0;
- (char)masksToBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })clipRect;
- (unsigned long long)pageIndex;
- (void)willBeRemoved;
- (char)directlyManagesLayerContent;
- (char)forcesPlacementOnTop;
- (id)initWithLayout:(id)a0 canvas:(id)a1;
- (void)processChanges:(id)a0 forChangeSource:(id)a1;

@end

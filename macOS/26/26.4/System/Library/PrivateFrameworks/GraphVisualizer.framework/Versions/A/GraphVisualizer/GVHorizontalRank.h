@interface GVHorizontalRank : GVRank

- (double)length;
- (double)breadth;
- (void)centerNode:(id)a0 at:(struct CGPoint { double x0; double x1; })a1;
- (void)centerNodesWithRespectoTo:(id)a0;
- (id)initWithRank:(long long)a0 separation:(struct CGSize { double x0; double x1; })a1 graph:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForDummy;

@end

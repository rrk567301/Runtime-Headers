@interface IKFinderReflectiveIconCell : IKFinderCell {
    id _currentRenderedImage;
}

@property float rotation;

- (void)invalidate;
- (void)draw;
- (unsigned long long)imageAlignment;
- (void)drawImage:(id)a0;
- (double)baseline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })selectionFrame;
- (double)topline;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })reflectionFrame;
- (BOOL)canBeDoubleClicked;
- (BOOL)_transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a0 forLayer:(id)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawShadow;
- (void)drawTitle;
- (void)drawSubtitle;
- (void)drawSelection;
- (float)baselineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (float)toplineForImage:(id)a0 renderSize:(struct CGSize { double x0; double x1; })a1 context:(id)a2;
- (BOOL)canDisplayInlinePreview;
- (void)pushTransform;
- (void)popTransform;
- (float)reflectionFactor;
- (float)reflectionHeight;
- (void)drawReflection:(id)a0;
- (double)fogFactorDueToMargin;
- (double)fogFactorDueToRotation;
- (double)fogFactor;
- (double)rotatedTextAlphaFactor;

@end

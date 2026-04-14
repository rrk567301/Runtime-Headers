@interface IKiOSStyleGroupCell : _IKiOSStyleGroupCell {
    id _currentRenderedImage;
}

@property float rotation;

- (void)invalidate;
- (void)draw;
- (void)drawImage:(id)a0;
- (void)drawSelection;
- (BOOL)_transform:(struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } *)a0 forLayer:(id)a1 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawTitle;
- (void)drawSubtitle;
- (BOOL)canBeDoubleClicked;
- (BOOL)canDisplayInlinePreview;
- (void)pushTransform;
- (void)popTransform;
- (double)fogFactorDueToRotation;
- (double)fogFactorDueToMargin;
- (double)fogFactor;
- (double)rotatedTextAlphaFactor;
- (void)drawReflection:(id)a0;

@end

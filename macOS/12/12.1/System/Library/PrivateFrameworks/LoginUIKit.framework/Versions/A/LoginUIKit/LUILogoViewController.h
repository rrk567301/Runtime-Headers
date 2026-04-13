@class CALayer, NSWindow;

@interface LUILogoViewController : LUIViewController {
    CALayer *_appleLogoLayer;
    NSWindow *_grayWindow;
    CALayer *_grayBackgroundLayer;
    CALayer *_grayBackgroundAppleLogoLayer;
    int _layout;
}

+ (id)identifier;
+ (id)controllerWithStyle:(int)a0;

- (void)dealloc;
- (int)layout;
- (id)initWithStyle:(int)a0;
- (void)setLayout:(int)a0;
- (void)refresh;
- (void)_setupContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })progressRect;
- (struct CGPoint { double x0; double x1; })_centerPointForLayer:(id)a0 inFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_setupGrayWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_releaseGrayWindow;
- (id)_backgroundLayerWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_darkGrayAppleLogoLayerInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_layoutContentView:(BOOL)a0;
- (void)hideProgressIndicator;

@end

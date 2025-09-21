@class CAPortalLayer;

@interface NSStatusBarShadowView : NSView {
    CAPortalLayer *_portal;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void).cxx_destruct;
- (void)_updateLayerShadowColorFromView;
- (void)_updateLayerShadowFromView;
- (void)setShadowContentSourceView:(id)a0;

@end

@class NSView, NSStatusBarShadowView;

@interface NSStatusBarContentView : NSView {
    BOOL _hasCAShadow;
    NSView *_itemContentView;
    NSStatusBarShadowView *_shadow1;
    NSStatusBarShadowView *_shadow2;
}

@property BOOL hasCAShadow;

- (void)updateLayer;
- (void)_updateShadowViews;
- (void).cxx_destruct;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)addItemContentView:(id)a0;

@end

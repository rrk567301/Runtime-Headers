@class NSGlassEffectView, NSTitlebarSeparatorView, NSScrollPocket, NSString, NSVisualEffectView;

@interface NSTitlebarBackgroundView : NSView {
    NSScrollPocket *_scrollPocket;
    NSGlassEffectView *_sidebarGlass;
    NSGlassEffectView *_inspectorGlass;
    NSTitlebarSeparatorView *_separator;
    NSVisualEffectView *_effectView;
    long long _material;
    long long _materialState;
    long long _materialBlendingMode;
    NSString *_groupName;
    long long _style;
}

- (void)viewWillMoveToWindow:(id)a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_separatorFrame;
- (void)_addEffectView;
- (void)_addInspectorGlass;
- (void)_addPocketViewWithHardPocket:(BOOL)a0;
- (void)_addSeparator;
- (void)_addSidebarGlass;
- (void)_configureAsEffectView;
- (void)_configureAsEmpty;
- (void)_configureAsFullScreenInspectorView;
- (void)_configureAsFullScreenSidebarView;
- (void)_configureAsPocketViewWithHardPocket:(BOOL)a0;
- (void)_removeEffectView;
- (void)_removeInspectorGlass;
- (void)_removePocketView;
- (void)_removeSeparator;
- (void)_removeSidebarGlass;

@end

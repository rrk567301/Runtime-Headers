@class NSWindow, NSComboBoxCell;

@interface NSComboBoxWindow : NSWindow {
    NSComboBoxCell *_comboBoxCell;
    NSWindow *_attachedToParent;
}

- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (BOOL)isKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)orderOut:(id)a0;
- (void)orderFront:(id)a0;
- (id)accessibilityParentAttribute;
- (BOOL)canBecomeKeyWindow;
- (BOOL)accessibilityIsChildOfApp;
- (BOOL)hasKeyAppearance;
- (void)_commonAwake;
- (BOOL)worksWhenModal;
- (void)_attachToParentWindow;
- (void)_detachFromParentWindow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 comboBoxCell:(id)a1;
- (BOOL)canBecomeVisibleWithoutLogin;
- (unsigned long long)shadowOptions;
- (BOOL)hasShadow;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (void)setShownAboveComboBox:(BOOL)a0;

@end

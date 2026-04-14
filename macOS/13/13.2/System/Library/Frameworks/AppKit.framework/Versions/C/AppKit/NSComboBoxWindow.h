@class NSWindow, NSComboBoxCell;

@interface NSComboBoxWindow : NSWindow {
    NSComboBoxCell *_comboBoxCell;
    NSWindow *_attachedToParent;
}

- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (BOOL)canBecomeKeyWindow;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)setStyleMask:(unsigned long long)a0;
- (void)_commonAwake;
- (BOOL)worksWhenModal;
- (void)orderFront:(id)a0;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)orderOut:(id)a0;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 comboBoxCell:(id)a1;
- (BOOL)isKeyWindow;
- (BOOL)canBecomeVisibleWithoutLogin;
- (BOOL)hasKeyAppearance;
- (unsigned long long)shadowOptions;
- (BOOL)hasShadow;
- (void)_attachToParentWindow;
- (void)_detachFromParentWindow;
- (BOOL)_allowsImplicitRemovalFromMovementGroup;
- (void)setShownAboveComboBox:(BOOL)a0;
- (BOOL)accessibilityIsChildOfApp;

@end

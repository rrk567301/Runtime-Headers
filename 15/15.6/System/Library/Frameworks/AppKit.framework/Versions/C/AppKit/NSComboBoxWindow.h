@class NSWindow, NSComboBoxCell;

@interface NSComboBoxWindow : NSWindow {
    NSComboBoxCell *_comboBoxCell;
    NSWindow *_attachedToParent;
}

- (void)dealloc;
- (char)_allowsImplicitRemovalFromMovementGroup;
- (void)_attachToParentWindow;
- (void)_commonAwake;
- (void)_detachFromParentWindow;
- (char)_ignoredForScripting;
- (char)accessibilityIsChildOfApp;
- (char)accessibilityIsIgnored;
- (id)accessibilityParentAttribute;
- (char)canBecomeKeyWindow;
- (char)canBecomeVisibleWithoutLogin;
- (char)hasKeyAppearance;
- (char)hasShadow;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 comboBoxCell:(id)a1;
- (char)isKeyWindow;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)orderWindow:(long long)a0 relativeTo:(long long)a1;
- (void)setShownAboveComboBox:(char)a0;
- (void)setStyleMask:(unsigned long long)a0;
- (unsigned long long)shadowOptions;
- (char)worksWhenModal;

@end

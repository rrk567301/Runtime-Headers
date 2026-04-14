@class NSMenuExtra;

@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement {
    NSMenuExtra *_menuExtra;
}

- (id)accessibilityValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityRole;
- (id)accessibilityTitle;
- (id)accessibilityLabel;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityParent;
- (BOOL)accessibilityPerformCancel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityRoleDescription;
- (id)accessibilitySubrole;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityEnabled;
- (BOOL)isAccessibilityFocused;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySelected:(BOOL)a0;
- (id)initWithMenuExtra:(id)a0;

@end

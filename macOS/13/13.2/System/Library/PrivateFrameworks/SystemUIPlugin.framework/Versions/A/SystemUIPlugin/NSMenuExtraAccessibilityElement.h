@class NSMenuExtra;

@interface NSMenuExtraAccessibilityElement : NSAccessibilityElement {
    NSMenuExtra *_menuExtra;
}

- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilitySubrole;
- (id)accessibilityRoleDescription;
- (id)accessibilityChildren;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityTitle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityParent;
- (BOOL)isAccessibilityFocused;
- (BOOL)accessibilityPerformCancel;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityTopLevelUIElement;
- (id)accessibilityValue;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySelected:(BOOL)a0;
- (id)accessibilityWindow;
- (BOOL)isAccessibilityEnabled;
- (id)initWithMenuExtra:(id)a0;

@end

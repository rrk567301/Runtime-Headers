@class NSToolbarItemViewer;

@interface _NSToolbarItemViewerAccessibilityHelper : NSObject {
    NSToolbarItemViewer *_toolbarItemViewer;
    long long _configuration;
}

+ (id)accessibilityHelperForToolbarItemViewer:(id)a0;

- (void)dealloc;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityTitleAttribute;
- (id)accessibilityValueAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (id)initWithToolbarItemViewer:(id)a0;

@end

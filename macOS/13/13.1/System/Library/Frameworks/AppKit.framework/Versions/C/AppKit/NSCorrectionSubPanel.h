@interface NSCorrectionSubPanel : NSPanel

@property (retain) id panelAccessibilityParent;

- (void)dealloc;
- (id)accessibilityAttributeNames;
- (id)accessibilityRoleAttribute;
- (id)accessibilityHelpAttribute;
- (BOOL)accessibilityIsHelpAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityActionNames;
- (unsigned long long)shadowOptions;

@end

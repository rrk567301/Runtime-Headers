@interface NSCorrectionSubPanel : NSPanel

@property (retain) id panelAccessibilityParent;

- (void)dealloc;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityHelpAttribute;
- (char)accessibilityIsHelpAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityWindowAttribute;
- (unsigned long long)shadowOptions;

@end

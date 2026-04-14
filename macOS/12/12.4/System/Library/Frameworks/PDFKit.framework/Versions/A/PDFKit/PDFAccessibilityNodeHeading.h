@interface PDFAccessibilityNodeHeading : PDFAccessibilityNode

- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (void)buildAccessibilityHierarchy;
- (id)_levelDescription;

@end

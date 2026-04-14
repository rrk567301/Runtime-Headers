@interface PDFAccessibilityNodeHeading : PDFAccessibilityNode

- (id)accessibilityRole;
- (id)accessibilityRoleDescription;
- (id)accessibilityTitle;
- (id)_levelDescription;
- (void)buildAccessibilityHierarchy;

@end

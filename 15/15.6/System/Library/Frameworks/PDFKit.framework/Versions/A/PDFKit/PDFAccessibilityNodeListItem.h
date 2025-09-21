@interface PDFAccessibilityNodeListItem : PDFAccessibilityNode

- (long long)accessibilityDisclosureLevel;
- (char)isAccessibilityDisclosed;
- (char)_isDisclosed;
- (char)_isDisclosing;

@end

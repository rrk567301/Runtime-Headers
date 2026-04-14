@interface PKImageView : NSImageView

@property BOOL ignoredByAccessibility;

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)mouseDownCanMoveWindow;

@end

@interface PKImageView : NSImageView

@property char ignoredByAccessibility;

- (id)accessibilityAttributeValue:(id)a0;
- (char)accessibilityIsIgnored;
- (char)mouseDownCanMoveWindow;

@end

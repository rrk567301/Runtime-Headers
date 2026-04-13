@class SMSelectSourceViewItem;

@interface SMSelectSourceViewItemContainingView : NSView

@property SMSelectSourceViewItem *item;

- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;

@end

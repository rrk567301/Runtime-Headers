@class SMSelectSourceViewItem;

@interface SMSelectSourceViewItemContainingView : NSView

@property SMSelectSourceViewItem *item;

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;

@end

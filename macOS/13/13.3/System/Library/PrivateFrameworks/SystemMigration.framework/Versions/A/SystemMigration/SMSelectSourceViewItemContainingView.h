@class SMSelectSourceViewItem;

@interface SMSelectSourceViewItemContainingView : NSView

@property SMSelectSourceViewItem *item;

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;

@end

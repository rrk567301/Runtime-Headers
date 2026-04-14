@class AKTrustedDeviceViewItem;

@interface AKAccessibleContainerView : NSView

@property AKTrustedDeviceViewItem *item;

- (id)accessibilityFocusedUIElement;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;

@end

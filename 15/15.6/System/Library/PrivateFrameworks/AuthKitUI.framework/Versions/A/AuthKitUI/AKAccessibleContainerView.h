@class AKTrustedDeviceViewItem;

@interface AKAccessibleContainerView : NSView

@property (nonatomic) AKTrustedDeviceViewItem *item;

- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;
- (char)accessibilityIsIgnored;

@end

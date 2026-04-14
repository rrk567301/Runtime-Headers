@class AKTrustedDeviceViewItem;

@interface AKAccessibleContainerView : NSView

@property (nonatomic) AKTrustedDeviceViewItem *item;

- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityFocusedUIElement;

@end

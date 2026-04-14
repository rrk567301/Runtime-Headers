@class NSStatusItem;

@interface NSAccessibilityMockStatusBarItem : NSAccessibilityMockUIElement

@property (nonatomic) NSStatusItem *statusItem;

- (unsigned long long)hash;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)_accessibilitySourceCell;
- (id)_accessibilitySourceElement;

@end

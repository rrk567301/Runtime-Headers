@class NSStatusItem;

@interface NSAccessibilityMockStatusBarItem : NSAccessibilityMockUIElement

@property (weak, nonatomic) NSStatusItem *statusItem;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)_accessibilitySourceElement;
- (id)_accessibilitySourceCell;

@end

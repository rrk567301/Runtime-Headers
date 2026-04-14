@interface NSTableViewListCellProxy : NSTableViewCellProxy

- (id)accessibilityAttributeNames;
- (id)accessibilityParentAttribute;
- (id)accessibilitySizeAttribute;
- (id)accessibilitySelectedAttribute;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (BOOL)_canDeselect;

@end

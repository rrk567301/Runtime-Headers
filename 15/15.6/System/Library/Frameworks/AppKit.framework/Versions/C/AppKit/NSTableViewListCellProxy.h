@interface NSTableViewListCellProxy : NSTableViewCellProxy

- (char)_canDeselect;
- (id)accessibilityAttributeNames;
- (char)accessibilityIsSelectedAttributeSettable;
- (id)accessibilityParentAttribute;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (id)accessibilitySizeAttribute;

@end

@class NSTableView;

@interface NSTableRow : NSObject {
    NSTableView *_tableView;
    long long _row;
}

+ (id)tableRow:(long long)a0 ofTableView:(id)a1;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (long long)row;
- (id)accessibilityCustomActions;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (BOOL)accessibilityIsIgnored;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilitySubroleAttribute;
- (BOOL)accessibilityIsSubroleAttributeSettable;
- (id)accessibilityParentAttribute;
- (BOOL)accessibilityIsParentAttributeSettable;
- (id)accessibilityWindowAttribute;
- (BOOL)accessibilityIsWindowAttributeSettable;
- (id)accessibilityTopLevelUIElementAttribute;
- (BOOL)accessibilityIsTopLevelUIElementAttributeSettable;
- (id)accessibilityPositionAttribute;
- (BOOL)accessibilityIsPositionAttributeSettable;
- (id)accessibilitySizeAttribute;
- (BOOL)accessibilityIsSizeAttributeSettable;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (BOOL)accessibilitySupportsNotifications;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityChildUIElementForSpecifierComponent:(long long)a0;
- (long long)_accessibilitySpecifierComponentForChildUIElement:(id)a0 registerIfNeeded:(BOOL)a1;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)deepestAccessibilityDescendants;
- (id)accessibilityVisibleChildrenAttribute;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilitySelectedAttribute;
- (id)accessibilityIndexAttribute;
- (id)_accessibilityChildrenWithIndexes:(id)a0;
- (long long)_childrenCount;
- (BOOL)accessibilityHasOutlineColumnMockGroupForRow:(long long)a0 column:(long long)a1;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (BOOL)accessibilityIsIndexAttributeSettable;
- (id)initWithRow:(long long)a0 ofTableView:(id)a1;
- (BOOL)_canDeselect;

@end

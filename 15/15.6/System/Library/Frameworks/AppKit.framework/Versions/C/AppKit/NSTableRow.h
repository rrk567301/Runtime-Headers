@class NSTableView;

@interface NSTableRow : NSObject {
    NSTableView *_tableView;
    long long _row;
}

+ (id)tableRow:(long long)a0 ofTableView:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (long long)row;
- (id)accessibilityActionDescription:(id)a0;
- (id)deepestAccessibilityDescendants;
- (id)_accessibilityChildUIElementForSpecifierComponent:(long long)a0;
- (id)_accessibilityChildrenWithIndexes:(id)a0;
- (id)_accessibilityDescriptionForRowAction:(id)a0;
- (long long)_accessibilitySpecifierComponentForChildUIElement:(id)a0 registerIfNeeded:(char)a1;
- (char)_canDeselect;
- (long long)_childrenCount;
- (id)accessibilityActionNames;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (id)accessibilityArrayAttributeValues:(id)a0 index:(unsigned long long)a1 maxCount:(unsigned long long)a2;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAddingActionButtonsToRowChildren:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (id)accessibilityCustomActions;
- (id)accessibilityFocusedUIElement;
- (char)accessibilityHasOutlineColumnMockGroupForRow:(long long)a0 column:(long long)a1;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityIndexAttribute;
- (unsigned long long)accessibilityIndexOfChild:(id)a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsChildrenAttributeSettable;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsIndexAttributeSettable;
- (char)accessibilityIsParentAttributeSettable;
- (char)accessibilityIsPositionAttributeSettable;
- (char)accessibilityIsRoleAttributeSettable;
- (char)accessibilityIsRoleDescriptionAttributeSettable;
- (char)accessibilityIsSelectedAttributeSettable;
- (char)accessibilityIsSizeAttributeSettable;
- (char)accessibilityIsSubroleAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsVisibleChildrenAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetSelectedAttribute:(id)a0;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilitySizeAttribute;
- (id)accessibilitySubroleAttribute;
- (char)accessibilitySupportsNotifications;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityVisibleChildrenAttribute;
- (id)accessibilityWindowAttribute;
- (id)initWithRow:(long long)a0 ofTableView:(id)a1;
- (void)performIfShowingActionButtons:(id /* block */)a0;

@end

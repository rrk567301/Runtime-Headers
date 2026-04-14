@class NSTableColumn;

@interface NSOutlineColumnMockGroup : NSObject {
    long long _row;
    NSTableColumn *_tableColumn;
}

+ (id)outlineColumnGroupForRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
+ (id)outlineColumnGroupForRow:(long long)a0 tableColumn:(id)a1;

- (void)dealloc;
- (long long)column;
- (long long)row;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
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
- (id)accessibilityFocusedUIElement;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (long long)accessibilityColumnIndex;
- (id)_cellProxyForRow:(long long)a0 tableColumn:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_groupRect;

@end

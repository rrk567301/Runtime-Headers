@class NSString, NSTableColumn;

@interface NSTableViewCellMockElement : NSObject <NSTableViewCellElement> {
    NSTableColumn *_tableColumn;
    long long _row;
    id _childView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellForRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
+ (id)cellForRow:(long long)a0 tableColumn:(id)a1;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (long long)row;
- (long long)column;
- (id)accessibilityActionDescription:(id)a0;
- (id)deepestAccessibilityDescendants;
- (void)_accessibilityScrollToVisible;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (long long)accessibilityColumnIndex;
- (id)accessibilityColumnIndexRangeAttribute;
- (id)accessibilityCustomActions;
- (id)accessibilityDescriptionAttribute;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityFocusedAttribute;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (char)accessibilityIsAttributeSettable:(id)a0;
- (char)accessibilityIsChildrenAttributeSettable;
- (char)accessibilityIsColumnIndexRangeAttributeSettable;
- (char)accessibilityIsDescriptionAttributeSettable;
- (char)accessibilityIsEnabledAttributeSettable;
- (char)accessibilityIsFocusedAttributeSettable;
- (char)accessibilityIsIgnored;
- (char)accessibilityIsParentAttributeSettable;
- (char)accessibilityIsPositionAttributeSettable;
- (char)accessibilityIsRoleAttributeSettable;
- (char)accessibilityIsRoleDescriptionAttributeSettable;
- (char)accessibilityIsRowIndexRangeAttributeSettable;
- (char)accessibilityIsSelectedAttributeSettable;
- (char)accessibilityIsSizeAttributeSettable;
- (char)accessibilityIsTitleUIElementAttributeSettable;
- (char)accessibilityIsTopLevelUIElementAttributeSettable;
- (char)accessibilityIsWindowAttributeSettable;
- (id)accessibilityOverriddenAttributes;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityParentAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityPositionAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityRoleDescriptionAttribute;
- (id)accessibilityRowIndexRangeAttribute;
- (id)accessibilitySelectedAttribute;
- (void)accessibilitySetValue:(id)a0 forAttribute:(id)a1;
- (id)accessibilitySizeAttribute;
- (id)accessibilityTitleUIElementAttribute;
- (id)accessibilityTopLevelUIElementAttribute;
- (id)accessibilityWindowAttribute;
- (id)childViewIsCellView:(char *)a0;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;
- (char)isGroupRowCell;
- (char)isOutline;
- (id)tableColumn;
- (id)tableView;

@end

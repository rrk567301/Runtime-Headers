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
- (BOOL)isEqual:(id)a0;
- (long long)column;
- (long long)row;
- (id)accessibilityCustomActions;
- (id)accessibilityOverriddenAttributes;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityParameterizedAttributeNames;
- (id)_accessibilityActionDelegate;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)tableView;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsRoleAttributeSettable;
- (id)accessibilityRoleDescriptionAttribute;
- (BOOL)accessibilityIsRoleDescriptionAttributeSettable;
- (id)accessibilityFocusedAttribute;
- (BOOL)accessibilityIsFocusedAttributeSettable;
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
- (id)accessibilityActionDescription:(id)a0;
- (id)accessibilityDescriptionAttribute;
- (BOOL)accessibilityIsDescriptionAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsChildrenAttributeSettable;
- (id)accessibilityTitleUIElementAttribute;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)deepestAccessibilityDescendants;
- (id)accessibilitySelectedAttribute;
- (long long)accessibilityColumnIndex;
- (BOOL)accessibilityIsSelectedAttributeSettable;
- (id)tableColumn;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (BOOL)isGroupRowCell;
- (id)childViewIsCellView:(BOOL *)a0;
- (BOOL)isOutline;
- (id)accessibilityRowIndexRangeAttribute;
- (BOOL)accessibilityIsRowIndexRangeAttributeSettable;
- (id)accessibilityColumnIndexRangeAttribute;
- (BOOL)accessibilityIsColumnIndexRangeAttributeSettable;

@end

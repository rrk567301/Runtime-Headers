@class NSString, NSTableColumn;

@interface NSTableViewCellProxy : NSAccessibilityProxy <NSTableViewCellElement> {
    NSTableColumn *_tableColumn;
    long long _row;
    Class _alternateParentClass;
    id _realElement;
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
- (id)tableView;
- (BOOL)accessibilityIsFocusedAttributeSettable;
- (void)accessibilitySetFocusedAttribute:(id)a0;
- (id)accessibilityParentAttribute;
- (id)accessibilityPositionAttribute;
- (id)accessibilitySizeAttribute;
- (void)accessibilityPerformAction:(id)a0;
- (id)realElement;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityChildrenInNavigationOrderAttribute;
- (BOOL)accessibilityIsValueAttributeSettable;
- (void)accessibilitySetValueAttribute:(id)a0;
- (void)_accessibilityShowMenu:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityWindowPointForShowMenu;
- (id)accessibilityCurrentEditor;
- (id)accessibilityBoundsForRangeAttributeForParameter:(id)a0;
- (void)setAlternateParentClass:(Class)a0;
- (void)_accessibilityPerformAction:(id)a0;
- (id)initWithRow:(long long)a0 tableColumn:(id)a1;
- (id)initWithRow:(long long)a0 column:(long long)a1 tableView:(id)a2;
- (long long)accessibilityColumnIndex;
- (Class)alternateParentClass;
- (BOOL)isBeingEdited;
- (id)editor;
- (id)cellForProxy;
- (void)_sendDataSourceSetObjectValue:(id)a0;
- (void)_accessibilityPopUpButtonCellPressAction:(id)a0;
- (void)_accessibilityPerformAction:(id)a0 withValue:(id)a1;

@end

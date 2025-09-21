@class NSArray, NSInspectorBar;

@interface __NSInspectorBarView : NSStackView

@property (copy) NSArray *items;
@property NSInspectorBar *inspectorBar;

- (void)addItem:(id)a0;
- (char)accessibilityIsIgnored;
- (id)accessibilityRoleAttribute;
- (char)mouseDownCanMoveWindow;
- (void)removeItems;

@end

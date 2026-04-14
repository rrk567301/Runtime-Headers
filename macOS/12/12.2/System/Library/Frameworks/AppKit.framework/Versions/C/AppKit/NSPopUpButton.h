@class NSArray, NSString, NSMenu, NSMenuItem;

@interface NSPopUpButton : NSButton {
    struct __pbFlags { unsigned char needsPullsDownFromTemplate : 1; unsigned int RESERVED : 31; } _pbFlags;
}

@property (retain) NSMenu *menu;
@property BOOL pullsDown;
@property BOOL autoenablesItems;
@property unsigned long long preferredEdge;
@property (readonly, copy) NSArray *itemArray;
@property (readonly) long long numberOfItems;
@property (readonly) NSMenuItem *lastItem;
@property (readonly) NSMenuItem *selectedItem;
@property (readonly) long long indexOfSelectedItem;
@property (readonly) long long selectedTag;
@property (readonly, copy) NSArray *itemTitles;
@property (readonly, copy) NSString *titleOfSelectedItem;

+ (void)initialize;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)itemAtIndex:(long long)a0;
- (long long)state;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pullsDown:(BOOL)a1;
- (void)addItemWithTitle:(id)a0;
- (void)removeAllItems;
- (id)title;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)image;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)removeItemAtIndex:(long long)a0;
- (long long)indexOfItem:(id)a0;
- (void)performClick:(id)a0;
- (void)sizeToFit;
- (long long)indexOfItemWithTarget:(id)a0 andAction:(SEL)a1;
- (id)itemWithTitle:(id)a0;
- (void)_windowChangedKeyState;
- (void)_setWindow:(id)a0;
- (BOOL)_allowsContextMenus;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (long long)indexOfItemWithRepresentedObject:(id)a0;
- (void)selectItemAtIndex:(long long)a0;
- (long long)indexOfItemWithTag:(long long)a0;
- (id)itemTitleAtIndex:(long long)a0;
- (long long)indexOfItemWithTitle:(id)a0;
- (void)synchronizeTitleAndSelectedItem;
- (void)removeItemWithTitle:(id)a0;
- (void)insertItemWithTitle:(id)a0 atIndex:(long long)a1;
- (void)instantiateWithObjectInstantiator:(id)a0;
- (void)_fixTargetsForMenu:(id)a0;
- (void)addItemsWithTitles:(id)a0;
- (void)selectItem:(id)a0;
- (void)selectItemWithTitle:(id)a0;
- (BOOL)selectItemWithTag:(long long)a0;
- (void)_updateMenuUniquing;
- (long long)sizingBehavior;
- (void)setSizingBehavior:(long long)a0;
- (id)ns_widgetType;

@end

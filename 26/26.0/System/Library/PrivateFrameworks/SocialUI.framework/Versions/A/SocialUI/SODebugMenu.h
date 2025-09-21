@class NSMutableArray;

@interface SODebugMenu : SODebugMenuItem {
    NSMutableArray *_menuItems;
}

- (BOOL)validateMenuItem:(id)a0;
- (id)initWithTitle:(id)a0;
- (void)removeAllItems;
- (void).cxx_destruct;
- (void)addMenuItem:(id)a0;
- (void)addMenuItemWithWithTitle:(id)a0 target:(id)a1 action:(SEL)a2 validate:(SEL)a3 keyEquivalent:(id)a4;
- (void)addSeperator;
- (void)handleMenuAction:(id)a0;

@end

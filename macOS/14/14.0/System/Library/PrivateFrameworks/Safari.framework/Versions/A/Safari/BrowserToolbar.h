@interface BrowserToolbar : NSToolbar

@property (class, readonly, nonatomic, getter=isUserModifyingToolbarItems) BOOL userIsModifyingToolbarItems;

@property (nonatomic) BOOL canHostUnifiedTabBar;

- (void)_userMoveItemFromIndex:(long long)a0 toIndex:(long long)a1;
- (BOOL)_allowsDisplayMode:(unsigned long long)a0;
- (BOOL)_allowsSizeMode:(unsigned long long)a0;
- (void)_configSheetDidEnd:(id)a0 returnCode:(long long)a1 contextInfo:(void *)a2;
- (BOOL)_drawsBackground;
- (void)_userInsertItemWithItemIdentifier:(id)a0 atIndex:(long long)a1;
- (void)_userRemoveItemAtIndex:(long long)a0;
- (void)_userResetToDefaultConfiguration;
- (void)_userSetCurrentItemsToItemIdentifiers:(id)a0;
- (void)validateVisibleItems;

@end

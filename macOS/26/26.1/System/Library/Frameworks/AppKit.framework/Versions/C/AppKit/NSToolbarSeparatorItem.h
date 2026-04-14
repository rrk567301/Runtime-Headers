@interface NSToolbarSeparatorItem : NSToolbarItem {
    id _separatorItemReserved;
}

+ (id)itemIdentifier;

- (id)view;
- (id)init;
- (void)_separatorFinishInit;
- (BOOL)allowsDuplicatesInToolbar;
- (id)initWithItemIdentifier:(id)a0;

@end

@interface NSToolbarSeparatorItem : NSToolbarItem {
    id _separatorItemReserved;
}

+ (id)itemIdentifier;

- (id)init;
- (id)view;
- (void)_separatorFinishInit;
- (char)allowsDuplicatesInToolbar;
- (id)initWithItemIdentifier:(id)a0;

@end

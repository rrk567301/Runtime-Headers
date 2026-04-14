@interface NSToolbarSeparatorItem : NSToolbarItem {
    id _separatorItemReserved;
}

+ (id)itemIdentifier;

- (id)init;
- (id)view;
- (BOOL)isSeparatorItem;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)_separatorFinishInit;
- (BOOL)allowsDuplicatesInToolbar;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;

@end

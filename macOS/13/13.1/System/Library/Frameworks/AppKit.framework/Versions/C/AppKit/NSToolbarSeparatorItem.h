@interface NSToolbarSeparatorItem : NSToolbarItem {
    id _separatorItemReserved;
}

+ (id)itemIdentifier;

- (id)init;
- (id)view;
- (id)initWithItemIdentifier:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })minSize;
- (struct CGSize { double x0; double x1; })maxSize;
- (BOOL)isSeparatorItem;
- (void)_separatorFinishInit;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (BOOL)allowsDuplicatesInToolbar;

@end

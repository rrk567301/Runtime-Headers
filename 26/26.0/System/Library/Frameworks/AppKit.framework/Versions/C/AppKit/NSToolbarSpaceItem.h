@interface NSToolbarSpaceItem : NSToolbarItem

+ (id)itemIdentifier;

- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (void)dealloc;
- (id)init;
- (id)view;
- (BOOL)isSpace;
- (BOOL)_emptyContents;
- (BOOL)_needsRedisplayWhenBeginningToolbarEditing;
- (void)_separatorFinishInit;
- (id)_spaceView;
- (BOOL)allowsDuplicatesInToolbar;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (BOOL)isBordered;
- (BOOL)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (BOOL)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;

@end

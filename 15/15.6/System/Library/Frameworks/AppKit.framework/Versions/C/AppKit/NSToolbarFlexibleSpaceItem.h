@interface NSToolbarFlexibleSpaceItem : NSToolbarItem

+ (id)itemIdentifier;

- (void)dealloc;
- (id)init;
- (id)view;
- (struct CGSize { double x0; double x1; })maxSize;
- (struct CGSize { double x0; double x1; })minSize;
- (char)isSpace;
- (char)_emptyContents;
- (char)_needsRedisplayWhenBeginningToolbarEditing;
- (void)_separatorFinishInit;
- (id)_spaceView;
- (char)allowsDuplicatesInToolbar;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (char)wantsToDrawIconInDisplayMode:(unsigned long long)a0;
- (char)wantsToDrawIconIntoLabelAreaInDisplayMode:(unsigned long long)a0;
- (char)wantsToDrawLabelInDisplayMode:(unsigned long long)a0;

@end

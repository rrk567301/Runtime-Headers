@class SFSportsFollowButtonItem;

@interface SearchUISportsFollowButtonItem : SearchUIToggleButtonItem

@property (retain) SFSportsFollowButtonItem *sfButtonItem;

- (id)toggledTitle;
- (id)untoggledTitle;
- (char)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)initWithSFButtonItem:(id)a0;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (void)updateButtonStateIsFollowing:(char)a0 didSucceed:(char)a1 completionHandler:(id /* block */)a2;
- (void)updateStateIfNeeded;
- (void)updateStateIfNeededWithCompletionHandler:(id /* block */)a0;
- (char)useDefaultSymbolFillStyle;

@end

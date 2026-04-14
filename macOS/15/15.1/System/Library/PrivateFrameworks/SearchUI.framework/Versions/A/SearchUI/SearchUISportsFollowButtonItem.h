@class SFSportsFollowButtonItem;

@interface SearchUISportsFollowButtonItem : SearchUIToggleButtonItem

@property (retain) SFSportsFollowButtonItem *sfButtonItem;

- (id)toggledTitle;
- (id)untoggledTitle;
- (BOOL)allowsContextMenu;
- (id)commandForStatus:(unsigned long long)a0;
- (id)offStateSymbolName;
- (id)onStateSymbolName;
- (BOOL)useDefaultSymbolFillStyle;

@end

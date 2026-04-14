@class SFSportsFollowButtonItem;

@interface SearchUISportsFollowButtonItem : SearchUIToggleButtonItem

@property (retain) SFSportsFollowButtonItem *sfButtonItem;

- (BOOL)hasState;
- (id)offStateCommand;
- (id)commandWithStatus:(unsigned long long)a0;
- (id)offStateSymbolName;
- (id)offStateTitle;
- (id)onStateCommand;
- (id)onStateSymbolName;
- (id)onStateTitle;

@end

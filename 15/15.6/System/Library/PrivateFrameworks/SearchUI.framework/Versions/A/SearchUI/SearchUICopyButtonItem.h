@interface SearchUICopyButtonItem : SearchUIButtonItem

- (char)hasState;
- (char)allowsContextMenu;
- (void)didUpdatePasteboard;
- (id)initWithSFButtonItem:(id)a0;
- (id)onStateSymbolName;

@end

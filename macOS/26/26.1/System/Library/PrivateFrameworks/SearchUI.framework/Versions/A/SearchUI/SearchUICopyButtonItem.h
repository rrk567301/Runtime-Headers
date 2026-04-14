@class NSTimer;

@interface SearchUICopyButtonItem : SearchUIButtonItem {
    NSTimer *_statusTimer;
}

+ (double)offsetSinceLastPasteboardUpdate;
+ (void)pasteboardWasUpdatedWithObject:(id)a0;
+ (id)lastPasteboardUpdateObject;

- (void)setStatus:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)hasState;
- (BOOL)allowsContextMenu;
- (void)didUpdatePasteboard:(id)a0;
- (id)initWithSFButtonItem:(id)a0;
- (id)onStateSymbolName;
- (BOOL)pasteboardStringMatches;
- (id)stateSymbolTransition;

@end

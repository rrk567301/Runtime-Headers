@class NSTimer;

@interface SearchUICopyButtonItem : SearchUIButtonItem {
    NSTimer *_statusTimer;
}

+ (double)offsetSinceLastPasteboardUpdate;
+ (void)pasteboardWasUpdatedWithObject:(id)a0;
+ (id)lastPasteboardUpdateObject;

- (void).cxx_destruct;
- (void)setStatus:(unsigned long long)a0;
- (BOOL)hasState;
- (BOOL)allowsContextMenu;
- (void)didUpdatePasteboard:(id)a0;
- (id)initWithSFButtonItem:(id)a0;
- (id)onStateSymbolName;
- (BOOL)pasteboardStringMatches;
- (id)stateSymbolTransition;

@end

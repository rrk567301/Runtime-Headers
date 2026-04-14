@interface RemindersUICore.TTRMSuggestionWindowController : NSWindowController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ localMouseDownEventMonitor;
    void /* unknown type, empty encoding */ lostFocusObserver;
    void /* unknown type, empty encoding */ viewShownFor;
    void /* unknown type, empty encoding */ accessibilitySuggestionWindowTimer;
}

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithWindow:(id)a0;
- (void)cancelOperation:(id)a0;
- (void)insertNewline:(id)a0;
- (void)moveDown:(id)a0;
- (void)moveUp:(id)a0;
- (void)windowDidLoad;

@end

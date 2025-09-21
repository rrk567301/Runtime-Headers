@interface RemindersUICore.TTRMSuggestionWindowController : NSWindowController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ localMouseDownEventMonitor;
    void /* unknown type, empty encoding */ lostFocusObserver;
    void /* unknown type, empty encoding */ viewShownFor;
}

- (void)windowDidLoad;
- (void)cancelOperation:(id)a0;
- (id)initWithWindow:(id)a0;
- (void)insertNewline:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)moveUp:(id)a0;
- (void)moveDown:(id)a0;

@end

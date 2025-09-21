@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {
    char _hasActiveFindSession;
}

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (void)paste:(id)a0;
- (void)pasteAsPlainText:(id)a0;
- (char)performDragOperation:(id)a0;
- (char)canBecomeFirstResponder;
- (char)supportsTextReplacement;
- (void)ic_evaluateJavaScript:(id)a0;
- (void)strikethrough:(id)a0;

@end

@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView {
    BOOL _hasActiveFindSession;
}

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)paste:(id)a0;
- (BOOL)supportsTextReplacement;
- (void).cxx_destruct;
- (void)pasteAsPlainText:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)ic_evaluateJavaScript:(id)a0;
- (void)strikethrough:(id)a0;

@end

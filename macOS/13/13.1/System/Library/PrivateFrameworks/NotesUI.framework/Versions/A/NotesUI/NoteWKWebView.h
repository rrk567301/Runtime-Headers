@class NoteHTMLEditorView;

@interface NoteWKWebView : WKWebView

@property (weak, nonatomic) NoteHTMLEditorView *noteHTMLEditorView;

- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (BOOL)performDragOperation:(id)a0;
- (void)paste:(id)a0;
- (void)pasteAsPlainText:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (BOOL)supportsTextReplacement;
- (void)strikethrough:(id)a0;
- (void)ic_evaluateJavaScript:(id)a0;

@end

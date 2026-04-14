@class NSString, SnippetEditorWKWebView, NSTextView, NSButton;

@interface SnippetEditor : NSWindowController <NSTextViewDelegate, NSSplitViewDelegate, ReopensAtLaunch> {
    NSTextView *_textView;
    SnippetEditorWKWebView *_webView;
    NSButton *_updateAfterTypingCheckBox;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)reopen;
+ (id)sharedSnippetEditor;

- (void).cxx_destruct;
- (void)textDidChange:(id)a0;
- (id)windowNibName;
- (void)windowDidLoad;
- (double)splitView:(id)a0 constrainMinCoordinate:(double)a1 ofSubviewAt:(long long)a2;
- (double)splitView:(id)a0 constrainMaxCoordinate:(double)a1 ofSubviewAt:(long long)a2;
- (void)updatePreview;
- (void)updateNow:(id)a0;

@end

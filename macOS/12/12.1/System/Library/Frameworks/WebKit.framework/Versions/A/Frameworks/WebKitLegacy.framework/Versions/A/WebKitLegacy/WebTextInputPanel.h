@class NSTextView;

@interface WebTextInputPanel : WebPanel {
    NSTextView *_inputTextView;
}

- (void)dealloc;
- (id)init;
- (id)_inputContext;
- (void)_keyboardInputSourceChanged:(id)a0;
- (BOOL)_interpretKeyEvent:(id)a0 string:(id *)a1;

@end

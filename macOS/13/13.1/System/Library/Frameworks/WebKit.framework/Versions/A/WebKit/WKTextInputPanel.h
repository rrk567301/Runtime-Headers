@interface WKTextInputPanel : WebPanel {
    struct RetainPtr<NSTextView> { void *m_ptr; } _inputTextView;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_inputContext;
- (void)_unmarkText;
- (BOOL)_interpretKeyEvent:(id)a0 usingLegacyCocoaTextInput:(BOOL)a1 string:(id *)a2;
- (BOOL)_hasMarkedText;

@end

@interface WKTextInputPanel : WebPanel {
    struct RetainPtr<NSTextView> { void *m_ptr; } _inputTextView;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_inputContext;
- (char)_hasMarkedText;
- (char)_interpretKeyEvent:(id)a0 usingLegacyCocoaTextInput:(char)a1 string:(id *)a2;
- (void)_unmarkText;

@end

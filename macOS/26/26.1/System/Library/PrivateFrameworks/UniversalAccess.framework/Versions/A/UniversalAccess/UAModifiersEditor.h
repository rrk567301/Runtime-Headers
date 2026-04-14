@interface UAModifiersEditor : NSTextView {
    unsigned long long _modifiers;
    BOOL _recording;
}

- (BOOL)validateMenuItem:(id)a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (id)init;
- (void)flagsChanged:(id)a0;
- (unsigned long long)modifiers;
- (BOOL)performKeyEquivalent:(id)a0;
- (void)_stopRecording:(id)a0;
- (void)_flagsChangedAction:(id)a0;
- (void)setModifiers:(unsigned long long)a0;

@end

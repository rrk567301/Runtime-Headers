@class TIIndicScriptComposer;

@interface TIKeyboardInputManagerIndic : TIKeyboardInputManager

@property BOOL alphabeticLayout;
@property (retain) TIIndicScriptComposer *scriptComposer;

- (id)handleKeyboardInput:(id)a0;
- (void)setKeyLayout:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (void).cxx_destruct;
- (id)contextualDisplayKeys;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (Class)scriptComposerClass;
- (void)syncToLayoutState:(id)a0;

@end

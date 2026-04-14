@class TIIndicScriptComposer;

@interface TIKeyboardInputManagerIndic : TIKeyboardInputManager

@property BOOL alphabeticLayout;
@property (retain) TIIndicScriptComposer *scriptComposer;

- (id)contextualDisplayKeys;
- (void).cxx_destruct;
- (void)setKeyLayout:(id)a0;
- (id)handleKeyboardInput:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (Class)scriptComposerClass;
- (void)syncToLayoutState:(id)a0;

@end

@class TIIndicScriptComposer;

@interface TIKeyboardInputManagerIndic : TIKeyboardInputManager

@property BOOL alphabeticLayout;
@property (retain) TIIndicScriptComposer *scriptComposer;

- (void)setKeyLayout:(id)a0;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)contextualDisplayKeys;
- (id)handleKeyboardInput:(id)a0;
- (void).cxx_destruct;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (Class)scriptComposerClass;
- (void)syncToLayoutState:(id)a0;

@end

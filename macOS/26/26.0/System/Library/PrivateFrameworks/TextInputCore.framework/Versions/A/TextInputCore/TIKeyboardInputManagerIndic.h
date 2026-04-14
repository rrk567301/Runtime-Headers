@class TIIndicScriptComposer;

@interface TIKeyboardInputManagerIndic : TIKeyboardInputManager

@property BOOL alphabeticLayout;
@property (retain) TIIndicScriptComposer *scriptComposer;

- (id)contextualDisplayKeys;
- (id)initWithConfig:(id)a0 keyboardState:(id)a1;
- (id)handleKeyboardInput:(id)a0;
- (void)setKeyLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)deletesComposedTextByComposedCharacterSequence;
- (Class)scriptComposerClass;
- (void)syncToLayoutState:(id)a0;

@end

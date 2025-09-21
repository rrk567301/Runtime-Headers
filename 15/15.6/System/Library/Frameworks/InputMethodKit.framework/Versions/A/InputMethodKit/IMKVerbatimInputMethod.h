@interface IMKVerbatimInputMethod : IMKAbstractInputMethod

@property (nonatomic) char useComposingText;

- (char)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end

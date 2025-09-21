@interface IMKAutoCapitalizationInputMethod : IMKAbstractInputMethod

@property (nonatomic) unsigned int lastAutoCapCharacter;
@property (nonatomic) char previousPressedKeyWasShift;
@property (nonatomic, getter=isShiftLocked) char shiftLocked;

- (char)handleKeyPress:(id)a0 whileInKeyboardState:(id)a1;

@end

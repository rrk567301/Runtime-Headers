@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (id)string;
- (id)objectValue;
- (void)setObjectValue:(id)a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)becomeFirstResponder;

@end

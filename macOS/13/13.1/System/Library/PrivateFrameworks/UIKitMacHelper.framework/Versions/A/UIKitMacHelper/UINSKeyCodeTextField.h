@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (id)string;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)becomeFirstResponder;

@end

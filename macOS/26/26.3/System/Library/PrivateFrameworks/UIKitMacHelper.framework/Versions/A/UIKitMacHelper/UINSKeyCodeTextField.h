@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (void)setObjectValue:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)objectValue;
- (void)mouseDown:(id)a0;
- (id)string;
- (void)keyDown:(id)a0;

@end

@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (id)objectValue;
- (void)mouseDown:(id)a0;
- (void)setObjectValue:(id)a0;
- (BOOL)becomeFirstResponder;
- (id)string;
- (void)keyDown:(id)a0;

@end

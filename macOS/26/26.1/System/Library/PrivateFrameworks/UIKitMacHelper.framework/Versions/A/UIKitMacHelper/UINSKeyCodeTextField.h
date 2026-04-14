@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (id)objectValue;
- (id)string;
- (BOOL)becomeFirstResponder;
- (void)setObjectValue:(id)a0;
- (void)mouseDown:(id)a0;
- (void)keyDown:(id)a0;

@end

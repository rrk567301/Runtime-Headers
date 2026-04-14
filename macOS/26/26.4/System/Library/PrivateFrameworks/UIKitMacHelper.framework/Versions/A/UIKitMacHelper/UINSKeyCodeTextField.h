@interface UINSKeyCodeTextField : NSTextField {
    long long _keyCode;
}

- (BOOL)becomeFirstResponder;
- (void)setObjectValue:(id)a0;
- (id)objectValue;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (id)string;

@end

@interface TextFieldThatSelectsAllWhenEditing : NSTextField {
    char _isHandlingMouseDownEvent;
}

- (void)mouseDown:(id)a0;

@end

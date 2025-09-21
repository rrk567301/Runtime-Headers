@interface CalUIControlView : NSView

@property (nonatomic) char highlighted;

- (id)init;
- (char)acceptsFirstResponder;
- (char)becomeFirstResponder;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (char)resignFirstResponder;

@end

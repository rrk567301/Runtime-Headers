@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (id)init;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseUp:(id)a0;

@end

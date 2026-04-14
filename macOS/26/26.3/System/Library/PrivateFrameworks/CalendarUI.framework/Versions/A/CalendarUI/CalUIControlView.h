@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (void)mouseUp:(id)a0;
- (BOOL)resignFirstResponder;
- (id)init;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;

@end

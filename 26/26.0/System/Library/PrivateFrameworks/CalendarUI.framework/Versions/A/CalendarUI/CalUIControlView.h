@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)init;
- (BOOL)acceptsFirstResponder;

@end

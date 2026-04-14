@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (id)init;

@end

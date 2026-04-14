@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (BOOL)resignFirstResponder;
- (void)mouseUp:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)a0;
- (id)init;

@end

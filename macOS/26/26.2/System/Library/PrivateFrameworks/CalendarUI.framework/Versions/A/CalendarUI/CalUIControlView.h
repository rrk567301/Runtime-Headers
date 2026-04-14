@interface CalUIControlView : NSView

@property (nonatomic) BOOL highlighted;

- (void)mouseDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)mouseUp:(id)a0;
- (id)init;
- (BOOL)acceptsFirstResponder;

@end

@class NSEvent;

@interface KHSelectionGestureRecognizer : NSGestureRecognizer

@property (nonatomic) BOOL extending;
@property (retain, nonatomic) NSEvent *recognitionEvent;

- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)reset;
- (void).cxx_destruct;

@end

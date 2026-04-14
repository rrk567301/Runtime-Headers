@class NSEvent;

@interface KHSelectionGestureRecognizer : NSGestureRecognizer

@property (nonatomic) BOOL extending;
@property (retain, nonatomic) NSEvent *recognitionEvent;

- (void)reset;
- (void).cxx_destruct;
- (void)mouseDragged:(id)a0;
- (void)mouseDown:(id)a0;

@end

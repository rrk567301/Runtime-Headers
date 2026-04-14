@class NSEvent;

@interface KHSelectionGestureRecognizer : NSGestureRecognizer

@property (nonatomic) BOOL extending;
@property (retain, nonatomic) NSEvent *recognitionEvent;

- (void)mouseDragged:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)reset;

@end

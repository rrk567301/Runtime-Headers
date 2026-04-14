@class EKViewController;

@interface EKView : NSView

@property (weak) EKViewController *controller;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)draggingEntered:(id)a0;
- (BOOL)performDragOperation:(id)a0;

@end

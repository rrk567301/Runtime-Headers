@interface WorkflowEditor.EditorDragGestureRecognizer : NSGestureRecognizer {
    void /* unknown type, empty encoding */ itemProvider;
    void /* unknown type, empty encoding */ itemSource;
    void /* unknown type, empty encoding */ lastMouseDownLocation;
    void /* unknown type, empty encoding */ minimumDistance;
}

- (void)mouseUp:(id)a0;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (id)init;
- (void)mouseDragged:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)mouseDown:(id)a0;

@end

@interface WorkflowEditor.EditorDragGestureRecognizer : NSGestureRecognizer {
    void /* unknown type, empty encoding */ itemProvider;
    void /* unknown type, empty encoding */ itemSource;
    void /* unknown type, empty encoding */ lastMouseDownLocation;
    void /* unknown type, empty encoding */ minimumDistance;
}

- (void)mouseDown:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 action:(SEL)a1;
- (void)mouseUp:(id)a0;
- (id)init;
- (void)mouseDragged:(id)a0;

@end

@class QCInterpolation, NSTextField;

@interface QCInterpolationView : NSView {
    NSTextField *timeField;
    NSTextField *valueField;
    QCInterpolation *_spline;
    long long _selectedIndex;
}

- (BOOL)resignFirstResponder;
- (void)cut:(id)a0;
- (BOOL)becomeFirstResponder;
- (BOOL)isOpaque;
- (void)paste:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (void)selectAll:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void)moveDown:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)canBecomeKeyView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)delete:(id)a0;
- (void)moveUp:(id)a0;
- (void)deleteBackward:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)updateControls;
- (void)duplicate:(id)a0;
- (void)__stateUpdated:(id)a0;
- (void)setPatch:(id)a0;
- (void)updateControlPoint:(id)a0;

@end

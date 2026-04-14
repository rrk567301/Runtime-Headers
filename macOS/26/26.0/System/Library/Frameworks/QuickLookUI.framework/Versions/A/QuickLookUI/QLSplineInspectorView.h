@interface QLSplineInspectorView : NSView {
    struct function<void (QLSplineInspectorView *, CGRect)> { struct __value_func<void (QLSplineInspectorView *, CGRect)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _draw;
    struct function<void (QLSplineInspectorView *, CGPoint)> { struct __value_func<void (QLSplineInspectorView *, CGPoint)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _mouseDown;
    struct function<void (QLSplineInspectorView *, CGPoint)> { struct __value_func<void (QLSplineInspectorView *, CGPoint)> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _mouseDragged;
}

@property (nonatomic) double scale;
@property (nonatomic) long long trackingKnotIndex;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;

@end

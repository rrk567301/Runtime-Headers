@interface FI_TICloudBadgePlaceholderView : FI_TUpdateLayerView {
    BOOL _isMouseDown;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
}

@property (getter=isSelected) BOOL selected;
@property (getter=isDimmed) BOOL dimmed;
@property (getter=isActive) BOOL active;
@property int context;
@property (nonatomic) int badge;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (id)image;
- (id).cxx_construct;
- (void)initCommon;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setClickHandler:(const void *)a0;

@end

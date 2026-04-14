@interface FI_TICloudBadgePlaceholderView : FI_TUpdateLayerView {
    BOOL _isMouseDown;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
}

@property (getter=isSelected) BOOL selected;
@property (getter=isDimmed) BOOL dimmed;
@property (getter=isActive) BOOL active;
@property int context;
@property (nonatomic) int badge;

- (void)mouseUp:(id)a0;
- (void)initCommon;
- (void)mouseDragged:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)image;
- (id).cxx_construct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)setClickHandler:(const void *)a0;

@end

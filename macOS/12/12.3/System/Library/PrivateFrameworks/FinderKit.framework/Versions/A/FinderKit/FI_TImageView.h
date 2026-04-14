@class NSValue, NSObject;
@protocol TDraggingSource;

@interface FI_TImageView : NSImageView {
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _clickHandler;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _doubleClickHandler;
    BOOL _doubleClickOnMouseUp;
    struct TNSWeakPtr<NSObject<TDraggingSource>, void> { NSValue *fWeakObject; } _weakDraggingSourceDelegate;
}

@property (nonatomic) BOOL rejectsMultiFileDrops;
@property (nonatomic) BOOL acceptsFirstMouse;
@property (nonatomic) BOOL delayWindowOrderingOnClickThrough;
@property (weak, nonatomic) NSObject<TDraggingSource> *draggingSourceDelegate;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic, getter=isOpaqueHitTestingEnabled) BOOL opaqueHitTestingEnabled;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (void)awakeFromNib;
- (void)setAccessibilityElement:(BOOL)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)setBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)viewDidChangeBackingProperties;
- (void)viewWillMoveToWindow:(id)a0;
- (void)initCommon;
- (void)awakeCommon;
- (void)setClickHandler:(const void *)a0;
- (BOOL)_pointIsInsideView:(const struct CGPoint { double x0; double x1; } *)a0;
- (id)draggingSourceDelegate;
- (void)setDraggingSourceDelegate:(id)a0;
- (void)setDoubleClickHandler:(const void *)a0;
- (void)configureDropShadowWithOffset:(struct CGSize { double x0; double x1; })a0 size:(double)a1 alpha:(double)a2;

@end

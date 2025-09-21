@class NSString, FI_TInlineProgressHostLayer;

@interface FI_TDesktopInlineProgressView : FI_TUpdateLayerView <TTrackingAreaOwnerProtocol, CAAnimationDelegate, CALayerDelegate, NSViewLayerContentScaleDelegate> {
    FI_TInlineProgressHostLayer *_inlineProgressHostLayer;
    struct function<void ()> { struct __value_func<void ()> { union type { unsigned char __data[24]; } __buf_; void *__f_; } __f_; } _cancelButtonHandler;
}

@property (nonatomic) double percentComplete;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL canCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (void)mouseUp:(id)a0;
- (double)baselineOffset;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)dealloc;
- (void)updateTrackingAreas;
- (id).cxx_construct;
- (void)initCommon;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstMouse:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityIsIgnored;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)completeAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (id)initWithFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 canCancel:(BOOL)a1 initialPercentComplete:(double)a2;
- (void)setCancelButtonHandler:(const void *)a0;
- (void)setIconFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 baselineOffset:(double)a1;
- (void)setPercentCompleteWithoutAnimation:(double)a0;
- (void)startTrackingCancelButton;
- (void)stopTrackingCancelButton;

@end

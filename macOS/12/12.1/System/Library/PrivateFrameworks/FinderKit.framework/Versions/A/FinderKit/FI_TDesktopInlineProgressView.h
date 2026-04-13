@class NSString, FI_TInlineProgressHostLayer;

@interface FI_TDesktopInlineProgressView : FI_TUpdateLayerView <TTrackingAreaOwnerProtocol, CAAnimationDelegate, CALayerDelegate, NSViewLayerContentScaleDelegate> {
    FI_TInlineProgressHostLayer *_inlineProgressHostLayer;
    struct function<void ()> { struct __value_func<void ()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } _cancelButtonHandler;
}

@property (nonatomic) double percentComplete;
@property (nonatomic) unsigned int state;
@property (nonatomic) BOOL canCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (unsigned int)state;
- (id).cxx_construct;
- (void)setState:(unsigned int)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)accessibilityIsIgnored;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (double)baselineOffset;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (void)initCommon;
- (double)percentComplete;
- (void)setPercentComplete:(double)a0;
- (BOOL)canCancel;
- (void)setCanCancel:(BOOL)a0;
- (void)completeAnimation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })iconFrame;
- (void)setCancelButtonHandler:(const void *)a0;
- (id)initWithFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 canCancel:(BOOL)a1 initialPercentComplete:(double)a2;
- (void)setIconFrame:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 baselineOffset:(double)a1;
- (void)stopTrackingCancelButton;
- (void)startTrackingCancelButton;
- (void)setPercentCompleteWithoutAnimation:(double)a0;

@end

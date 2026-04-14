@class NSTextField, NSResponder, NSVisualEffectView;

@interface WebCoreFullScreenPlaceholderView : NSView {
    struct RetainPtr<NSVisualEffectView> { NSVisualEffectView *m_ptr; } _effectView;
    struct RetainPtr<NSTextField> { NSTextField *m_ptr; } _exitWarning;
    struct WeakObjCPtr<NSResponder> { id m_weakReference; } _target;
}

@property (retain) id contents;
@property (weak) NSResponder *target;

- (id)contents;
- (void)setContents:(id)a0;
- (void)mouseDown:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setExitWarningVisible:(BOOL)a0;

@end

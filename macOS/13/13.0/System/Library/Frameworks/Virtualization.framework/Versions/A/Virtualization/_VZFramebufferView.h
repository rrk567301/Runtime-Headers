@class NSCursor, NSString, NSImageView, _VZFramebuffer;

@interface _VZFramebufferView : NSView <CALayerDelegate, _VZFramebufferObserver> {
    _VZFramebuffer *_framebuffer;
    BOOL _showsCursor;
    struct CGSize { double width; double height; } _framebufferSize;
    id _occlusionObserver;
    struct optional<CGPoint> { union { char __null_state_; struct CGPoint { double x; double y; } __val_; } ; BOOL __engaged_; } _currentCursorPosition;
    NSImageView *_cursorView;
    NSCursor *_unscaledCursor;
    double _scaleX;
    double _scaleY;
}

@property (retain) NSCursor *cursor;
@property (retain) _VZFramebuffer *framebuffer;
@property BOOL showsCursor;
@property (readonly) struct CGSize { double x0; double x1; } framebufferSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (id)actionForLayer:(id)a0 forKey:(id)a1;
- (void)setWantsLayer:(BOOL)a0;
- (void)framebuffer:(id)a0 didUpdateFrame:(struct shared_ptr<const VzCore::Hardware::FrameUpdate> { struct FrameUpdate *x0; struct __shared_weak_count *x1; })a1;
- (void)framebuffer:(id)a0 didUpdateCursor:(struct shared_ptr<const VzCore::Hardware::CursorUpdate> { struct CursorUpdate *x0; struct __shared_weak_count *x1; })a1;

@end

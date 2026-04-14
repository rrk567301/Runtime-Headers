@class NSCursor, _VZFramebufferView, VZObserverProxy, VZVirtualMachine, NSTrackingArea;
@protocol _VZVirtualMachineViewDelegate;

@interface VZVirtualMachineView : NSView {
    VZVirtualMachine *_virtualMachine;
    id<_VZVirtualMachineViewDelegate> _delegate;
    long long _scaleMode;
    _VZFramebufferView *_framebufferView;
    id _resignKeyWindowObserver;
    id _becomeKeyWindowObserver;
    id _eventMonitor;
    id _keyEventMonitor;
    VZObserverProxy *_virtualMachineObserver;
    NSTrackingArea *_trackingArea;
    struct vector<unsigned short, std::allocator<unsigned short>> { unsigned short *__begin_; unsigned short *__end_; struct __compressed_pair<unsigned short *, std::allocator<unsigned short>> { unsigned short *__value_; } __end_cap_; } _keys_down;
    BOOL _capturesSystemKeys;
    BOOL _guestIsUsingHostCursor;
    NSCursor *_currentGuestCursor;
    BOOL _mouseIsInTrackingArea;
    BOOL _virtualMachineIsRunning;
    BOOL _showsHostCursor;
}

@property (setter=_setScaleMode:) long long _scaleMode;
@property (weak, setter=_setDelegate:) id<_VZVirtualMachineViewDelegate> _delegate;
@property (readonly) BOOL _canGrabMouseInput;
@property (readonly) BOOL _canReleaseMouseInput;
@property (retain) VZVirtualMachine *virtualMachine;
@property BOOL capturesSystemKeys;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)mouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)rightMouseDown:(id)a0;
- (void)keyDown:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)scrollWheel:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)updateTrackingAreas;
- (void)viewWillMoveToWindow:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)keyUp:(id)a0;
- (void)flagsChanged:(id)a0;
- (void)rightMouseDragged:(id)a0;
- (void)otherMouseDown:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)commonInitialization;
- (BOOL)_releaseMouseInput;
- (BOOL)_grabMouseInput;

@end

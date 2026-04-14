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
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)layout;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)otherMouseDown:(id)a0;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)flagsChanged:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)keyDown:(id)a0;
- (void)keyUp:(id)a0;
- (void)magnifyWithEvent:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (void)mouseUp:(id)a0;
- (void)otherMouseDragged:(id)a0;
- (void)otherMouseUp:(id)a0;
- (void)quickLookWithEvent:(id)a0;
- (BOOL)resignFirstResponder;
- (void)rightMouseDragged:(id)a0;
- (void)rightMouseUp:(id)a0;
- (void)rotateWithEvent:(id)a0;
- (void)scrollWheel:(id)a0;
- (void)smartMagnifyWithEvent:(id)a0;
- (void)updateTrackingAreas;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)_grabMouseInput;
- (BOOL)_releaseMouseInput;

@end

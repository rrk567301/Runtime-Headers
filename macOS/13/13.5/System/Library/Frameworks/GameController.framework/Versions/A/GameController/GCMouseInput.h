@class GCDeviceCursor, NSArray, GCController, NSMutableArray, GCControllerButtonInput;

@interface GCMouseInput : GCPhysicalInputProfile {
    GCController *_controller;
    BOOL _isActive;
    BOOL _wasInitialized;
    long long _buttons;
    NSMutableArray *_auxiliaryButtons;
    id /* block */ _mouseMovedHandlerPrivate;
    id /* block */ _mouseButtonPressedPrivate;
}

@property (copy, nonatomic) id /* block */ mouseMovedHandler;
@property (readonly, nonatomic) GCDeviceCursor *scroll;
@property (readonly, nonatomic) GCControllerButtonInput *leftButton;
@property (readonly, nonatomic) GCControllerButtonInput *rightButton;
@property (readonly, nonatomic) GCControllerButtonInput *middleButton;
@property (readonly, nonatomic) NSArray *auxiliaryButtons;

- (id)name;
- (void).cxx_destruct;
- (id)controller;
- (void)handleEvent:(struct __IOHIDEvent { } *)a0;
- (id)initWithController:(id)a0;
- (void)setController:(id)a0;
- (id)productCategory;
- (void)_fireMouseMovedWithQueue:(id)a0 deltaX:(float)a1 deltaY:(float)a2;
- (void)_handleButtonEvent:(long long)a0;
- (void)_handleDigitizerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleEventImpl:(struct __IOHIDEvent { } *)a0;
- (BOOL)_handleEventRec:(struct __IOHIDEvent { } *)a0;
- (void)_handlePointerEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_handleScrollEvent:(struct CGPoint { double x0; double x1; })a0;
- (void)_inserCGMouseEvent:(unsigned int)a0 delta:(struct CGPoint { double x0; double x1; })a1 withButtonMask:(unsigned long long)a2;
- (long long)_mouseButtons;
- (void)appDidBecomeActive;
- (void)appWillResignActive;
- (long long)currentButtonMask;
- (id)handlerQueue;
- (id /* block */)mouseButtonPressedPrivate;
- (id /* block */)mouseMovedHandlerPrivate;
- (void)setMouseButtonPressedPrivate:(id /* block */)a0;
- (void)setMouseMovedHandlerPrivate:(id /* block */)a0;
- (BOOL)shouldAcceptMouseEvents;

@end

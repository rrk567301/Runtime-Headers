@class CALayer, CAContext;

@interface ZMWWindow : NSObject {
    unsigned int _cgsID;
    int _windowLevel;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _screenRect;
    struct CGPoint { double x; double y; } _centerPoint;
    unsigned int _surface;
    struct _CAView { } *_animationView;
    BOOL _needsToRedraw;
    BOOL _isShowEnabled;
    BOOL _isOrderedIn;
    double _lastShowTime;
    struct CGPoint { double x; double y; } _lastMouseDownScreenLocation;
    CAContext *_context;
    struct __CFRunLoopSource { } *_mouseSourceMT;
    struct __CFRunLoop { } *_runLoopMT;
}

@property (readonly, nonatomic) CALayer *rootLayer;
@property (readonly, nonatomic) unsigned int windowID;

+ (unsigned long long)multiMonitorSpace;

- (void)dealloc;
- (BOOL)isHidden;
- (void).cxx_destruct;
- (void)setAlpha:(double)a0;
- (void)hide;
- (void)handleMouseEvent:(struct __CGEvent { } *)a0;
- (void)show;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })windowRect;
- (double)scaleFactor;
- (void)refresh;
- (struct CGPoint { double x0; double x1; })centerPoint;
- (void)_setupLayers;
- (void)handleScrollWheelEvent:(struct __CGEvent { } *)a0;
- (void)_setWindowLevel:(int)a0;
- (void)_setTrustedForObscuring;
- (void)updateUserSettings;
- (void)_setScreenRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleMouseMoveEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseDownEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseUpEvent:(struct __CGEvent { } *)a0;
- (void)handleMouseDragEvent:(struct __CGEvent { } *)a0;
- (void)_disableMouseEvents;
- (void)_enableMouseEvents;
- (void)_deallocMT;
- (void)moveWindowToMultiMonitorSpace;
- (void)reorder;
- (struct CGPoint { double x0; double x1; })screenPointForWindowPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })windowPointForScreenPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_updateWindowLevel;
- (void)_setupCoreAnimation;
- (void)setEventRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)disableMouseEvents;
- (void)enableMouseEvents;
- (void)setLastMouseDownScreenLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_eventHandlerWithPort:(struct __CFMachPort { } *)a0 message:(void *)a1 size:(long long)a2 context:(void *)a3;
- (void)_deallocRT;

@end

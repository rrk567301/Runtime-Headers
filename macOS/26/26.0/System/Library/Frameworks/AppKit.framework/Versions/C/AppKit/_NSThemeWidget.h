@interface _NSThemeWidget : NSButton {
    id _eventMonitor;
    unsigned char _ignoreRentry : 1;
    unsigned char _didSetTranslatesAutoresizingMask : 1;
}

+ (void)initialize;
+ (id)widgetInView:(id)a0 withButtonID:(long long)a1 action:(SEL)a2;

- (void)setAlphaValue:(double)a0;
- (void)update;
- (void)viewDidMoveToWindow;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (void).cxx_destruct;
- (void)setHidden:(BOOL)a0;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0;
- (id)_cornerConfiguration;
- (BOOL)_enableTranslatesAutoresizingMaskIntoConstraintsIfNotSet;
- (long long)_scrollPocketElementStyle;
- (id)_startingWindowForSendAction:(SEL)a0;
- (void)flagsChanged;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;
- (id)initWithButtonID:(long long)a0;
- (void)mouseEnteredOrExited;
- (void)setFrameOrigin:(struct CGPoint { double x0; double x1; })a0 ignoreRentry:(BOOL)a1;
- (void)startMonitoringFlagsChanged;
- (void)stopMonitoringFlagsChanged;
- (BOOL)supportsFauxSolariumControlMetrics;

@end

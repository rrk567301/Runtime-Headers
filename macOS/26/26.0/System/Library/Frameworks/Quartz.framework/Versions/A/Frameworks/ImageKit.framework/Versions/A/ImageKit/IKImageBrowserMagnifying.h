@class NSTimer;

@interface IKImageBrowserMagnifying : NSObject {
    struct CGPoint { double x; double y; } _center;
    int _state;
    double _time;
    float _delay;
    NSTimer *_timer;
    int _mode;
}

- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)start;
- (void)dealloc;
- (void)setMode:(int)a0;
- (void)stop;
- (BOOL)isActive;
- (void)alternateMagnifying;
- (void)processCells:(id)a0 withBrowser:(id)a1;

@end

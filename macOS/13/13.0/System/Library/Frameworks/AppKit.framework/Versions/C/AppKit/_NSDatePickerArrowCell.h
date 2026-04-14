@class NSTimer, NSDate;

@interface _NSDatePickerArrowCell : NSActionCell {
    NSTimer *_timer;
    NSDate *_lastFireDateForTimer;
    double _doubleValue;
}

+ (BOOL)prefersTrackingUntilMouseUp;

- (double)doubleValue;
- (void)setControlView:(id)a0;
- (void)setDoubleValue:(double)a0;
- (id)initImageCell:(id)a0;
- (void)setAlternateImage:(id)a0;
- (id)alternateImage;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_controlContentStyleInView:(id)a0;
- (BOOL)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(BOOL)a3;
- (BOOL)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (BOOL)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (BOOL)continueTrackingGesture:(id)a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(BOOL)a3;
- (void)_updateMouseTracking;
- (id)_pressureConfigurationIfNeeded;
- (void)_timerDidFire;
- (void)_sendAction;
- (void)_invalidateTimer;
- (double)_timerInterval;
- (double)_initialTimerDelay;
- (void)_scheduleTimer;
- (void)_rescheduleTimer;
- (BOOL)_hasTrackingGesture;

@end

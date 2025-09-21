@class NSTimer, NSDate;

@interface _NSDatePickerArrowCell : NSActionCell {
    NSTimer *_timer;
    NSDate *_lastFireDateForTimer;
    double _doubleValue;
}

+ (char)prefersTrackingUntilMouseUp;

- (double)doubleValue;
- (void)setControlView:(id)a0;
- (void)setDoubleValue:(double)a0;
- (char)continueTrackingGesture:(id)a0 inView:(id)a1;
- (id)_datePickerContentStyleInView:(id)a0;
- (char)_hasTrackingGesture;
- (double)_initialTimerDelay;
- (void)_invalidateTimer;
- (id)_pressureConfigurationIfNeeded;
- (void)_rescheduleTimer;
- (void)_scheduleTimer;
- (void)_sendAction;
- (void)_timerDidFire;
- (double)_timerInterval;
- (void)_updateMouseTracking;
- (id)alternateImage;
- (char)continueTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2;
- (void)drawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)initImageCell:(id)a0;
- (void)setAlternateImage:(id)a0;
- (char)startTrackingAt:(struct CGPoint { double x0; double x1; })a0 inView:(id)a1;
- (void)stopTracking:(struct CGPoint { double x0; double x1; })a0 at:(struct CGPoint { double x0; double x1; })a1 inView:(id)a2 mouseIsUp:(char)a3;
- (char)trackMouse:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2 untilMouseUp:(char)a3;

@end

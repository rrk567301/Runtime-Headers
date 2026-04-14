@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (void)start:(BOOL)a0;
- (BOOL)isStarted;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (void)update:(int)a0 isEnabled:(BOOL)a1;
- (id)init;

@end

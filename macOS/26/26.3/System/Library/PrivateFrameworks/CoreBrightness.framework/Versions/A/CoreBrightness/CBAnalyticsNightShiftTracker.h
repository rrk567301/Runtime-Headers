@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (BOOL)isStarted;
- (id)init;
- (void)start:(BOOL)a0;
- (void)update:(int)a0 isEnabled:(BOOL)a1;

@end

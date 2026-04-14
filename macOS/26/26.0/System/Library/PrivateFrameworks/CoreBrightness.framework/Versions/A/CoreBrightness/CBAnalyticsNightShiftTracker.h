@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (BOOL)isStarted;
- (id)init;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (void)update:(int)a0 isEnabled:(BOOL)a1;
- (void)start:(BOOL)a0;

@end

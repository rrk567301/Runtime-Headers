@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    BOOL _isEnabled;
}

- (void)start:(BOOL)a0;
- (BOOL)isStarted;
- (void)update:(int)a0 isEnabled:(BOOL)a1;
- (void)stop:(int)a0 isEnabled:(BOOL)a1;
- (id)init;

@end

@interface CBAnalyticsNightShiftTracker : NSObject {
    double _modeChangeTimestamp;
    char _isEnabled;
}

- (id)init;
- (char)isStarted;
- (void)start:(char)a0;
- (void)stop:(int)a0 isEnabled:(char)a1;
- (void)update:(int)a0 isEnabled:(char)a1;

@end

@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (void)reset;
- (id)elapsedTimeAsString:(int)a0;
- (void)start;
- (void)stop;
- (id)init;
- (void)markEventStart:(id)a0;
- (double)markEventSplit:(id)a0;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventEnd:(id)a0;
- (id)description;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void).cxx_destruct;

@end

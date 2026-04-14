@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (void)start;
- (void)stop;
- (id)description;
- (id)init;
- (double)markEventSplit:(id)a0;
- (double)markEventEnd:(id)a0;
- (void).cxx_destruct;
- (void)markEventStart:(id)a0;
- (unsigned long long)elapsedTimeInNanoseconds;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (void)reset;
- (id)elapsedTimeAsString:(int)a0;

@end

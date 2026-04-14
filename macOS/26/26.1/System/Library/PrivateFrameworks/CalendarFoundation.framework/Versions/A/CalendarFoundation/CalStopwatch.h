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
- (unsigned long long)elapsedTimeInNanoseconds;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventEnd:(id)a0;
- (double)markEventSplit:(id)a0;
- (id)description;
- (void)reset;
- (void)stop;
- (void).cxx_destruct;
- (void)markEventStart:(id)a0;
- (id)elapsedTimeAsString:(int)a0;
- (id)init;

@end

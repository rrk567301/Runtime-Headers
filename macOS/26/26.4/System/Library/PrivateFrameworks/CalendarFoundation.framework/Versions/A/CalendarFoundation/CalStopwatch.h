@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    BOOL _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    BOOL _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property BOOL usesSignalFlags;

- (void)stop;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (double)markEventEnd:(id)a0;
- (void).cxx_destruct;
- (double)markEventSplit:(id)a0;
- (void)reset;
- (id)init;
- (void)start;
- (id)description;
- (unsigned long long)elapsedTimeInNanoseconds;
- (void)markEventStart:(id)a0;
- (id)elapsedTimeAsString:(int)a0;

@end

@class NSMutableDictionary;

@interface CalStopwatch : NSObject {
    char _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    char _hasValidElapsedTime;
    NSMutableDictionary *_events;
}

@property char usesSignalFlags;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)reset;
- (void)stop;
- (void)markEventStart:(id)a0;
- (double)markEventSplit:(id)a0;
- (unsigned long long)elapsedTimeAsNumber:(int)a0;
- (id)elapsedTimeAsString:(int)a0;
- (unsigned long long)elapsedTimeInNanoseconds;
- (double)markEventEnd:(id)a0;

@end

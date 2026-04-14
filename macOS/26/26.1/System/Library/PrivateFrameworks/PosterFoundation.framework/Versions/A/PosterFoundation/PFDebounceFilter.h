@class NSMutableArray;

@interface PFDebounceFilter : NSObject {
    unsigned long long _debounceAfterEvents;
    double _interval;
    NSMutableArray *_eventTimestamps;
}

- (void).cxx_destruct;
- (BOOL)allowEvent;
- (id)initWithDebounceAfterEvents:(unsigned long long)a0 withinTimeInterval:(double)a1;

@end

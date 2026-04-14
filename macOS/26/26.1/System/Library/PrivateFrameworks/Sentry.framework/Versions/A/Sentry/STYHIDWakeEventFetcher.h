@class NSDateFormatter;

@interface STYHIDWakeEventFetcher : NSObject {
    struct __IOHIDEventSystemClient { } *_eventSystemRef;
    NSDateFormatter *_formatter;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)a0 before:(unsigned long long)a1;

@end

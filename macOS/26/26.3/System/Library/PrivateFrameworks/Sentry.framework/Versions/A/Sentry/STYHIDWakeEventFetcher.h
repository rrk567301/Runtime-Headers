@class NSDateFormatter;

@interface STYHIDWakeEventFetcher : NSObject {
    struct __IOHIDEventSystemClient { } *_eventSystemRef;
    NSDateFormatter *_formatter;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)firstHidWakeEventAfter:(unsigned long long)a0 before:(unsigned long long)a1;

@end

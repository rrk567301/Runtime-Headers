@interface ALSHIDManager : NSObject {
    struct __IOHIDEventSystemClient { } *hidEventClient;
}

+ (id)singleton;

- (void)stop;
- (void)start;

@end

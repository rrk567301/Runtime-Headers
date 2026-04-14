@interface SCRHIDProperties : NSObject {
    struct __IOHIDEventSystemClient { } *_client;
    struct __IOHIDServiceClient { } *_service;
}

- (id)init;
- (void)dealloc;
- (double)keyRepeatDelay;
- (double)doubleClickSpeedDelay;
- (double)initialKeyRepeatDelay;

@end

@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void)longPressTimerFired:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end

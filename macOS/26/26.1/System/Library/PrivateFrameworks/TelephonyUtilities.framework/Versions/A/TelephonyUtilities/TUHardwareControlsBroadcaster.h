@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)longPressTimerFired:(id)a0;

@end

@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void)longPressTimerFired:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

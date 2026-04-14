@class NSString;

@interface TUHardwareControlsBroadcaster : NSObject {
    struct __IOHIDEventSystemClient { } *_hidEventSystemClientRef;
}

@property (retain) NSString *eventTypeToIgnore;

- (void).cxx_destruct;
- (void)longPressTimerFired:(id)a0;
- (id)init;
- (void)dealloc;

@end

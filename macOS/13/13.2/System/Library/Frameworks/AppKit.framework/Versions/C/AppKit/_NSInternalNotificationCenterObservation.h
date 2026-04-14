@class _NSInternalNotificationCenter;

@interface _NSInternalNotificationCenterObservation : NSObject {
    _NSInternalNotificationCenter *_notificationCenter;
    unsigned long long _token;
}

- (void)dealloc;
- (void)invalidate;
- (id)initWithNotificationCenter:(id)a0 token:(unsigned long long)a1;

@end

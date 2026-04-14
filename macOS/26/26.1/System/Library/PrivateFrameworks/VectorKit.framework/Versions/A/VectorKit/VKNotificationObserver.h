@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;
- (void)_receivedPowerStateDidChangeNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedThermalStateDidChangeNotification;
- (void)dealloc;
- (void)_receivedLocalChangedNotification;
- (void).cxx_destruct;
- (void)_receivedMemoryNotification;

@end

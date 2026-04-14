@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)_receivedMemoryNotification;
- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;
- (void).cxx_destruct;
- (void)_receivedPowerStateDidChangeNotification;
- (void)_receivedThermalStateDidChangeNotification;
- (void)dealloc;
- (void)_receivedLocalChangedNotification;
- (void)_receivedFlushTileCachesNotification;

@end

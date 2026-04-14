@class NSObject;
@protocol OS_dispatch_source, VKNotificationObserverDelegate;

@interface VKNotificationObserver : NSObject {
    id<VKNotificationObserverDelegate> _target;
    SEL _selector;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
}

- (void)_receivedMemoryNotification;
- (void).cxx_destruct;
- (void)_receivedThermalStateDidChangeNotification;
- (void)_receivedFlushTileCachesNotification;
- (void)_receivedPowerStateDidChangeNotification;
- (id)initWithTarget:(id)a0 taskContext:(const void *)a1;
- (void)_receivedLocalChangedNotification;
- (void)dealloc;

@end

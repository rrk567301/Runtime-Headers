@class NSString, AVWeakReference, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    char _registeredForObjectNotifications;
    char _started;
    char _finished;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)cancel;
- (void)main;
- (void)_registerForObjectNotifications;
- (void)_balanceMonitoringIsFinishedSemaphore;
- (id)_monitoredObject;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (void)_unregisterForObjectNotifications;
- (void)_waitUntilFinishedIfNeeded;
- (id)initWithObject:(id)a0 notificationNames:(id)a1;
- (void)monitoredObjectHasDeparted;

@end

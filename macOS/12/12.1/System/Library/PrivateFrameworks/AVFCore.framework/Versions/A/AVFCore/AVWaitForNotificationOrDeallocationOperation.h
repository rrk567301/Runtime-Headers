@class NSString, AVWeakReference, NSArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface AVWaitForNotificationOrDeallocationOperation : NSOperation <AVObjectMonitoring> {
    AVWeakReference *_weakReferenceToSelf;
    AVWeakReference *_weakReferenceToMonitoredObject;
    NSObject<OS_dispatch_queue> *_operationStateSerializationQueue;
    NSObject<OS_dispatch_semaphore> *_monitoringIsFinishedSemaphore;
    NSArray *_notificationNames;
    BOOL _registeredForObjectNotifications;
    BOOL _started;
    BOOL _finished;
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
- (void)_unregisterForObjectNotifications;
- (void)_signalMonitoringIsFinishedIfNeeded;
- (void)_waitUntilFinishedIfNeeded;
- (void)monitoredObjectHasDeparted;
- (id)initWithObject:(id)a0 notificationNames:(id)a1;
- (id)_monitoredObject;

@end

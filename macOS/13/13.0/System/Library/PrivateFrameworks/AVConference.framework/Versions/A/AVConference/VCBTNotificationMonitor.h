@class NSMutableArray;

@interface VCBTNotificationMonitor : NSObject {
    NSMutableArray *_handlerArray;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _btNotificationHandlerLock;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (int)registerBTNotificationHandler:(id /* block */)a0;
- (void)unregisterBTNotificationHandler:(int)a0;
- (void)unregisterAllBTNotificationHandlers;
- (void)setupBTEventHandler;
- (void)processBTNotification:(struct { char *x0; unsigned long long x1; } *)a0;
- (void)registerDarwinNotification:(id)a0;
- (void)unregisterDarwinNotification:(id)a0;
- (void)registerForBluetoothImmediateNotifications;
- (void)unregisterBluetoothImmediateNotifications;

@end

@class NSMutableDictionary;

@interface VCBTNotificationMonitor : NSObject {
    NSMutableDictionary *_handlers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _btNotificationHandlerLock;
    unsigned int _clientTokenCounter;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void)processBTNotification:(struct { char *x0; unsigned long long x1; } *)a0;
- (unsigned int)registerBTNotificationHandler:(id /* block */)a0;
- (void)registerDarwinNotification:(id)a0;
- (void)registerForBluetoothImmediateNotifications;
- (void)setupBTEventHandler;
- (void)unregisterBTNotificationHandler:(unsigned int *)a0;
- (void)unregisterBluetoothImmediateNotifications;
- (void)unregisterDarwinNotification:(id)a0;

@end

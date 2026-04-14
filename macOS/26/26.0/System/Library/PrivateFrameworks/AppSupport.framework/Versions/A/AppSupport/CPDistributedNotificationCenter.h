@class NSString, NSLock, NSObject;
@protocol OS_dispatch_queue;

@interface CPDistributedNotificationCenter : NSObject {
    NSString *_centerName;
    NSLock *_lock;
    struct __CFRunLoopSource { } *_receiveNotificationSource;
    BOOL _isServer;
    struct __CFDictionary { } *_sendPorts;
    unsigned long long _startCount;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)centerNamed:(id)a0;
+ (void)setCenter:(id)a0 forServerPort:(unsigned int)a1;
+ (id)_serverPortToNotificationCenterMapDispatchQueue;
+ (id)centerForServerPort:(unsigned int)a0;
+ (struct __CFDictionary { } *)_serverPortToNotificationCenterMap;

- (void)_notificationServerWasRestarted;
- (void)runServer;
- (void)dealloc;
- (id)_initWithServerName:(id)a0;
- (void)_createReceiveSourceForRunLoop:(struct __CFRunLoop { } *)a0;
- (void)deliverNotification:(id)a0 userInfo:(id)a1;
- (void)startDeliveringNotificationsToMainThread;
- (void)stopDeliveringNotifications;
- (void)runServerOnCurrentThread;
- (void)_checkOutAndRemoveSource;
- (id)name;
- (void)_checkIn;
- (void)postNotificationName:(id)a0 userInfo:(id)a1;
- (void)startDeliveringNotificationsToRunLoop:(struct __CFRunLoop { } *)a0;
- (void)_receivedCheckIn:(unsigned int)a0 auditToken:(struct { unsigned int x0[8]; } *)a1;
- (BOOL)postNotificationName:(id)a0 userInfo:(id)a1 toBundleIdentifier:(id)a2;
- (void)postNotificationName:(id)a0;

@end

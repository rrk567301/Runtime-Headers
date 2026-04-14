@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MAUnlockMonitor : NSObject <MAUnlockMonitorProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (copy) id /* block */ clientCallback;
@property BOOL clientNotifiedOfFirstUnlock;
@property int firstUnlockNotificationToken;
@property int lockStateChangedNotificationToken;
@property BOOL firstUnlockNotificationTokenValid;
@property BOOL lockStateChangedNotificationTokenValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)hasBeenUnlockedSinceBoot;
- (void)cleanupRegistration;
- (void)notifyAfterFirstUnlock:(id /* block */)a0;
- (void)notifyClientDevicePastFirstUnlockAndCleanupRegistration:(id)a0;

@end

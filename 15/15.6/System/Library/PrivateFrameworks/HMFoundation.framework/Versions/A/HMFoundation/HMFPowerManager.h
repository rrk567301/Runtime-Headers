@class NSObject;
@protocol OS_dispatch_queue;

@interface HMFPowerManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isRunning) char running;
@property (readonly, nonatomic) struct IONotificationPort { } *notificationPort;
@property (readonly, nonatomic) unsigned int interestNotification;
@property (readonly) char hasBattery;
@property (readonly) long long batteryState;
@property (readonly) float batteryLevel;

+ (id)sharedManager;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (void)_deregisterForPowerSourceNotifications:(char)a0;
- (void)_registerForPowerSourceNotifications;
- (void)updateBatteryState:(unsigned int)a0;

@end

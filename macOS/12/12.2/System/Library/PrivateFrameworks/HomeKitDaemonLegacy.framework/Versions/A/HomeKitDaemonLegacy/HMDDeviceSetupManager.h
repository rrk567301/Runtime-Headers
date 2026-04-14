@class NSNotificationCenter;
@protocol HMDDeviceSetupManagerExternalObjectSource, HMFLocking;

@interface HMDDeviceSetupManager : HMFObject {
    id<HMFLocking> _lock;
    int _proxSetupNotificationToken;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDDeviceSetupManagerExternalObjectSource> externalObjectSource;
@property (readonly, getter=isRunning) BOOL running;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startAdvertising:(long long)a0;
- (void)stopAdvertising:(long long)a0;
- (id)initWithExternalObjectSource:(id)a0 notificationCenter:(id)a1;

@end

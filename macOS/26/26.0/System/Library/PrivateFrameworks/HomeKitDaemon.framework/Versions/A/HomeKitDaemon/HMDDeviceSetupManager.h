@class NSNotificationCenter, HMDCoreFollowUpManager;
@protocol HMDarwinNotificationProvider;

@interface HMDDeviceSetupManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _proxSetupNotificationToken;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDarwinNotificationProvider> darwinNotificationProvider;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) HMDCoreFollowUpManager *followUpManager;

+ (id)sharedManager;

- (void)dealloc;
- (id)initWithNotificationCenter:(id)a0 followUpManager:(id)a1 darwinNotificationProvider:(id)a2;
- (void).cxx_destruct;

@end

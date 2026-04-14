@class NSNotificationCenter;
@protocol HMDDeviceSetupManagerDataSource;

@interface HMDDeviceSetupManager : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _proxSetupNotificationToken;
}

@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) id<HMDDeviceSetupManagerDataSource> dataSource;
@property (readonly, getter=isRunning) BOOL running;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startAdvertising:(long long)a0;
- (void)stopAdvertising:(long long)a0;
- (id)initWithDataSource:(id)a0 notificationCenter:(id)a1;
- (void)removeAllFollowUpItemsWithCompletion:(id /* block */)a0;

@end

@class NSString, HMDHome, NSNotificationCenter;

@interface HMDHAPAccessoryConnectionCoordinator : NSObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HMDHome *_home;
    NSNotificationCenter *_notificationCenter;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)logIdentifier;
- (void)configureWithIsResidentCapable:(char)a0;
- (void)_disableDisconnectOnIdleWithAccessoriesAndConnect:(char)a0;
- (void)_enableDisconnectOnIdleWithAccessories;
- (void)evaluateAccessoryConnectionStatus;
- (void)handleCurrentResidentChanged:(id)a0;
- (void)handleIsResidentFirstAccessoryCommunicationEnabledDidChangeNotification:(id)a0;
- (void)handlePrimaryResidentChanged:(id)a0;
- (void)handleResidentAddRemove:(id)a0;
- (void)handleResidentChangedOnNonResident;
- (void)handleResidentStatusChanged:(id)a0;
- (void)handleResidentUpdated:(id)a0;
- (id)initWithHome:(id)a0 notificationCenter:(id)a1;

@end

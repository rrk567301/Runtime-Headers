@class NSSet, NSString, NSMutableSet, HMHomeManager, NSObject;
@protocol OS_dispatch_queue;

@interface APHomeKitDeviceMonitor : NSObject <HMHomeManagerDelegate, HMHomeDelegate, HMAccessoryDelegate>

@property (nonatomic) HMHomeManager *homeManager;
@property (nonatomic) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain, nonatomic) NSMutableSet *deviceIdentifiers;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ homeConfigurationDidChangeHandler;
@property (readonly, nonatomic) NSSet *homeKitDeviceIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)home:(id)a0 didAddAccessory:(id)a1;
- (void)dealloc;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)invalidate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)init;
- (void)homeManagerDidUpdateCurrentHome:(id)a0;
- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)accessoryDidUpdateName:(id)a0;
- (void)activateWithCompletionInternal:(id /* block */)a0;
- (void)fullRefresh;
- (void)handleHomeKitAccessoriesDidChange;
- (void)invalidateInternal;
- (BOOL)refreshWithAccessory:(id)a0 isAddOrUpdate:(BOOL)a1 notifyOnAccessoryChange:(BOOL)a2;
- (BOOL)refreshWithHome:(id)a0 isAddOrUpdate:(BOOL)a1 notifyOnAccessoriesChanged:(BOOL)a2;

@end

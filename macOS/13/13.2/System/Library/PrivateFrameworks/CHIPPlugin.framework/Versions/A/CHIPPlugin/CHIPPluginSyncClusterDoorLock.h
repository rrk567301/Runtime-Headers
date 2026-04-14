@class MTRBaseDevice, NSString, MTRDevice, NSObject;
@protocol OS_dispatch_queue;

@interface CHIPPluginSyncClusterDoorLock : MTRClusterDoorLock <HMFLogging>

@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (retain) MTRDevice *device;
@property (retain) MTRBaseDevice *baseDevice;
@property unsigned short endpoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)deriveHomePinFromUUID:(id)a0 withNumberOfDigits:(long long)a1;
+ (id)pinDataWithDigits:(id)a0;

- (void)dealloc;
- (id)lock;
- (void).cxx_destruct;
- (id)unlock;
- (id)initWithDevice:(id)a0 baseDevice:(id)a1 endpoint:(unsigned short)a2 queue:(id)a3;
- (void)unlockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)lockDoorWithAccessoryUUID:(id)a0 completionHandler:(id /* block */)a1;
- (id)removeHomeUser;
- (id)deriveHomePinFromUUID:(id)a0;
- (id)provisionHomePin:(id)a0;
- (id)findOrAddHomeUser;
- (id)pinCredentialForUser:(id)a0;
- (id)addPinCredentialWithValue:(id)a0 forUserIndex:(long long)a1;
- (id)firstAvailableCredentialSlotForCredentialType:(long long)a0;
- (id)findAvailableCredentialIndexStartingAtSlot:(long long)a0 forCredentialType:(long long)a1 assumingTotalNumberOfSlots:(long long)a2;
- (id)findHomeUserOrAvailableSlot;
- (id)findHomeUserIndexStartingAtSlot:(long long)a0 assumingTotalNumberOfSlots:(long long)a1 availableSlots:(id)a2 currentFabricIndex:(id)a3;
- (id)lockWithPin:(id)a0;
- (id)unlockWithPin:(id)a0;
- (id)addRemoteUserAtUserIndex:(long long)a0 withUserUniqueID:(long long)a1;
- (id)getUserAtIndex:(long long)a0;
- (id)clearUserAtIndex:(long long)a0;
- (id)addPinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2;
- (id)updatePinCredentialAtIndex:(long long)a0 withValue:(id)a1 forUserAtUserIndex:(long long)a2;
- (id)getCredentialAtIndex:(long long)a0 forCredentialType:(long long)a1;
- (id)fetchCurrentFabricIndex;
- (id)totalNumberOfUsersSupported;
- (long long)totalNumberOfPINCredentialsSupported;
- (BOOL)accessoryHasCOTAEnabled;

@end

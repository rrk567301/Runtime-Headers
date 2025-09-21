@class NSString, BiometricKitXPCClient, BKDeviceDescriptor, NSObject;
@protocol BKDeviceDelegate, OS_dispatch_queue;

@interface BKDevice : NSObject <BiometricKitXPCClientDelegate, BiometricKitDelegateXpcProtocol> {
    BiometricKitXPCClient *_xpcClient;
}

@property (retain, nonatomic) BKDeviceDescriptor *descriptor;
@property (weak, nonatomic) id<BKDeviceDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deviceWithDescriptor:(id)a0 error:(id *)a1;
+ (char)biometryAvailabilityInfo:(long long *)a0 fromDeviceInfo:(long long)a1 error:(id *)a2;
+ (char)deviceAvailableWithFailure:(char *)a0;
+ (char)extendedLockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;
+ (char)lockoutState:(long long *)a0 fromDeviceLockoutState:(long long)a1 error:(id *)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (void)connectionInterrupted;
- (id)dispatchQueue;
- (char)isDelegate;
- (id)accessoriesWithError:(id *)a0;
- (id)connectedAccessoriesWithError:(id *)a0;
- (id)createEnrollOperationWithError:(id *)a0;
- (char)expressModeState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)freeIdentityCountForUser:(unsigned int)a0 error:(id *)a1;
- (id)accessoryGroupsWithError:(id *)a0;
- (char)bioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (char)biometryAvailability:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (id)createMatchOperationWithError:(id *)a0;
- (id)createPresenceDetectOperationWithError:(id *)a0;
- (char)deviceHardwareState:(unsigned long long *)a0 error:(id *)a1;
- (char)dropAllUnlockTokensWithError:(id *)a0;
- (id)effectiveProtectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (void)enrollFeedback:(id)a0 client:(unsigned long long)a1;
- (void)enrollResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)enrollUpdate:(id)a0 client:(unsigned long long)a1;
- (char)extendedBioLockoutState:(long long *)a0 forUser:(unsigned int)a1 error:(id *)a2;
- (char)forceBioLockoutForAllUsersWithError:(id *)a0;
- (char)forceBioLockoutForUser:(unsigned int)a0 error:(id *)a1;
- (char)forceBioLockoutIfLockedForUser:(unsigned int)a0 error:(id *)a1;
- (id)freeIdentityCountForUser:(unsigned int)a0 accessoryGroup:(id)a1 error:(id *)a2;
- (void)homeButtonPressed:(unsigned long long)a0;
- (id)identitiesDatabaseHashForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesDatabaseUUIDForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesForUser:(unsigned int)a0 accessoryGroup:(id)a1 error:(id *)a2;
- (id)identitiesForUser:(unsigned int)a0 error:(id *)a1;
- (id)identitiesWithError:(id *)a0;
- (id)identityForUUID:(id)a0 error:(id *)a1;
- (id)lastMatchEventWithError:(id *)a0;
- (void)matchResult:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (id)maxIdentityCountWithError:(id *)a0;
- (id)protectedConfigurationForUser:(unsigned int)a0 error:(id *)a1;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 async:(char)a1 reply:(id /* block */)a2;
- (char)removeAllIdentitiesForUser:(unsigned int)a0 error:(id *)a1;
- (void)removeAllIdentitiesForUser:(unsigned int)a0 reply:(id /* block */)a1;
- (void)removeIdentity:(id)a0 async:(char)a1 reply:(id /* block */)a2;
- (char)removeIdentity:(id)a0 error:(id *)a1;
- (void)removeIdentity:(id)a0 reply:(id /* block */)a1;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 async:(char)a3 reply:(id /* block */)a4;
- (char)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 error:(id *)a3;
- (void)setProtectedConfiguration:(id)a0 forUser:(unsigned int)a1 credentialSet:(id)a2 reply:(id /* block */)a3;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 async:(char)a2 reply:(id /* block */)a3;
- (char)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 error:(id *)a2;
- (void)setSystemProtectedConfiguration:(id)a0 credentialSet:(id)a1 reply:(id /* block */)a2;
- (void)statusMessage:(unsigned int)a0 client:(unsigned long long)a1;
- (void)statusMessage:(unsigned int)a0 details:(id)a1 client:(unsigned long long)a2;
- (id)systemProtectedConfigurationWithError:(id *)a0;
- (void)taskResumeStatus:(int)a0 client:(unsigned long long)a1;
- (void)templateUpdate:(id)a0 details:(id)a1 client:(unsigned long long)a2;
- (void)touchIDButtonPressed:(char)a0 client:(unsigned long long)a1;
- (void)updateIdentity:(id)a0 async:(char)a1 reply:(id /* block */)a2;
- (char)updateIdentity:(id)a0 error:(id *)a1;
- (void)updateIdentity:(id)a0 reply:(id /* block */)a1;

@end

@class NSHashTable, NSMutableDictionary, NSDictionary, LACCacheSync, NSError, NSObject, BKDevice;
@protocol OS_dispatch_queue, LACBiometryDelegate;

@interface LACBiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
    LACCacheSync *_biolockoutStateCache;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) NSError *fault;
@property (readonly, nonatomic) NSError *permanentError;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSDictionary *identities;
@property (readonly, nonatomic) NSDictionary *adminIdentities;
@property (readonly, nonatomic) BKDevice *device;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) char hasInternalSensor;
@property (readonly, nonatomic) char supportsAccessories;
@property (readonly, nonatomic) char hasPairedAccessory;
@property (readonly, nonatomic) char hasPairedAccessoryConnected;
@property (weak, nonatomic) id<LACBiometryDelegate> delegate;

+ (id)sharedInstance;
+ (id)touchIdInstance;
+ (id)faceIdInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)_setup;
- (id)catacombUUID:(id)a0;
- (id)dumpStatus;
- (char)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (char)_isTrustedAccessorySupported;
- (char)isEnrolled:(id)a0 error:(id *)a1;
- (void)_checkOperationShouldFinishDueToClamshellAfterLastAccessoryLost;
- (id)_errorDisconnected:(char)a0 notEnrolled:(char)a1;
- (unsigned int)_uidFromUserId:(id)a0;
- (id)_protectedConfigurationForUser:(id)a0;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_clearHashes;
- (id)_dumpEnvironmentForUser:(id)a0;
- (void)_handleAccessoriesChangedNotification;
- (void)_handleEnrollmentChangedNotification;
- (void)_handleLockoutStateChangedNotification;
- (id)_identitiesForUser:(id)a0 adminOnly:(char)a1;
- (char)_isClamshellPreventingOperationOnInternalSensor;
- (char)_isEnrolled:(id)a0 adminOnly:(char)a1 hardwareMustBeAvailable:(char)a2 error:(id *)a3;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (void)_processAccessory:(id)a0;
- (void)_refreshAccessories;
- (void)_refreshIdentitiesDueToAccessoryChange:(char)a0;
- (void)_setupDeviceWithDescriptor:(id)a0;
- (void)_setupWithFault:(id)a0;
- (void)_setupWithPermanentError:(id)a0;
- (char)_shouldCacheIdentities;
- (char)_shouldRetryAvailableDevices;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (id)biometryLostErrorForUser:(id)a0 request:(id)a1;
- (char)deviceHasBiometryWithError:(id *)a0;
- (id)initWithBiometryType:(long long)a0;
- (char)isAnyUserEnrolledWithAdminRole:(char)a0 error:(id *)a1;
- (char)isAnyUserEnrolledWithError:(id *)a0;
- (char)isBiometryOnForApplePay:(id)a0;
- (char)isBiometryOnForUnlock:(id)a0;
- (char)isEnrolledWithoutHardware:(id)a0 error:(id *)a1;
- (char)isIdentificationEnabled:(id)a0;
- (char)isLockedOutForUser:(id)a0 adminOnly:(char)a1 request:(id)a2 error:(id *)a3;
- (char)isNotLockedOutForAnyUserWithAdminRole:(char)a0 request:(id)a1 error:(id *)a2;
- (char)isPeriocularMatchingEnabledForUser:(id)a0;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (void)resetBiometry;
- (char)userPresent:(char *)a0 error:(id *)a1;

@end

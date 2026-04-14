@class NSMutableDictionary, NSDictionary, NSError, BKDevice;
@protocol BiometryDelegate;

@interface BiometryHelper : NSObject {
    NSMutableDictionary *_databaseHashesByUserId;
}

@property (readonly, nonatomic) NSError *fault;
@property (readonly, nonatomic) NSError *permanentError;
@property (readonly, nonatomic) long long deviceType;
@property (readonly, nonatomic) NSDictionary *identities;
@property (readonly, nonatomic) BKDevice *device;
@property (readonly, nonatomic) long long biometryType;
@property (readonly, nonatomic) BOOL hasInternalSensor;
@property (readonly, nonatomic) BOOL supportsAccessories;
@property (readonly, nonatomic) BOOL hasPairedAccessory;
@property (readonly, nonatomic) BOOL hasPairedAccessoryConnected;
@property (weak, nonatomic) id<BiometryDelegate> delegate;

+ (id)sharedInstance;
+ (id)touchIdInstance;
+ (id)pearlInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setup;
- (id)catacombUUID:(id)a0;
- (id)initWithBiometryType:(long long)a0;
- (BOOL)_shouldRetryAvailableDevices;
- (void)_setupWithFault:(id)a0;
- (void)_setupWithPermanentError:(id)a0;
- (void)_setupDeviceWithDescriptor:(id)a0;
- (BOOL)deviceHasBiometryWithError:(id *)a0;
- (BOOL)_isEnrolled:(id)a0 hardwareMustBeAvailable:(BOOL)a1 error:(id *)a2;
- (id)_errorDisconnected:(BOOL)a0 notEnrolled:(BOOL)a1;
- (BOOL)isEnrolled:(id)a0 error:(id *)a1;
- (BOOL)isAnyUserEnrolledWithError:(id *)a0;
- (BOOL)isEnrolledWithoutHardware:(id)a0 error:(id *)a1;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (id)biometryLostErrorForUser:(id)a0 request:(id)a1;
- (BOOL)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (void)_clearHashes;
- (BOOL)userPresent:(BOOL *)a0 error:(id *)a1;
- (unsigned int)_uidFromUserId:(id)a0;
- (id)_protectedConfigurationForUser:(id)a0;
- (BOOL)isBiometryOnForApplePay:(id)a0;
- (BOOL)isBiometryOnForUnlock:(id)a0;
- (BOOL)isIdentificationEnabled:(id)a0;
- (BOOL)isPeriocularMatchingEnabledForUser:(id)a0;
- (id)_identitiesForUser:(id)a0;
- (void)_refreshIdentitiesDueToAccessoryChange:(BOOL)a0;
- (void)_refreshAccessories;
- (void)_processAccessory:(id)a0;
- (BOOL)_isClamshellPreventingOperationOnInternalSensor;
- (void)_checkOperationShouldFinishDueToClamshellAfterLastAccessoryLost;
- (void)resetBiometry;

@end

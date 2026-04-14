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
+ (id)pearlInstance;
+ (id)touchIdInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_setup;
- (id)catacombUUID:(id)a0;
- (id)initWithBiometryType:(long long)a0;
- (void)_setupWithFault:(id)a0;
- (BOOL)_shouldRetryAvailableDevices;
- (void)_setupDeviceWithDescriptor:(id)a0;
- (void)_setupWithPermanentError:(id)a0;
- (void)_refreshAccessories;
- (BOOL)deviceHasBiometryWithError:(id *)a0;
- (id)_identitiesForUser:(id)a0;
- (id)_errorDisconnected:(BOOL)a0 notEnrolled:(BOOL)a1;
- (BOOL)_isEnrolled:(id)a0 error:(id *)a1;
- (BOOL)isBiometryOnForUnlock:(id)a0;
- (unsigned int)_uidFromUserId:(id)a0;
- (BOOL)isLockedOutForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (BOOL)isEnrolled:(id)a0 error:(id *)a1;
- (id)_biolockoutStateForUser:(id)a0 request:(id)a1 error:(id *)a2;
- (void)_refreshIdentitiesDueToAccessoryChange:(BOOL)a0;
- (id)_lockoutErrorForExtendedState:(long long)a0 userId:(id)a1;
- (id)_protectedConfigurationForUser:(id)a0;
- (void)_clearHashes;
- (void)_processAccessory:(id)a0;
- (void)_checkOperationShouldFinishDueToClamshellAfterLastAccessoryLost;
- (BOOL)_isClamshellPreventingOperationOnInternalSensor;
- (BOOL)isAnyUserEnrolledWithError:(id *)a0;
- (id)lockoutErrorForState:(long long)a0 userId:(id)a1;
- (id)biometryLostErrorForUser:(id)a0 request:(id)a1;
- (id)biometryDatabaseHashForUser:(id)a0 error:(id *)a1;
- (BOOL)userPresent:(BOOL *)a0 error:(id *)a1;
- (BOOL)isBiometryOnForApplePay:(id)a0;
- (BOOL)isIdentificationEnabled:(id)a0;
- (BOOL)isPeriocularMatchingEnabledForUser:(id)a0;
- (void)resetBiometry;

@end

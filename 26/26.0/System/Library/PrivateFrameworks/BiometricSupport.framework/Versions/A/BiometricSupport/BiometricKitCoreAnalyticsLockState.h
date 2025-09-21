@class NSNumber;

@interface BiometricKitCoreAnalyticsLockState : BiometricKitCoreAnalyticsEvent

@property (retain, nonatomic) NSNumber *unlockTotal;
@property (retain, nonatomic) NSNumber *biometryUnlockTotal;
@property (retain, nonatomic) NSNumber *remoteUnlockTotal;
@property (retain, nonatomic) NSNumber *remoteUnlockBiometryAvailable;
@property (retain, nonatomic) NSNumber *remoteUnlockBiometryUnavailable;
@property (retain, nonatomic) NSNumber *remoteUnlockBiometryDisabled;
@property (retain, nonatomic) NSNumber *passcodeUnlockTotal;
@property (retain, nonatomic) NSNumber *passcodeUnlockBiometryAvailable;
@property (retain, nonatomic) NSNumber *passcodeUnlockBiometryUnavailable;
@property (retain, nonatomic) NSNumber *passcodeUnlockBiometryDisabled;
@property (retain, nonatomic) NSNumber *passcodeValidatedTotal;
@property (retain, nonatomic) NSNumber *passcodeValidatedBiometryAvailable;
@property (retain, nonatomic) NSNumber *passcodeValidatedBiometryUnavailable;
@property (retain, nonatomic) NSNumber *passcodeAuthenticatedTotal;
@property (retain, nonatomic) NSNumber *passcodeAuthenticatedBiometryAvailable;
@property (retain, nonatomic) NSNumber *passcodeAuthenticatedBiometryUnavailable;

- (void)reset;
- (BOOL)postEvent;
- (id)init;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (BOOL)isBiometryUnlockEnabledForUser:(unsigned int)a0;
- (BOOL)passcodeNedded:(unsigned int)a0;
- (BOOL)isPasscodeNeededForUser:(unsigned int)a0;
- (unsigned char)lockStateUpdated:(unsigned int)a0 forUser:(unsigned int)a1;
- (void)serviceMatchWithServer:(id)a0;
- (BOOL)wasPasscodeNeededForUser:(unsigned int)a0;

@end

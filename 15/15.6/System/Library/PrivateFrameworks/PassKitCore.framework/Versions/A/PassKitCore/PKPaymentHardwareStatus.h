@class NSError;

@interface PKPaymentHardwareStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasExternalTouchIDAccessoryConnected;
@property (readonly, nonatomic) char hasExternalTouchIDAccessoryAuthorized;
@property (readonly, nonatomic) char hasExternalTouchIDAccessoryPaired;
@property (nonatomic) unsigned long long type;
@property (nonatomic) char hasSecureElement;
@property (nonatomic) char hasRemoteDevices;
@property (nonatomic) unsigned long long ownershipState;
@property (nonatomic) char hasClamshell;
@property (nonatomic, getter=isClamshellClosed) char clamshellClosed;
@property (nonatomic, getter=isScreenReaderRunning) char screenReaderRunning;
@property (nonatomic) char remotePaymentsRequiredForVoiceover;
@property (nonatomic) long long localCoprocessorType;
@property (nonatomic) char hasTouchBar;
@property (nonatomic) char automaticallyCheckForUpdates;
@property (nonatomic) char automaticallyInstallConfigDataAndSecurityUpdates;
@property (nonatomic) char hasInternalTouchIDSensor;
@property (nonatomic) unsigned long long externalTouchIDStatus;
@property (retain, nonatomic) NSError *policyError;
@property (nonatomic) char canMakeRemotePayments;
@property (nonatomic) char canDecryptBAAEncryptedData;
@property (readonly, nonatomic, getter=_isDemoModeActive) char _isDemoModeActive;
@property (nonatomic) char isSRD;
@property (readonly, nonatomic) char canEvaluatePolicy;
@property (readonly, nonatomic) char canMakePayments;
@property (readonly, nonatomic) char canMakeLocalPayments;
@property (readonly, nonatomic) char canMakeVirtualCardPayments;
@property (readonly, nonatomic) char canMakeAMPPayments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)_canMakeLocalPaymentsNeedingSecureIntent:(char)a0;
- (char)_meetsSecurityRequirements;
- (char)canAddCardWithError:(id *)a0;

@end

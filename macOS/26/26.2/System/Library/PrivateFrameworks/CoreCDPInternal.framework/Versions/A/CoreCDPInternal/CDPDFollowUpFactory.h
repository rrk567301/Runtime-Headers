@class LAEnvironment;

@interface CDPDFollowUpFactory : NSObject

@property (retain, nonatomic) LAEnvironment *currentUser;

+ (id)contextToIdentifierMap;

- (id)_confirmExistingSecretFollowUpAction;
- (void)_configureRepairFollowUpItem:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_adpStateHealingFollowUpAction;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForADPStateHealingWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_anyRecoveryKeysAreDistrusted;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (void).cxx_destruct;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (BOOL)_isManateeAvailable;
- (id)_deviceCapabilityProvider;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (BOOL)_isBiometricAuthEnrolledWithLAEnvironment:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_secureTermsFollowUpAction;
- (BOOL)_supportsFaceID;
- (BOOL)_isBiometricCapable;
- (unsigned long long)_approvedCustodianCountForAltDSID:(id)a0;
- (BOOL)_isWalrusEnabled;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (unsigned long long)secretType;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_createPasscodeFollowUpAction;
- (id)identifierForContext:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_followUpItemForSOSCompatibilityMode:(id)a0;

@end

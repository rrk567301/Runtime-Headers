@class LAEnvironment;

@interface CDPDFollowUpFactory : NSObject

@property (retain, nonatomic) LAEnvironment *currentUser;

+ (id)contextToIdentifierMap;

- (id)_followUpItemForSOSCompatibilityMode:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_followUpItemForRecoveryKeyMismatchHealing:(id)a0;
- (id)_followUpForADPStateHealingWithContext:(id)a0;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_adpStateHealingFollowUpAction;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_deviceCapabilityProvider;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_followUpItemForEDPOnlyRepairWithContext:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_createPasscodeFollowUpAction;
- (BOOL)_isWalrusEnabled;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)followUpItemWithContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (BOOL)_isManateeAvailable;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (BOOL)_isBiometricCapable;
- (BOOL)_isBiometricAuthEnrolledWithLAEnvironment:(id)a0;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (unsigned long long)_approvedCustodianCountForAltDSID:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_anyRecoveryKeysAreDistrusted;
- (BOOL)_supportsFaceID;
- (void).cxx_destruct;
- (unsigned long long)secretType;

@end

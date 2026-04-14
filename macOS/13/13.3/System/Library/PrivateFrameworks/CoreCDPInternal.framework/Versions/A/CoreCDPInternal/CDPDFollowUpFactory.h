@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (BOOL)_isWalrusEnabled;
- (BOOL)_supportsFaceID;
- (unsigned long long)secretType;
- (id)_localizedStringForKey:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (void)_configureRepairFollowUpItem:(id)a0;
- (void)_configureWalrusConfirmExistingSecretFollowUpItem:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_createPasscodeFollowUpAction;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_deviceCapabilityProvider;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpActionForRepair;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (BOOL)_isBiometricCapable;
- (BOOL)_isManateeAvailable;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_secureTermsFollowUpAction;
- (id)_userInfoForPrefPaneWithCommandKey:(id)a0;
- (id)followUpItemWithContext:(id)a0;
- (id)identifierForContext:(id)a0;

@end

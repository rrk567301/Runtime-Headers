@class STManagementState, OTClique, NSObject;
@protocol OS_dispatch_queue;

@interface FeatureAvailability : WBSFeatureAvailability {
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
    OTClique *_keychainClique;
}

@property (class, readonly, nonatomic) BOOL isTouchIDToAutoFillEnabledInUserDefaults;
@property (class, readonly, nonatomic) BOOL areSharedTabGroupsEnabled;

@property (getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud;
@property (getter=isSafariSyncEnabled) BOOL safariSyncEnabled;
@property (getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID;
@property (getter=isApplePayAvailable) BOOL applePayAvailable;
@property (getter=isCloudAccountHSA2) BOOL cloudAccountIsHSA2;
@property long long cachedScreenTimeUserState;

+ (id)_sharedInstance;
+ (BOOL)isSafariSyncEnabled;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)isKeychainSyncEnabled;
+ (void)startMonitoringForAvailabilityChanges;
+ (BOOL)isUserSignedIntoICloud;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)isNarrowTabsEnabled;
+ (BOOL)isTabGroupEnabled;
+ (BOOL)isUnifiedSidebarEnabled;
+ (BOOL)isInterstellarEnabled;
+ (BOOL)safariIsInRecoverySystem;
+ (BOOL)isScreenTimeUserRestricted;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChange;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_updateKeychainSyncingStatus;
- (void)_updateApplePayAvailability;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;

@end

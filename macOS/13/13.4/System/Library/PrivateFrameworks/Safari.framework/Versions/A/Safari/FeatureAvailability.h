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
+ (BOOL)isKeychainSyncEnabled;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isCloudTabsAvailable;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isInterstellarEnabled;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isNarrowTabsEnabled;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isScreenTimeUserRestricted;
+ (BOOL)isTabGroupEnabled;
+ (BOOL)isUnifiedSidebarEnabled;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isUserSignedIntoICloud;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)safariIsInRecoverySystem;
+ (void)startMonitoringForAvailabilityChanges;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isKeychainSyncEnabled;
- (void)_accountsDidChange;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
- (void)_updateApplePayAvailability;
- (void)_updateKeychainSyncingStatus;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;

@end

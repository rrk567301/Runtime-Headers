@class STManagementState, NSObject;
@protocol OS_dispatch_queue;

@interface FeatureAvailability : WBSFeatureAvailability {
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
}

@property (class, readonly, nonatomic) char isTouchIDToAutoFillEnabledInUserDefaults;
@property (class, readonly, nonatomic, getter=isScreenTimeUserRestricted) char screenTimeUserRestricted;
@property (class, readonly, nonatomic, getter=isScreenTimeManagedByParent) char screenTimeManagedByParent;
@property (class, readonly, nonatomic, getter=isContentFilteringEnabled) char contentFilteringEnabled;
@property (class, readonly, nonatomic) char isSafariProfilesUIEnabled;
@property (class, readonly, nonatomic, getter=isScribbleOutEnabled) char scribbleOutEnabled;
@property (class, readonly, nonatomic) char areSharedTabGroupsEnabled;
@property (class, readonly, nonatomic) char areProfilesSyncedAcrossDevices;
@property (class, readonly, nonatomic) char isSaveWebpageWithMetadataUIEnabled;

@property (getter=isUserSignedIntoICloud) char userSignedIntoICloud;
@property (getter=isSafariSyncEnabled) char safariSyncEnabled;
@property (getter=isUserUsingManagedAppleID) char userUsingManagedAppleID;
@property (getter=isApplePayAvailable) char applePayAvailable;
@property (getter=isCloudAccountHSA2) char cloudAccountIsHSA2;
@property long long cachedScreenTimeUserState;

+ (id)_sharedInstance;
+ (char)isSafariSyncEnabled;
+ (char)_shouldShowChineseFeatures;
+ (char)_shouldShowRussianFeatures;
+ (char)wantsAggressiveKeychainCredentialCaching;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
+ (char)isAddressBookAutoFillEnabled;
+ (char)isAirDropPasswordsAvailable;
+ (char)isApplePayAvailable;
+ (char)isCloudTabsAvailable;
+ (char)isCreditCardAutoFillEnabled;
+ (char)isInterstellarEnabled;
+ (char)isMiscellaneousFormsAutoFillEnabled;
+ (char)isNarrowTabsEnabled;
+ (char)isPasswordAutoFillEnabled;
+ (char)isPasswordAutoFillFromKeychainEnabled;
+ (char)isPerSitePopUpBlockingPreferenceAvailable;
+ (char)isTabGroupEnabled;
+ (char)isUnifiedSidebarEnabled;
+ (char)isUserAllowedToEditCreditCardInformation;
+ (char)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (char)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (char)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (char)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (char)isUserSignedIntoICloud;
+ (char)isUserUsingManagedAppleID;
+ (char)safariIsInRecoverySystem;
+ (void)startMonitoringForAvailabilityChanges;

- (id)init;
- (void).cxx_destruct;
- (void)_accountsDidChange;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
- (void)_updateApplePayAvailability;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;

@end

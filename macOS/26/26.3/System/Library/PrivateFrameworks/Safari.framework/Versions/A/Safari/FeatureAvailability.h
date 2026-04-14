@class STManagementState, NSObject;
@protocol OS_dispatch_queue;

@interface FeatureAvailability : WBSFeatureAvailability {
    NSObject<OS_dispatch_queue> *_internalQueue;
    STManagementState *_managementState;
    NSObject<OS_dispatch_queue> *_screenTimeUserStateQueue;
}

@property (class, readonly, nonatomic) BOOL isTouchIDToAutoFillEnabledInUserDefaults;
@property (class, readonly, nonatomic, getter=isScreenTimeUserRestricted) BOOL screenTimeUserRestricted;
@property (class, readonly, nonatomic, getter=isScreenTimeManagedByParent) BOOL screenTimeManagedByParent;
@property (class, readonly, nonatomic, getter=isContentFilteringEnabled) BOOL contentFilteringEnabled;
@property (class, readonly, nonatomic, getter=isHistoryClearingEnabled) BOOL historyClearingEnabled;
@property (class, readonly, nonatomic, getter=isPrivateBrowsingEnabled) BOOL privateBrowsingEnabled;
@property (class, readonly, nonatomic) BOOL usesUnifiedTabBarInSeparateLayout;
@property (class, readonly, nonatomic) BOOL areSharedTabGroupsEnabled;
@property (class, readonly, nonatomic) BOOL areProfilesSyncedAcrossDevices;
@property (class, readonly, nonatomic) BOOL isSaveWebpageWithMetadataUIEnabled;

@property (getter=isUserSignedIntoICloud) BOOL userSignedIntoICloud;
@property (getter=isSafariSyncEnabled) BOOL safariSyncEnabled;
@property (getter=isUserUsingManagedAppleID) BOOL userUsingManagedAppleID;
@property (getter=isApplePayAvailable) BOOL applePayAvailable;
@property (getter=isCloudAccountHSA2) BOOL cloudAccountIsHSA2;
@property long long cachedScreenTimeUserState;

+ (BOOL)isAirDropPasswordsAvailable;
+ (BOOL)_shouldShowRussianFeatures;
+ (BOOL)isSafariSyncEnabled;
+ (id)_sharedInstance;
+ (BOOL)_shouldShowChineseFeatures;
+ (BOOL)wantsAggressiveKeychainCredentialCaching;
+ (BOOL)isCloudTabsAvailable;
+ (void)determineIfScreenTimePasscodeIsSetWithCompletionHandler:(id /* block */)a0;
+ (void)determineIfScreenTimeUserIsRestrictedWithCompletionHandler:(id /* block */)a0;
+ (void)executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
+ (BOOL)isAddressBookAutoFillEnabled;
+ (BOOL)isApplePayAvailable;
+ (BOOL)isCreditCardAutoFillEnabled;
+ (BOOL)isMiscellaneousFormsAutoFillEnabled;
+ (BOOL)isNarrowTabsEnabled;
+ (BOOL)isPasswordAutoFillEnabled;
+ (BOOL)isPasswordAutoFillFromKeychainEnabled;
+ (BOOL)isPerSitePopUpBlockingPreferenceAvailable;
+ (BOOL)isUserAllowedToEditCreditCardInformation;
+ (BOOL)isUserAllowedToToggleAddressBookAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleCreditCardAutoFillEnabledState;
+ (BOOL)isUserAllowedToToggleMiscellaneousFormsAutoFillEnabledState;
+ (BOOL)isUserAllowedToTogglePasswordsAutoFillEnabledState;
+ (BOOL)isUserSignedIntoICloud;
+ (BOOL)isUserUsingManagedAppleID;
+ (BOOL)isiCloudSubscriber;
+ (void)startMonitoringForAvailabilityChanges;

- (id)init;
- (void)_accountsDidChange;
- (void).cxx_destruct;
- (void)_accountsDidChange:(id)a0;
- (void)_accountsDidChangeOnInternalQueue;
- (void)_executeBlockAfterScreenTimeUserStateDetermined:(id /* block */)a0;
- (void)_updateApplePayAvailability;
- (void)isScreenTimePasscodeSetWithCompletionHandler:(id /* block */)a0;
- (void)isScreenTimeUserRestrictedWithCompletionHandler:(id /* block */)a0;

@end

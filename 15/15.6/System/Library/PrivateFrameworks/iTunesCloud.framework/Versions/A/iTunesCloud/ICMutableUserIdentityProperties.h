@class NSString, NSDictionary, ICDelegateToken, NSNumber, NSDate;

@interface ICMutableUserIdentityProperties : ICUserIdentityProperties

@property (nonatomic, getter=isActiveLocker) char activeLocker;
@property (nonatomic, getter=isActive) char active;
@property (copy, nonatomic) NSString *alternateDSID;
@property (copy, nonatomic) NSString *carrierBundleDeviceIdentifier;
@property (nonatomic, getter=isDelegated) char delegated;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *lastName;
@property (nonatomic, getter=isManagedAppleID) char managedAppleID;
@property (nonatomic, getter=isSandboxed) char sandboxed;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (nonatomic, getter=isSubscriptionStatusEnabled) char subscriptionStatusEnabled;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSDate *ageVerificationExpirationDate;
@property (copy, nonatomic) NSNumber *mergeToCloudLibraryPreference;
@property (copy, nonatomic) NSDictionary *cloudLibraryStateReason;
@property (copy, nonatomic) NSNumber *privateListeningEnabled;
@property (copy, nonatomic) NSDictionary *privacyAcknowledgementVersions;
@property (nonatomic, getter=isU18MinorAccount) char u18MinorAccount;

- (void)setActive:(char)a0;
- (void)setUsername:(id)a0;
- (void)setAlternateDSID:(id)a0;
- (void)setSandboxed:(char)a0;
- (void)setDSID:(id)a0;
- (void)setFirstName:(id)a0;
- (void)setLastName:(id)a0;
- (void)setHomeUserIdentifiers:(id)a0;
- (void)setDelegated:(char)a0;
- (void)setDelegateToken:(id)a0;
- (void)setPrivateListeningEnabled:(id)a0;
- (void)setStorefrontIdentifier:(id)a0;
- (void)replaceValuesWithValuesFromProperties:(id)a0;
- (void)setActiveLocker:(char)a0;
- (void)setAgeVerificationExpirationDate:(id)a0;
- (void)setCarrierBundleDeviceIdentifier:(id)a0;
- (void)setCloudBackupEnabled:(char)a0;
- (void)setCloudLibraryStateReason:(id)a0;
- (void)setICloudPersonID:(id)a0;
- (void)setManagedAppleID:(char)a0;
- (void)setMergeToCloudLibraryPreference:(id)a0;
- (void)setPrivacyAcknowledgementVersions:(id)a0;
- (void)setPrivateListeningEnabledForHomeUsers:(id)a0;
- (void)setSubscriptionStatusEnabled:(char)a0;
- (void)setU18MinorAccount:(char)a0;

@end

@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy) NSSet *privacyIdentifiers;
@property (retain) ACAccount *account;

+ (id)_appleMusicAppPrivacyIdentifier;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (id)_appleArcadePrivacyIdentifier;
+ (id)_appleBundleHolderPrivacyIdentifier;
+ (id)_appleBundleOwnerPrivacyIdentifier;
+ (id)_appleIDPrivacyIdentifier;
+ (id)_appleTVAppPrivacyIdentifier;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (char)_coreAcknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (char)_existingAcknowledgements:(id)a0 containsNewAcknowledgements:(id)a1;
+ (char)_isBundleHolderPerDeviceRequirementAppliedToAccount:(id)a0;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (id)_storePrivacyIdentifiers;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (char)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (char)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (char)hasPreviouslyAcknowledgedAnyBundlePrivacyAcknowledgements;
+ (char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (char)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;
+ (char)hasRejectedPrivacyIdentifier:(id)a0;
+ (char)hasRejectedPrivacyIdentifier:(id)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)acknowledgePrivacy;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)rejectPrivacy;

@end

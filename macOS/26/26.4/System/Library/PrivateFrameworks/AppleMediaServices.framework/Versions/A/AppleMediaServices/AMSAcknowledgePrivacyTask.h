@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy) NSSet *privacyIdentifiers;
@property (retain) ACAccount *account;

+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1 account:(id)a2;
+ (id)_appleBundleHolderPrivacyIdentifier;
+ (id)_appleMusicAppPrivacyIdentifier;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1;
+ (id)_appleArcadePrivacyIdentifier;
+ (BOOL)_existingAcknowledgements:(id)a0 containsNewAcknowledgements:(id)a1;
+ (id)_appleIDPrivacyIdentifier;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedAnyBundlePrivacyAcknowledgements;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)_coreAcknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1 account:(id)a2;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (id)_appleBundleOwnerPrivacyIdentifier;
+ (id)_storePrivacyIdentifiers;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)_isBundleHolderPerDeviceRequirementAppliedToAccount:(id)a0;
+ (id)_appleTVAppPrivacyIdentifier;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;

- (void).cxx_destruct;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)acknowledgePrivacy;
- (id)acknowledgePrivacy:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)rejectPrivacy;
- (id)rejectPrivacy:(id)a0;

@end

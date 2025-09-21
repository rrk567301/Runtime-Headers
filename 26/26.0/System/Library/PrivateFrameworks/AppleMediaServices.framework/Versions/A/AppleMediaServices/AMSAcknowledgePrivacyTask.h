@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy) NSSet *privacyIdentifiers;
@property (retain) ACAccount *account;

+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1 account:(id)a2;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedAnyBundlePrivacyAcknowledgements;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (id)_appleIDPrivacyIdentifier;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_appleTVAppPrivacyIdentifier;
+ (id)_appleBundleOwnerPrivacyIdentifier;
+ (id)_appleBundleHolderPrivacyIdentifier;
+ (BOOL)_existingAcknowledgements:(id)a0 containsNewAcknowledgements:(id)a1;
+ (BOOL)_isBundleHolderPerDeviceRequirementAppliedToAccount:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)_coreAcknowledgementNeededForPrivacyIdentifier:(id)a0 privacyVersion:(id)a1 account:(id)a2;
+ (id)_appleMusicAppPrivacyIdentifier;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (id)_appleArcadePrivacyIdentifier;
+ (id)_storePrivacyIdentifiers;
+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;

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

@class NSSet, ACAccount;

@interface AMSAcknowledgePrivacyTask : AMSTask

@property (copy) NSSet *privacyIdentifiers;
@property (retain) ACAccount *account;

+ (unsigned long long)_contentVersionForPrivacyIdentifier:(id)a0;
+ (id)_multiplexPrivacyIdentifier:(id)a0 contentVersion:(unsigned long long)a1;
+ (BOOL)hasRejectedPrivacyIdentifier:(id)a0;
+ (id)_accountStoreForPrivacyIdentifier:(id)a0;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (id)_valueForPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 account:(id)a1 minimumVersion:(id)a2;
+ (id)_storePrivacyIdentifiers;
+ (BOOL)acknowledgementNeededForPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0;
+ (BOOL)hasPreviouslyAcknowledgedPrivacyIdentifier:(id)a0 minimumVersion:(id)a1;
+ (id)_appleArcadePrivacyIdenitifier;
+ (id)_appleIDPrivacyIdenitifier;
+ (id)_appleMusicAppPrivacyIdenitifier;
+ (id)_appleTVAppPrivacyIdenitifier;

- (void).cxx_destruct;
- (id)initWithPrivacyIdentifier:(id)a0 account:(id)a1;
- (id)initWithPrivacyIdentifiers:(id)a0 account:(id)a1;
- (id)_updatePrivacyWithAcknowledgementVersions:(id)a0;
- (id)initWithPrivacyIdentifier:(id)a0;
- (id)initWithPrivacyIdentifiers:(id)a0;
- (id)acknowledgePrivacy;
- (id)rejectPrivacy;

@end

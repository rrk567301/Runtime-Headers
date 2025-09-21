@class STCoreUser, NSString, NSDate;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (retain, nonatomic) STCoreUser *user;
@property (copy, nonatomic) NSString *passcode;
@property (nonatomic) char allLimitsEnabled;
@property (nonatomic) long long defaultUserPolicies;
@property (nonatomic) long long communicationPolicy;
@property (nonatomic) long long communicationWhileLimitedPolicy;
@property (nonatomic) long long contactManagementState;
@property (nonatomic) long long contentPrivacySiriImageGenerationRestriction;
@property (nonatomic) char needsToSetPasscode;
@property (nonatomic) char isCommunicationSafetySendingRestricted;
@property (nonatomic) char isCommunicationSafetyReceivingRestricted;
@property (nonatomic) char isCommunicationSafetyNotificationEnabled;
@property (nonatomic) char isCommunicationSafetyAnalyticsEnabled;
@property (copy, nonatomic) NSDate *modificationDate;
@property (nonatomic) char isEyeReliefEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fetchOrCreateWithDictionaryRepresentation:(id)a0 inContext:(id)a1 error:(id *)a2;
+ (id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)a0;
+ (id)keyPathsForValuesAffectingContentPrivacySiriImageGenerationRestriction;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetyReceivingRestricted;
+ (id)keyPathsForValuesAffectingIsCommunicationSafetySendingRestricted;
+ (id)keyPathsForValuesAffectingIsEyeReliefEnabled;

- (id)redactedDescription;
- (id)dictionaryRepresentation;
- (void)_changeAppLimitsFromAskToWarn:(id)a0;
- (long long)contentPrivacySiriImageGenerationRestriction;
- (id)defaultSettingsForFamilyMemberOfType:(id)a0;
- (void)setContentPrivacySiriImageGenerationRestriction:(long long)a0;
- (char)updateWithDictionaryRepresentation:(id)a0;

@end

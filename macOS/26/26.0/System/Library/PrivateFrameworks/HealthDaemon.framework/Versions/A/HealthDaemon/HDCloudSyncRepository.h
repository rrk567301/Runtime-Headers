@class _HKBehavior, NSString, NSArray, NSSet, CKContainer, NSObject, HDCloudSyncAvailability, HKProfileIdentifier;
@protocol HDCloudSyncSharingAuthorizationManager, HDCloudSyncRepositoryProfile, HDCloudSyncAttachmentManager, HDCloudSyncShimProviderProtocol, HDCloudSyncSyncIdentityManager, HDCloudSyncSummarySharingEntryManager, HDCloudSyncMedicalIDDataManager, HDCloudSyncProfileManager, HDSyncEngine, HDCloudSyncSharedSummaryManager;

@interface HDCloudSyncRepository : NSObject

@property (nonatomic) unsigned long long repositorySettings;
@property (readonly, nonatomic) int deviceMode;
@property (readonly, nonatomic) BOOL shouldPushToUnifiedZone;
@property (readonly, weak, nonatomic) NSObject<HDCloudSyncRepositoryProfile> *profile;
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) long long profileType;
@property (readonly, nonatomic) CKContainer *primaryCKContainer;
@property (readonly, nonatomic) NSArray *secondaryCKContainers;
@property (readonly, nonatomic) NSSet *allCKContainers;
@property (readonly, nonatomic) HDCloudSyncAvailability *syncAvailability;
@property (readonly, nonatomic) _HKBehavior *behavior;
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) NSString *userRecordName;
@property (readonly, nonatomic) id<HDCloudSyncShimProviderProtocol> cloudSyncShimProvider;
@property (readonly, nonatomic) NSObject<HDCloudSyncMedicalIDDataManager> *medicalIDDataManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncAttachmentManager> *attachmentManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncSummarySharingEntryManager> *sharingEntryManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncSharedSummaryManager> *sharedSummaryManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncSharingAuthorizationManager> *sharingAuthorizationManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncSyncIdentityManager> *syncIdentityManager;
@property (readonly, nonatomic) NSObject<HDCloudSyncProfileManager> *profileManager;
@property (readonly, nonatomic) id<HDSyncEngine> syncEngine;

- (id)initWithProfile:(id)a0 syncCircleIdentifier:(id)a1 primaryCKContainer:(id)a2 secondaryCKContainers:(id)a3 userRecordName:(id)a4;
- (void)unitTest_setShouldPushToUnifiedZone:(BOOL)a0;
- (id)init;
- (id)cachedOwnerIdentifierForContainer:(id)a0;
- (id)description;
- (void)cacheAllOwnerIdentifiersWithCompletion:(id /* block */)a0;
- (void)enumerateAllContainersWithBlock:(id /* block */)a0;
- (void)enumerateSecondaryContainersWithBlock:(id /* block */)a0;
- (id)containerForContainerIdentifier:(id)a0;
- (void).cxx_destruct;

@end

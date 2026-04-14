@class NSArray, HDProfile, NSSet, HDCloudSyncBehavior, NSString, CKContainer;

@interface HDCloudSyncRepository : NSObject

@property (nonatomic) unsigned long long repositorySettings;
@property (readonly, nonatomic) int deviceMode;
@property (readonly, nonatomic) BOOL shouldPushToUnifiedZone;
@property (readonly, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) CKContainer *primaryCKContainer;
@property (readonly, nonatomic) NSArray *secondaryCKContainers;
@property (readonly, nonatomic) NSSet *allCKContainers;
@property (readonly, nonatomic) HDCloudSyncBehavior *syncBehavior;
@property (readonly, copy, nonatomic) NSString *syncCircleIdentifier;
@property (readonly, copy, nonatomic) NSString *userRecordName;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)containerForContainerIdentifier:(id)a0;
- (void)cacheAllOwnerIdentifiersWithCompletion:(id /* block */)a0;
- (id)cachedOwnerIdentifierForContainer:(id)a0;
- (void)fetchOwnerIdentifierForContainer:(id)a0 completion:(id /* block */)a1;
- (id)initWithProfile:(id)a0 syncCircleIdentifier:(id)a1 primaryCKContainer:(id)a2 secondaryCKContainers:(id)a3 userRecordName:(id)a4;
- (void)unitTest_setShouldPushToUnifiedZone:(BOOL)a0;

@end

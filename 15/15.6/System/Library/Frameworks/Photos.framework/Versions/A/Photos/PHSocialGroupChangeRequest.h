@class NSString, NSSet, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHSocialGroupChangeRequest : PHChangeRequest <PHUpdateChangeRequest> {
    char _userAction;
    NSString *_customTitle;
    char _didSetCustomTitle;
    char _didRejectSocialGroup;
    char _didUnrejectSocialGroup;
    NSSet *_initialMemberPersonIDs;
    NSManagedObjectID *_keyAssetID;
    char _didSetManualOrder;
    long long _manualOrder;
    char _didSetAutomaticOrder;
    long long _automaticOrder;
}

@property (readonly, getter=isMutated) char mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) char clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;

+ (id)_creationRequestForSocialGroupCopyWithUUID:(id)a0;
+ (id)_findNonUserVerifiedGroupUUIDWithMembers:(id)a0 context:(id)a1 changesError:(id *)a2;
+ (id)changeRequestForSocialGroup:(id)a0 userAction:(char)a1;
+ (id)creationRequestForSocialGroupWithMembers:(id)a0 userAction:(char)a1;
+ (void)deleteSocialGroups:(id)a0;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0;
- (void)setOrder:(long long)a0;
- (void)setCustomTitle:(id)a0;
- (char)_applyAutomaticOrderToContainer:(id)a0 error:(id *)a1;
- (char)_applyInitialMembersToContainer:(id)a0 error:(id *)a1;
- (char)_applyKeyAssetToContainer:(id)a0 managedObject:(id)a1 error:(id *)a2;
- (char)_applyManualOrderToContainer:(id)a0 error:(id *)a1;
- (char)_applyVerifiedTypeToContainer:(id)a0 error:(id *)a1;
- (id)_personIDsFromXPCDict:(id)a0 key:(const char *)a1 request:(id)a2;
- (void)_setMembers:(id)a0;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)initialMemberPersonIDs;
- (char)isUserAction;
- (id)placeholderForCreatedSocialGroup;
- (void)rejectSocialGroup;
- (void)resetCustomTitle;
- (void)setKeyAsset:(id)a0;
- (void)unrejectSocialGroup;

@end

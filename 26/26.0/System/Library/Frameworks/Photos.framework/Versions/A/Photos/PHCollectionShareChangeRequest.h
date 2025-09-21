@class PHCollectionShare, NSString, NSArray, NSDate, NSManagedObjectID, PHShareAssetChangeRequestHelper, NSMutableArray, PHObjectPlaceholder, PHShareParticipantRelationshipChangeRequestHelper;
@protocol PLChangesForServiceHandling;

@interface PHCollectionShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHShareAssetChangeRequestHelper *assetsHelper;
@property (readonly, nonatomic) PHShareParticipantRelationshipChangeRequestHelper *participantsHelper;
@property (weak, nonatomic) PHCollectionShare *originalCollectionShare;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL runningAsUnitTest;
@property (nonatomic) BOOL changedAssets;
@property (retain, nonatomic) NSArray *participantsUnsharedFromCollectionShare;
@property (retain, nonatomic) NSMutableArray *cloudStreamPublishJobs;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) short publicPermission;
@property (nonatomic) short notificationState;
@property (nonatomic) short publicURLState;
@property (nonatomic) unsigned int customSortKey;
@property (nonatomic) BOOL customSortAscending;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedCollectionShare;
@property (readonly) BOOL isNewRequest;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) id<PLChangesForServiceHandling> changesForServiceHandler;
@property (readonly, nonatomic) NSString *changeTypeForSummary;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (nonatomic) BOOL shouldPerformConcurrentWork;

+ (void)_expungeCollectionShares:(id)a0 ignorePhotosctlExpungeOverride:(BOOL)a1;
+ (id)changeRequestForCollectionShare:(id)a0;
+ (id)creationRequestForOwnedCollectionShareWithTitle:(id)a0 subtype:(long long)a1;
+ (void)expungeCollectionShares:(id)a0;
+ (void)trashCollectionShares:(id)a0;
+ (void)unsubscribeCollectionShares:(id)a0;
+ (void)untrashCollectionShares:(id)a0;

- (id)trashedDate;
- (void)setTrashedDate:(id)a0;
- (void)setStatus:(unsigned short)a0;
- (unsigned short)status;
- (void).cxx_destruct;
- (id)addParticipantWithEmailAddress:(id)a0;
- (void)addAssetsToCollectionShareByCopyingSourceAssets:(id)a0 creationOptionsMappedToSourceAssets:(id)a1 withBatchCommentText:(id)a2;
- (void)addNewAssetsToCollectionShareWithAssetSource:(id)a0 withBatchCommentText:(id)a1 outNewAssetIdentifiers:(id *)a2;
- (id)addParticipantWithPhoneNumber:(id)a0;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (short)collectionShareKind;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (short)creationType;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)markAsViewed;
- (void)setCollectionShareKind:(short)a0;
- (void)setCreationType:(short)a0;
- (void)stopSharingWithParticipants:(id)a0;
- (BOOL)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end

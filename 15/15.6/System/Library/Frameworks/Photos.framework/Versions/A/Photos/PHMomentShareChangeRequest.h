@class NSData, NSString, NSDate, NSXPCConnection, NSManagedObjectID, NSSet, NSDictionary, PHObjectPlaceholder, PHMomentShare, PHShareRelationshipChangeRequestHelper;
@protocol PLChangesForServiceHandling;

@interface PHMomentShareChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHMomentShare *_originalMomentShare;
    NSXPCConnection *_clientConnection;
    char _changedAssets;
    NSString *_keySourceAssetIdentifier;
    NSSet *_sourceAssetIdentifiersForBatchedCreation;
    NSSet *_sourceAssetIdentifiersForCurationSet;
    NSDictionary *_sourceAssetCMMAssetMapForCreationRequest;
    NSDictionary *_sourceAssetIdentifiersToAdjustmentBakeInOptionsDictionaryForBatchedCreation;
    NSDictionary *_sourceAssetIdentifiersToMetadataCopyOptionsDictionaryForBatchedCreation;
}

@property (readonly, nonatomic) PHShareRelationshipChangeRequestHelper *participantsHelper;
@property (retain, nonatomic) NSString *originatingScopeIdentifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSData *previewData;
@property (nonatomic) short compatibilityState;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedMomentShare;
@property (nonatomic) char shouldIgnoreBudgets;
@property (nonatomic) char shouldNotifyOnUploadCompletion;
@property (readonly) char isNewRequest;
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
@property (nonatomic) char shouldPerformConcurrentWork;

+ (id)changeRequestForMomentShare:(id)a0;
+ (id)creationRequestForMomentShareWithTitle:(id)a0 publicPermission:(short)a1 creationDate:(id)a2 createMomentShareAssetsFromAssets:(id)a3 creationOptionsPerAsset:(id)a4 preview:(id)a5 originatingMomentShare:(id)a6;
+ (void)expungeMomentShares:(id)a0;
+ (void)trashMomentShares:(id)a0;
+ (id)validateMomentShareCreationDate:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (short)mode;
- (void)addParticipants:(id)a0;
- (void)setPublicPermission:(short)a0;
- (void)setThumbnailImageData:(id)a0;
- (id)thumbnailImageData;
- (char)_addSourceAssetsToMomentShare:(id)a0 error:(id *)a1;
- (void)_setOriginalMomentShare:(id)a0;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)createMomentShareAssetsFromAssets:(id)a0 withCreationOptionsPerAsset:(id)a1 withPreview:(id)a2;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (char)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (char)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end

@class NSString, PHRelationshipChangeRequestHelper, NSData, PHProject, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHProjectChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHProject *_originalProject;
    NSData *_previewImageData;
    char _didSetPreviewImage;
}

@property (retain, nonatomic) NSString *projectDocumentType;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *assetsHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyAssetHelper;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSData *projectExtensionData;
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

+ (void)deleteProjects:(id)a0;
+ (void)_deleteProjects:(id)a0 withOperation:(long long)a1;
+ (id)creationRequestForProjectCopyFromProject:(id)a0;
+ (id)creationRequestForProjectWithDocumentType:(id)a0 projectExtensionIdentifier:(id)a1;
+ (id)creationRequestForProjectWithDocumentType:(id)a0 projectExtensionIdentifier:(id)a1 assets:(id)a2 title:(id)a3;
+ (void)expungeProjects:(id)a0;
+ (void)undeleteProjects:(id)a0;

- (void).cxx_destruct;
- (void)setAssets:(id)a0;
- (void)setProjectData:(id)a0;
- (void)_prepareAssetIDsIfNeeded;
- (void)_prepareKeyAssetIDIfNeeded;
- (void)_setOriginalProject:(id)a0;
- (void)addAssets:(id)a0;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithProject:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)insertAssets:(id)a0 atIndexes:(id)a1;
- (void)moveAssetsAtIndexes:(id)a0 toIndex:(unsigned long long)a1;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (id)placeholderForCreatedProject;
- (char)prepareForServicePreflightCheck:(id *)a0;
- (id)projectData;
- (id)projectExtensionIdentifier;
- (id)projectRenderUuid;
- (void)removeAssets:(id)a0;
- (void)removeAssetsAtIndexes:(id)a0;
- (void)replaceAssetsAtIndexes:(id)a0 withAssets:(id)a1;
- (void)setKeyAsset:(id)a0;
- (void)setProjectExtensionIdentifier:(id)a0;
- (void)setProjectPreviewImage:(id)a0;
- (void)setProjectRenderUuid:(id)a0;
- (char)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;

@end

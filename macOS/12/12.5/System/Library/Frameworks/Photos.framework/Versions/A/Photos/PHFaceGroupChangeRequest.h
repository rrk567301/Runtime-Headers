@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, PHFaceGroup, NSManagedObjectID;

@interface PHFaceGroupChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    PHFaceGroup *_originalFaceGroup;
}

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *facesHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *keyFaceHelper;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedFaceGroup;
@property (nonatomic) long long unnamedFaceCount;
@property (nonatomic) long long personBuilderState;
@property (readonly) BOOL isNewRequest;
@property (nonatomic) BOOL shouldPerformConcurrentWork;
@property (readonly, getter=isMutated) BOOL mutated;
@property (readonly, nonatomic) NSString *managedEntityName;
@property (readonly, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic, getter=isClientEntitled) BOOL clientEntitled;
@property (readonly, nonatomic) NSString *clientName;
@property (readonly, nonatomic) long long accessScopeOptionsRequirement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)creationRequestForFaceGroup;
+ (id)changeRequestForFaceGroup:(id)a0;
+ (void)deleteFaceGroups:(id)a0;

- (void).cxx_destruct;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)initForNewObject;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)_setOriginalFaceGroup:(id)a0;
- (void)_prefetchFacesAndPersonRelationship:(id)a0 inContext:(id)a1;
- (void)setKeyFace:(id)a0;
- (id)_existentFaceObjectIDs;
- (void)_prepareFacesHelperIfNeeded;
- (void)_prepareKeyFaceHelperIfNeeded;
- (id)_mutableObjectIDsAndUUIDs;
- (void)addFaces:(id)a0;
- (id)_mutableKeyFaceObjectIDsAndUUIDs;
- (void)removeFaces:(id)a0;

@end

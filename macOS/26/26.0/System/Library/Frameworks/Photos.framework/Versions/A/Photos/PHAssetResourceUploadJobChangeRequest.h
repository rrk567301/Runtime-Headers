@class PHObjectPlaceholder, PHRelationshipChangeRequestHelper, NSString, NSData, NSDate, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHAssetResourceUploadJobChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *configurationHelper;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *internalResourceObjectIDHelper;
@property (copy, nonatomic) NSData *requestData;
@property (nonatomic) int failedAttemptCount;
@property (copy, nonatomic) NSDate *lastRetryDate;
@property (nonatomic) unsigned short state;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetResourceUploadJob;
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

+ (id)changeRequestForUploadJob:(id)a0;
+ (id)creationRequestForAssetResourceUploadJobWithURLRequest:(id)a0 configuration:(id)a1 assetResource:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)_commonInitalizer;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObjectWithRequestData:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1 requestData:(id)a2;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)setInternalResourceObjectID:(id)a0;
- (void)setUploadJobConfiguration:(id)a0;

@end

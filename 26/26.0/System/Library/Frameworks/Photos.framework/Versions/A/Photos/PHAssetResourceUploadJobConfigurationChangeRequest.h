@class NSString, PHObjectPlaceholder, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHAssetResourceUploadJobConfigurationChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned short state;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedAssetResourceUploadJobConfiguration;
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

+ (id)changeRequestForAssetResourceUploadJobConfiguration:(id)a0;
+ (id)creationRequestForAssetResourceUploadJobConfigurationWithBundleIdentifier:(id)a0;
+ (id)creationRequestForAssetResourceUploadJobConfigurationWithBundleIdentifier:(id)a0 state:(unsigned short)a1;
+ (void)deleteAssetResourceUploadJobConfigurations:(id)a0;

- (void).cxx_destruct;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

@end

@class NSString, PHChangeRequestHelper, PHCreationRequestOptions, PHPhotoLibrary, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHChangeRequest : NSObject <PHInsertChangeRequest>

@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) PHChangeRequestHelper *helper;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (copy) PHCreationRequestOptions *creationOptions;
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

+ (id)sanitizedFailureWithError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)didMutate;
- (void)didSendChangeToServiceHandlerWithResult:(char)a0;
- (void)encodeToXPCDict:(id)a0;
- (void)finalizeRequestWithBatchSuccess:(char)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)performConcurrentWork;
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)a0;
- (char)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (char)prepareForServicePreflightCheck:(id *)a0;
- (char)validateInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (char)validateMutationsToManagedObject:(id)a0 error:(id *)a1;

@end

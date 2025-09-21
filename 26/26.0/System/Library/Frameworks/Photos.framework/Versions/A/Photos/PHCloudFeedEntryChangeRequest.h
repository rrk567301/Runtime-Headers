@class PHObjectPlaceholder, NSString, NSArray, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHCloudFeedEntryChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {
    NSArray *_entryAssets;
    NSArray *_entryComments;
    NSArray *_entryLikes;
}

@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedEntry;
@property (nonatomic) BOOL entryIsMine;
@property (nonatomic) long long entryType;
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

+ (id)changeRequestForEntry:(id)a0;
+ (id)creationRequestForEntry;

- (void).cxx_destruct;
- (void)setEntryAssets:(id)a0;
- (id)_managedObjectsFromOids:(id)a0 inLibrary:(id)a1;
- (id)_xpcArrayFromOids:(id)a0;
- (BOOL)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (void)setEntryComments:(id)a0;
- (void)setEntryLikes:(id)a0;

@end

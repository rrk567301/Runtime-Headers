@class NSString, PHObjectPlaceholder, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHKeywordChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedKeyword;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *shortcut;
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

+ (void)deleteKeywords:(id)a0;
+ (id)changeRequestForKeyword:(id)a0;
+ (id)creationRequestForKeyword;

- (char)_validateMutationOfTitleToKeyword:(id)a0 error:(id *)a1;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

@end

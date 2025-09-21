@class NSString, NSMutableArray, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHSearchEntityCreationRequest : PHSearchEntityChangeRequest <PHInsertChangeRequest> {
    NSMutableArray *_assetSearchEntities;
}

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

+ (id)_placeholderForCreatedObjectWithClass:(Class)a0 uuid:(id)a1;
+ (id)creationRequestForNewSearchRankings;

- (void).cxx_destruct;
- (id)addSearchRankingWithLabel:(id)a0 identifier:(id)a1 type:(unsigned long long)a2 rankingScore:(double)a3 synonyms:(id)a4;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (id)placeholderForCreatedSearchEntity;

@end

@class NSArray, NSString, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHSearchEntityChangeRequest : PHChangeRequest <PHUpdateChangeRequest> {
    char _didSetRankingScore;
    char _didSetSynonyms;
}

@property (nonatomic) double rankingScore;
@property (retain, nonatomic) NSArray *synonyms;
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

+ (id)changeRequestForSearchRanking:(id)a0;

- (void).cxx_destruct;
- (char)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (void)encodeToXPCDict:(id)a0;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

@end

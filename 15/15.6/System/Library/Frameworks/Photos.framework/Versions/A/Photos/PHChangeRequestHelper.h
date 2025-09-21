@class PHPerformChangesRequest, NSString, NSMutableDictionary, NSMutableSet, PHClientLinkedAgainst, PHCreationRequestOptions, NSManagedObjectID;
@protocol PHChangeRequest, PLClientAuthorization;

@interface PHChangeRequestHelper : NSObject <NSSecureCoding> {
    char _isMutated;
    char _isNewRequest;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) PHClientLinkedAgainst *clientLinkedAgainst;
@property (weak, nonatomic) id<PHChangeRequest> changeRequest;
@property (nonatomic) PHPerformChangesRequest *request;
@property (readonly, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSManagedObjectID *objectID;
@property (readonly, nonatomic) NSMutableDictionary *mutations;
@property (readonly, nonatomic) NSMutableSet *nilMutations;
@property (nonatomic, getter=isNewRequest) char newRequest;
@property (nonatomic, getter=isMutated) char mutated;
@property (readonly, nonatomic) NSString *clientDisplayName;
@property (readonly, nonatomic) NSString *clientBundleIdentifier;
@property (readonly, nonatomic) NSString *fetchFilterIdentifier;
@property (readonly, nonatomic) id<PLClientAuthorization> clientAuthorization;
@property (readonly, nonatomic, getter=isClientEntitled) char clientEntitled;
@property (readonly, nonatomic, getter=isClientInLimitedLibraryMode) char clientInLimitedLibraryMode;
@property (copy, nonatomic) PHCreationRequestOptions *creationOptions;

+ (id)changeRequestForObject:(id)a0;
+ (id)changeRequestWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)allowMutationToManagedObject:(id)a0 propertyKey:(id)a1 error:(id *)a2;
- (char)applyMutationsToManagedObject:(id)a0 error:(id *)a1;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)didMutate;
- (void)encodeToXPCDict:(id)a0;
- (char)getCloudGUIDIfReserved:(id *)a0 entityName:(id)a1 photoLibrary:(id)a2 error:(id *)a3;
- (id)initForNewObjectWithChangeRequest:(id)a0;
- (id)initForNewObjectWithUUID:(id)a0 changeRequest:(id)a1;
- (id)initWithUUID:(id)a0 objectID:(id)a1 changeRequest:(id)a2;
- (id)initWithUUID:(id)a0 objectID:(id)a1 isNew:(char)a2 changeRequest:(id)a3;
- (id)initWithXPCDict:(id)a0 changeRequest:(id)a1 request:(id)a2 clientAuthorization:(id)a3;
- (id)placeholderForCreatedObjectWithClass:(Class)a0 changeRequest:(id)a1;
- (char)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (char)prepareForServicePreflightCheck:(id *)a0;
- (id)validateMutationsToManagedObject:(id)a0;
- (char)validateMutationsToManagedObject:(id)a0 error:(id *)a1;

@end

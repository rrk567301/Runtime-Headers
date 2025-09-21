@class PHObjectPlaceholder, NSString, PHRelationshipChangeRequestHelper, NSManagedObjectID;
@protocol PLChangesForServiceHandling;

@interface PHShareParticipantChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest>

@property (retain, nonatomic) NSString *emailAddress;
@property (retain, nonatomic) NSString *phoneNumber;
@property (readonly, nonatomic) PHRelationshipChangeRequestHelper *personHelper;
@property (nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) PHObjectPlaceholder *placeholderForCreatedShareParticipant;
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

+ (id)changeRequestForShareParticipant:(id)a0;
+ (id)creationRequestForShareParticipantWithEmailAddress:(id)a0 permission:(short)a1;
+ (id)creationRequestForShareParticipantWithPhoneNumber:(id)a0 permission:(short)a1;
+ (void)deleteShareParticipants:(id)a0;

- (void)setRole:(unsigned short)a0;
- (unsigned short)role;
- (short)permission;
- (void)setPerson:(id)a0;
- (id)participantID;
- (void)setPermission:(short)a0;
- (short)exitState;
- (void).cxx_destruct;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)a0;
- (void)setParticipantID:(id)a0;
- (id)_mutablePersonObjectIDsAndUUIDs;
- (short)participantKind;
- (void)_preparePersonIDIfNeeded;
- (BOOL)applyMutationsToManagedObject:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)a0 error:(id *)a1;
- (void)encodeToXPCDict:(id)a0;
- (id)initForNewObject;
- (id)initWithUUID:(id)a0 objectID:(id)a1;
- (id)initWithXPCDict:(id)a0 request:(id)a1 clientAuthorization:(id)a2;
- (BOOL)prepareForPhotoLibraryCheck:(id)a0 error:(id *)a1;
- (void)setExitState:(short)a0;
- (void)setParticipantKind:(short)a0;

@end

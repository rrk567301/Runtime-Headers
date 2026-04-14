@class PLPerson, NSString, NSSet, NSPersonNameComponents, NSDate, PLShare;

@interface PLShareParticipant : PLManagedObject

@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (copy, nonatomic) NSString *phoneNumber;
@property (copy, nonatomic) NSString *userIdentifier;
@property (nonatomic) long long role;
@property (nonatomic) long long acceptanceStatus;
@property (nonatomic) long long permission;
@property (nonatomic) short exitState;
@property (nonatomic) BOOL isCurrentUser;
@property (copy, nonatomic) PLPerson *person;
@property (copy, nonatomic) NSString *participantID;
@property (copy, nonatomic) NSString *hashedPersonID;
@property (copy, nonatomic) NSDate *subscriptionDate;
@property (nonatomic) short allowlistedState;
@property (nonatomic) short participantKind;
@property (readonly, nonatomic) NSSet *collectionShareComments;
@property (retain, nonatomic) PLShare *share;
@property (retain, nonatomic) NSSet *assets;
@property (retain, nonatomic) NSSet *assetBeingTrashedByParticipant;

+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)a0;
+ (id)participantsWithUUIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)_shareParticipantsWithPredicate:(id)a0 fetchLimit:(unsigned long long)a1 inManagedObjectContext:(id)a2;
+ (id)insertRemovedSharedStreamParticipantWithCloudOwnerHashedPersonID:(id)a0 collectionShare:(id)a1 personInfoManager:(id)a2 moc:(id)a3;
+ (BOOL)isCurrentUserInScopeChange:(id)a0;
+ (id)participantWithCPLShareParticipant:(id)a0 inShare:(id)a1;
+ (id)participantWithHashedPersonID:(id)a0 inCollectionShare:(id)a1;
+ (id)participantWithHashedPersonID:(id)a0 inScope:(id)a1 inManagedObjectContext:(id)a2;
+ (id)participantWithPLShareParticipant:(id)a0;
+ (id)participantsWithParticipantIDs:(id)a0 inPhotoLibrary:(id)a1;
+ (id)participantsWithScope:(id)a0 inPhotoLibrary:(id)a1;
+ (id)participantsWithUserIdentifiers:(id)a0 inScope:(id)a1 inPhotoLibrary:(id)a2;

- (void)willSave;
- (id)fullName;
- (id)detailedDescription;
- (BOOL)validateForUpdate:(id *)a0;
- (id)shortName;
- (BOOL)validateForInsert:(id *)a0;
- (void)prepareForDeletion;
- (BOOL)_relationshipInInvalidState;
- (BOOL)_validateRelationshipConstraintForInsert:(BOOL)a0 error:(id *)a1;
- (void)reconcileAssetRelationshipsWithSharedStreamCollectionShare:(id)a0;
- (void)reconcileCommentRelationshipsWithSharedStreamCollectionShare:(id)a0;
- (void)updateWithCPLShareParticipant:(id)a0 inShare:(id)a1;
- (void)updateWithMSASRelationship:(id)a0 withCollectionShare:(id)a1;

@end

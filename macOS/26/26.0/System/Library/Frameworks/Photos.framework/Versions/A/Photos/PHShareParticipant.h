@class NSString, NSPersonNameComponents, NSDate;

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) unsigned short role;
@property (readonly, nonatomic) short permission;
@property (readonly, nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) short exitState;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *participantID;
@property (readonly, copy, nonatomic) NSString *hashedPersonID;
@property (readonly, copy, nonatomic) NSDate *subscriptionDate;
@property (readonly, nonatomic) short allowlistedState;
@property (readonly, nonatomic) short participantKind;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchContributorForComment:(id)a0 options:(id)a1;
+ (id)fetchContributorsForAsset:(id)a0 options:(id)a1;
+ (id)fetchContributorsForAssets:(id)a0 options:(id)a1;
+ (id)fetchCurrentUserParticipantInShare:(id)a0 options:(id)a1;
+ (id)fetchOwnerParticipantInShare:(id)a0 options:(id)a1;
+ (id)fetchParticipantsInShare:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithParticipantIDs:(id)a0 options:(id)a1;
+ (id)fetchShareParticipantForPerson:(id)a0 options:(id)a1;
+ (id)localIdentifierWithUUID:(id)a0;
+ (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;

- (id)fullName;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end

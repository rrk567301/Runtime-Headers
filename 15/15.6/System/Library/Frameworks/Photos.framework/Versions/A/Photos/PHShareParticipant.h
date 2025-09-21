@class NSString, NSPersonNameComponents;

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) unsigned short role;
@property (readonly, nonatomic) short permission;
@property (readonly, nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) short exitState;
@property (readonly, nonatomic) char isCurrentUser;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *phoneNumber;
@property (readonly, copy, nonatomic) NSString *participantID;

+ (id)entityKeyMap;
+ (id)fetchContributorsForAsset:(id)a0 options:(id)a1;
+ (id)fetchContributorsForAssets:(id)a0 options:(id)a1;
+ (id)fetchParticipantsInShare:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchShareParticipantForPerson:(id)a0 options:(id)a1;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end

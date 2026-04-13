@class NSString, NSPersonNameComponents;

@interface PHShareParticipant : PHObject

@property (readonly, nonatomic) unsigned short role;
@property (readonly, nonatomic) short permission;
@property (readonly, nonatomic) short acceptanceStatus;
@property (readonly, nonatomic) BOOL isCurrentUser;
@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSPersonNameComponents *nameComponents;
@property (readonly, copy, nonatomic) NSString *phoneNumber;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)localIdentifierWithUUID:(id)a0;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)identifierCode;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)fetchParticipantsInShare:(id)a0 options:(id)a1;
+ (id)fetchParticipantsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchContributorForAsset:(id)a0 options:(id)a1;
+ (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 photoLibrary:(id)a2 completionHandler:(id /* block */)a3;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;

@end

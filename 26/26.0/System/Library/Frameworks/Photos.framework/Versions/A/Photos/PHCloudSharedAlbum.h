@class NSString, NSNumber, NSArray;

@interface PHCloudSharedAlbum : PHAssetCollection

@property (readonly, nonatomic, getter=isOwned) BOOL owned;
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled;
@property (readonly, nonatomic, getter=isCloudNotificationsEnabled) BOOL cloudNotificationsEnabled;
@property (readonly, nonatomic) short cloudAlbumSubtype;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFirstName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerLastName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFullName;
@property (readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey;
@property (readonly, retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (readonly, retain, nonatomic) NSString *publicURL;
@property (readonly, nonatomic) BOOL publicURLEnabled;
@property (readonly, nonatomic) NSString *cloudOwnerEmail;
@property (readonly, nonatomic) NSString *cloudOwnerPhone;
@property (readonly, nonatomic) NSString *cloudOwnerPersonID;
@property (readonly, nonatomic) NSArray *invitationRecords;
@property (readonly, retain, nonatomic) NSNumber *cloudRelationshipState;

+ (id)transformValueExpression:(id)a0 forKeyPath:(id)a1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchCloudSharedAlbumsWithGUIDs:(id)a0 options:(id)a1;
+ (id)fetchCloudSharedAlbumsWithLocalIdentifiers:(id)a0 options:(id)a1;
+ (id)fetchCloudSharedAlbumsWithOptions:(id)a0;

- (BOOL)canPerformEditOperation:(long long)a0;
- (id)description;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isMultipleContributorCloudSharedAlbum;
- (BOOL)isCloudSharedAlbum;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)a0;
- (void).cxx_destruct;
- (Class)changeRequestClass;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end

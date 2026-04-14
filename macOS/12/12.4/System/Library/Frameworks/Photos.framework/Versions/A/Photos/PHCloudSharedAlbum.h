@class NSString, NSNumber;

@interface PHCloudSharedAlbum : PHAssetCollection

@property (readonly, nonatomic, getter=isOwned) BOOL owned;
@property (readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) BOOL cloudMultipleContributorsEnabled;
@property (readonly, nonatomic) short cloudAlbumSubtype;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFirstName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerLastName;
@property (readonly, retain, nonatomic) NSString *cloudOwnerFullName;
@property (readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey;

+ (id)managedEntityName;
+ (id)fetchType;
+ (id)identifierCode;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isCloudSharedAlbum;
- (BOOL)canPerformEditOperation:(long long)a0;
- (BOOL)collectionHasFixedOrder;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;
- (Class)changeRequestClass;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)a0;
- (BOOL)isOwnedCloudSharedAlbum;
- (BOOL)isMultipleContributorCloudSharedAlbum;

@end

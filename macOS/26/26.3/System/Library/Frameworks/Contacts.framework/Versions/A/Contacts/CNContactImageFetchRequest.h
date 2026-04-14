@class NSArray;

@interface CNContactImageFetchRequest : CNContactPosterDataFetchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *contactIdentifiers;
@property (readonly, nonatomic) long long recencyType;

+ (id)allCurrentImagesRequest;
+ (id)allImagesRequestForContactIdentifiers:(id)a0;
+ (id)allRecentImagesRequest;
+ (id)currentImagesRequestForContactIdentifiers:(id)a0;
+ (id)recentImagesRequestForContactIdenfitiers:(id)a0;
+ (id)recentImagesRequestForContactIdentifiers:(id)a0;

- (id)description;
- (id)predicate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)persistentStoreRequest;
- (id)initWithContactIdentifiers:(id)a0 recencyType:(long long)a1;

@end

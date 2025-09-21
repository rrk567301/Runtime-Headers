@class NSString, NSDictionary, NSDate;

@interface MSASAlbum : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *ownerEmail;
@property (retain, nonatomic) NSString *ownerFullName;
@property (retain, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSString *ownerFirstName;
@property (retain, nonatomic) NSString *ownerLastName;
@property (nonatomic) char ownerIsWhitelisted;
@property (retain, nonatomic) NSDate *subscriptionDate;
@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) int relationshipState;
@property (retain, nonatomic) NSString *foreignCtag;
@property (retain, nonatomic) NSString *URLString;
@property (retain, nonatomic) NSString *publicURLString;
@property (retain, nonatomic) NSDictionary *metadata;
@property (retain, nonatomic) id context;
@property (nonatomic) char isFamilySharedAlbum;
@property (retain, nonatomic) NSString *clientOrgKey;
@property (readonly, nonatomic) char useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)metadataValueForKey:(id)a0;
- (void)setMetadataValue:(id)a0 forKey:(id)a1;

@end

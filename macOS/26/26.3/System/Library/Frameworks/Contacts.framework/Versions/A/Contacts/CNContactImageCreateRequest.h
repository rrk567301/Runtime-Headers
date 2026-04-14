@class NSString, NSArray;

@interface CNContactImageCreateRequest : CNContactPosterDataCreateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, nonatomic) BOOL recentsOnly;

+ (id)requestToCreateImage:(id)a0 forContactIdentifier:(id)a1;
+ (id)requestToCreateImages:(id)a0 forContactIdentifier:(id)a1;
+ (id)requestToCreateRecentImage:(id)a0 forContactIdentifier:(id)a1;

- (id)items;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContactImages:(id)a0 contactIdentifier:(id)a1 recentsOnly:(BOOL)a2;

@end

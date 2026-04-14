@class NSString, NSArray;

@interface CNContactPosterCreateRequest : CNContactPosterDataCreateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *posters;

+ (id)requestToCreatePoster:(id)a0 forContactIdentifier:(id)a1;
+ (id)requestToCreatePosters:(id)a0 forContactIdentifier:(id)a1;

- (id)items;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithContactPosters:(id)a0 contactIdentifier:(id)a1;

@end

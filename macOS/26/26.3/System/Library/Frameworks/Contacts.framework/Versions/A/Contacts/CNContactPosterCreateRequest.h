@class NSString, NSArray;

@interface CNContactPosterCreateRequest : CNContactPosterDataCreateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *posters;

+ (id)requestToCreatePoster:(id)a0 forContactIdentifier:(id)a1;
+ (id)requestToCreatePosters:(id)a0 forContactIdentifier:(id)a1;

- (id)items;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContactPosters:(id)a0 contactIdentifier:(id)a1;

@end

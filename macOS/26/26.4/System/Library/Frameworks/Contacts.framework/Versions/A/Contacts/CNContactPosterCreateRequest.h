@class NSString, NSArray;

@interface CNContactPosterCreateRequest : CNContactPosterDataCreateRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, copy, nonatomic) NSArray *posters;

+ (id)requestToCreatePoster:(id)a0 forContactIdentifier:(id)a1;
+ (id)requestToCreatePosters:(id)a0 forContactIdentifier:(id)a1;

- (id)items;
- (void)acceptVisitor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithContactPosters:(id)a0 contactIdentifier:(id)a1;

@end

@class LNPropertyQuery, NSArray, NSNumber;

@interface LNPropertyQueryRequestType : LNQueryRequestTypeBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNPropertyQuery *propertyQuery;
@property (readonly, nonatomic) NSArray *sortingOptions;
@property (readonly, nonatomic) NSNumber *maximumResultCount;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPropertyQuery:(id)a0 sortingOptions:(id)a1 maximumResultCount:(id)a2;

@end

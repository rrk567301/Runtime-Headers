@class LNPropertyQuery, NSArray, NSNumber;

@interface LNPropertyQueryRequestType : LNQueryRequestTypeBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) LNPropertyQuery *propertyQuery;
@property (readonly, nonatomic) NSArray *sortingOptions;
@property (readonly, nonatomic) NSNumber *maximumResultCount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyQuery:(id)a0 sortingOptions:(id)a1 maximumResultCount:(id)a2;

@end

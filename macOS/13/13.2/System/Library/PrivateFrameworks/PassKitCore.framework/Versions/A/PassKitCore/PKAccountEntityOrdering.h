@class NSArray;

@interface PKAccountEntityOrdering : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long context;
@property (retain, nonatomic) NSArray *ordering;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 dictionary:(id)a1;
- (void)setOrderingFromJSONString:(id)a0;
- (id)orderingAsJSONString;
- (BOOL)isEqualToAccountEntityOrdering:(id)a0;

@end

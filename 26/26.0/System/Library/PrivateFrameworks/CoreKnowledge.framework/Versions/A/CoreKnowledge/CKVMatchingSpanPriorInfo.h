@interface CKVMatchingSpanPriorInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ordinality;
@property (readonly, nonatomic) float score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMatchingSpanPriorInfo:(id)a0;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;

@end

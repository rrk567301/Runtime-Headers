@interface CKVMatchingSpanPriorInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ordinality;
@property (readonly, nonatomic) float score;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToMatchingSpanPriorInfo:(id)a0;
- (id)initWithOrdinality:(unsigned int)a0 score:(float)a1;

@end

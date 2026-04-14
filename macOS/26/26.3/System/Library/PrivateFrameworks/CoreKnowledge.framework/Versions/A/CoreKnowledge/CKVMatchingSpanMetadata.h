@class CKVMatchingSpanPriorInfo;

@interface CKVMatchingSpanMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float matchScore;
@property (readonly, nonatomic) CKVMatchingSpanPriorInfo *priorInfo;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatchScore:(float)a0;
- (id)initWithMatchingSpanPriorInfo:(id)a0 matchScore:(float)a1;
- (BOOL)isEqualToMatchingSpanMetadata:(id)a0;

@end

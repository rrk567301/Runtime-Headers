@class CKVMatchingSpanPriorInfo;

@interface CKVMatchingSpanMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) float matchScore;
@property (readonly, nonatomic) CKVMatchingSpanPriorInfo *priorInfo;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithMatchScore:(float)a0;
- (id)initWithMatchingSpanPriorInfo:(id)a0 matchScore:(float)a1;
- (BOOL)isEqualToMatchingSpanMetadata:(id)a0;

@end

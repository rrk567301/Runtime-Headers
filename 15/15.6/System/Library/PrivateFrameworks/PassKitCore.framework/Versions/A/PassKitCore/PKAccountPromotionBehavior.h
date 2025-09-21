@interface PKAccountPromotionBehavior : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) double minRefreshPeriod;
@property (nonatomic) long long maxImpressionCount;
@property (nonatomic) double timeVisibleAfterCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithMinRefreshPeriod:(id)a0 maxImpressionCount:(id)a1 timeVisibleAfterCompleted:(id)a2;
- (char)isEqualToAccountPromotionBehavior:(id)a0;

@end

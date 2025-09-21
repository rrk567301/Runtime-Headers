@class NSString;

@interface IRMiLoPredictionEventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *predictionId;

+ (id)miLoPredictionEventDOWithLabel:(id)a0 predictionId:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToMiLoPredictionEventDO:(id)a0;
- (id)copyWithReplacementLabel:(id)a0;
- (id)copyWithReplacementPredictionId:(id)a0;
- (id)initWithLabel:(id)a0 predictionId:(id)a1;

@end

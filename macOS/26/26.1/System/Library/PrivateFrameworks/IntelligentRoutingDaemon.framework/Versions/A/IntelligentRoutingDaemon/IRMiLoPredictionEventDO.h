@class NSString;

@interface IRMiLoPredictionEventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *predictionId;

+ (id)miLoPredictionEventDOWithLabel:(id)a0 predictionId:(id)a1;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (BOOL)isEqualToMiLoPredictionEventDO:(id)a0;
- (id)copyWithReplacementLabel:(id)a0;
- (id)copyWithReplacementPredictionId:(id)a0;
- (id)initWithLabel:(id)a0 predictionId:(id)a1;

@end

@class NSString;

@interface IRMiLoPredictionEventDO : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *label;
@property (readonly, nonatomic) NSString *predictionId;
@property (readonly, nonatomic) NSString *labelRealTime;
@property (readonly, nonatomic) NSString *predictionIdRealTime;

+ (id)miLoPredictionEventDOWithLabel:(id)a0 predictionId:(id)a1 labelRealTime:(id)a2 predictionIdRealTime:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToMiLoPredictionEventDO:(id)a0;
- (id)copyWithReplacementLabel:(id)a0;
- (id)copyWithReplacementLabelRealTime:(id)a0;
- (id)copyWithReplacementPredictionId:(id)a0;
- (id)copyWithReplacementPredictionIdRealTime:(id)a0;
- (id)initWithLabel:(id)a0 predictionId:(id)a1 labelRealTime:(id)a2 predictionIdRealTime:(id)a3;

@end

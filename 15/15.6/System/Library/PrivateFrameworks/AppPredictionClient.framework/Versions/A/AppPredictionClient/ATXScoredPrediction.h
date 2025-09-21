@interface ATXScoredPrediction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) id predictedItem;
@property (readonly, nonatomic) float score;

+ (id)predictionsFrom:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setScore:(float)a0;
- (id)initWithBundleId:(id)a0 score:(float)a1;
- (id)initWithPredictedItem:(id)a0 score:(float)a1;
- (char)isEqualToScoredPredictionItem:(id)a0;

@end

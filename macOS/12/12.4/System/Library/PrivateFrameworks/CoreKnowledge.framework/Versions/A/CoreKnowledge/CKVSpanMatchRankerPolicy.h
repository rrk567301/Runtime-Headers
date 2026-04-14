@interface CKVSpanMatchRankerPolicy : NSObject

@property (readonly, nonatomic) BOOL enableRankingWithPriors;
@property (readonly, nonatomic) BOOL useTopFive;
@property (readonly, nonatomic) float matchScoreWeight;
@property (readonly, nonatomic) float priorScoreWeight;
@property (readonly, nonatomic) float regionalRelativeThreshold;
@property (readonly, nonatomic) float globalRelativeThreshold;
@property (readonly, nonatomic) float absoluteThreshold;
@property (readonly, nonatomic) BOOL allowPartialMatch;
@property (readonly, nonatomic) BOOL allowApproxMatch;
@property (readonly, nonatomic) BOOL prioritizeExactMatch;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (BOOL)_settingOverrideBoolValue:(id)a0 withDefault:(BOOL)a1;
- (float)_settingOverrideFloatValue:(id)a0 withDefault:(float)a1;
- (BOOL)isEqualToSpanMatchRankerPolicy:(id)a0;
- (id)initWithSettings:(id)a0 enableRankingWithPriors:(BOOL)a1 allowPartialMatch:(BOOL)a2 allowApproxMatch:(BOOL)a3 prioritizeExactMatch:(BOOL)a4;

@end

@interface CSDetectionRuleCondition : NSObject

@property int scalarMetric;
@property int normalizerMetric;
@property int comparator;
@property float value;

- (id)initWithScalarMetric:(int)a0 andNormalizerMetric:(int)a1 andComparator:(int)a2 andValue:(float)a3;

@end

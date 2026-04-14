@class NSArray, RTPredictedContextAnalytics;

@interface RTPredictedContextResult : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *predictedContexts;
@property (readonly, copy, nonatomic) RTPredictedContextAnalytics *analytics;

+ (unsigned long long)contextTypeMaskForContext:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPredictedContexts:(id)a0 analytics:(id)a1;
- (id)nextStepPredictedContextsWithFilterMask:(unsigned long long)a0;
- (id)predictedSequencesAfterContext:(id)a0;
- (id)currentPredictedContextsWithType:(unsigned long long)a0;
- (id)dateIntervalFromStart:(id)a0 end:(id)a1;
- (id)generateSequencesFromDate:(id)a0 toDate:(id)a1;
- (id)predictedContextsWithType:(unsigned long long)a0 afterContext:(id)a1;
- (id)unknownPredictedContextFromStart:(id)a0 end:(id)a1;

@end

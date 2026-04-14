@class NSArray, NSDate;

@interface _DASPredictionTimeline : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSArray *values;
@property (readonly, nonatomic) NSArray *transitionDates;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)valueAtDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithValues:(id)a0 eachWithDuration:(double)a1 startingAt:(id)a2;
- (id)initWithValues:(id)a0 forDurations:(id)a1 startingAt:(id)a2;
- (id)initWithValues:(id)a0 startDate:(id)a1 transitionDates:(id)a2;
- (id)lowLikelihoodPeriod;
- (id)valuesUntilEndDate:(id)a0 withIntervalDuration:(double)a1;

@end

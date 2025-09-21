@class NSDateInterval, NSArray, NSDate;

@interface RTPredictedContextOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDateInterval *forecastWindowDateInterval;
@property (readonly, nonatomic) double forecastWindowTimeInterval;
@property (readonly, nonatomic) unsigned long long filterContextTypeMask;
@property (readonly, nonatomic) NSArray *filterLocations;
@property (readonly, nonatomic) BOOL resultSortStartDateAscending;
@property (readonly, nonatomic) BOOL resultSortProbabilityAscending;
@property (readonly, nonatomic) NSArray *resultSortDescriptors;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithForecastWindowDateInterval:(id)a0 filterContextTypeMask:(unsigned long long)a1 filterLocations:(id)a2 resultSortDescriptors:(id)a3;
- (id)initWithCreationDate:(id)a0 forecastWindowDateInterval:(id)a1 forecastWindowTimeInterval:(double)a2 filterContextTypeMask:(unsigned long long)a3 filterLocations:(id)a4 resultSortDescriptors:(id)a5;
- (id)initWithForecastWindowDateInterval:(id)a0 filterContextTypeMask:(unsigned long long)a1 filterLocations:(id)a2 resultSortStartDateAscending:(BOOL)a3 resultSortProbabilityAscending:(BOOL)a4;
- (id)initWithForecastWindowTimeInterval:(double)a0 filterContextTypeMask:(unsigned long long)a1 filterLocations:(id)a2 resultSortDescriptors:(id)a3;

@end

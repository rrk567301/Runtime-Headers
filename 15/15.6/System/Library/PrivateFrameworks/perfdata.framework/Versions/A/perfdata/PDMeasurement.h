@class NSString, NSDictionary, PDContainer, NSNumber;

@interface PDMeasurement : NSObject

@property (retain, nonatomic) NSDictionary *measurement;
@property (retain, nonatomic) NSString *metric;
@property (retain, nonatomic) NSString *unitString;
@property (weak, nonatomic) PDContainer *container;
@property (retain, nonatomic) NSDictionary *variables;
@property (retain, nonatomic) NSDictionary *labels;
@property (nonatomic) char largerBetter;
@property (nonatomic) unsigned long long group;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) NSNumber *sampleCount;
@property (retain, nonatomic) NSNumber *mean;
@property (retain, nonatomic) NSNumber *standardDeviation;
@property (retain, nonatomic) NSNumber *minimum;
@property (retain, nonatomic) NSNumber *maximum;
@property (nonatomic, getter=isSummary) char summary;
@property (nonatomic, getter=isContext) char context;
@property (retain, nonatomic) NSString *cachedMetricFilter;
@property (readonly, nonatomic) unsigned long long histogramBucketCount;
@property (readonly, nonatomic) unsigned long long percentileCount;

- (id)description;
- (void).cxx_destruct;
- (char)isLike:(id)a0;
- (char)isComparableTo:(id)a0;
- (char)enumerateHistogramBucketsWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (char)enumeratePercentilesWithError:(id *)a0 usingBlock:(id /* block */)a1;
- (id)initWithContainer:(id)a0 dictionary:(id)a1 group:(unsigned long long)a2 error:(id *)a3;
- (char)isComparableTo:(id)a0 ignoringNullableVariables:(id)a1;
- (char)isComparableTo:(id)a0 ignoringVariables:(id)a1;
- (char)matchesMetricFilter:(id)a0;
- (char)matchesVariables:(id)a0 ignoringMissing:(char)a1;
- (id)metricFilter;
- (id)metricFilterIgnoringNullableVariables:(id)a0;
- (id)metricFilterIgnoringVariables:(id)a0;

@end

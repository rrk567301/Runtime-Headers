@class NSNumber, SignpostAggregationGroup, NSString;

@interface SignpostAggregationGroupDuration : NSObject <NSCopying>

@property (retain, nonatomic) NSNumber *minDurationNs;
@property (retain, nonatomic) NSNumber *maxDurationNs;
@property (retain, nonatomic) NSNumber *stdDevNs;
@property (weak, nonatomic) SignpostAggregationGroup *parentGroup;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *groupName;
@property (readonly, nonatomic) BOOL telemetryEnabled;
@property (readonly, nonatomic) unsigned long long totalDurationNs;
@property (readonly, nonatomic) double totalDurationMs;
@property (readonly, nonatomic) double totalDurationSeconds;
@property (readonly, nonatomic) unsigned long long averageDurationNs;
@property (readonly, nonatomic) double averageDurationMs;
@property (readonly, nonatomic) double averageDurationSeconds;
@property (readonly, nonatomic) NSNumber *minDurationMs;
@property (readonly, nonatomic) NSNumber *minDurationSeconds;
@property (readonly, nonatomic) NSNumber *maxDurationMs;
@property (readonly, nonatomic) NSNumber *maxDurationSeconds;
@property (readonly, nonatomic) NSNumber *stdDevMs;
@property (readonly, nonatomic) NSNumber *stdDevSeconds;

+ (id)_combinedStdDevFromDuration0:(id)a0 duration1:(id)a1;
+ (id)_combinedStdDevNsFromCount0:(unsigned long long)a0 totalDurationNs0:(unsigned long long)a1 stdDevNs0:(double)a2 count1:(unsigned long long)a3 totalDurationNs1:(unsigned long long)a4 stdDevNs1:(double)a5;
+ (id)_sumOfDuration1:(id)a0 duration2:(id)a1 errorOut:(id *)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_addToPayloadDictionary:(id)a0;
- (id)_coreAnalyticsDurationStdDevFieldName;
- (id)_coreAnalyticsMaxDurationFieldName;
- (id)_coreAnalyticsMinDurationFieldName;
- (id)_coreAnalyticsTotalDurationFieldName;
- (id)_initWithMetadataSegment:(id)a0 errorOut:(id *)a1;
- (id)_initWithType:(id)a0 groupName:(id)a1 durationNs:(unsigned long long)a2 telemetryEnabled:(BOOL)a3;
- (id)_initializeAsSumOfDuration1:(id)a0 duration2:(id)a1;

@end

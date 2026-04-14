@class NSMutableDictionary;

@interface NetworkQualityExecutionsResult : NetworkQualityResult <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *workingLatencyResults;
@property (retain, nonatomic) NSMutableDictionary *idleLatencyResults;
@property (retain, nonatomic) NSMutableDictionary *mutableOtherValues;
@property (retain, nonatomic) NSMutableDictionary *mutableURLSessionMetrics;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)clearAllMeasurements;

@end

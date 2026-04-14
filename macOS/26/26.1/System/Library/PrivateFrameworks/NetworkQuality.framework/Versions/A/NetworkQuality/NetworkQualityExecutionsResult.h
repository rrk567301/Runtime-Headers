@class NSMutableDictionary;

@interface NetworkQualityExecutionsResult : NetworkQualityResult <NSCopying>

@property (retain) NSMutableDictionary *workingLatencyResults;
@property (retain) NSMutableDictionary *idleLatencyResults;
@property (retain) NSMutableDictionary *mutableOtherValues;
@property (retain) NSMutableDictionary *mutableURLSessionMetrics;

- (void).cxx_destruct;
- (id)init;

@end

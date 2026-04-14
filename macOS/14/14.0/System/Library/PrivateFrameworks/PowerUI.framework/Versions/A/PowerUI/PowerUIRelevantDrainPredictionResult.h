@interface PowerUIRelevantDrainPredictionResult : NSObject

@property (nonatomic) double confidence;
@property (nonatomic) double threshold;
@property (nonatomic) BOOL significantDrainAhead;

- (id)description;
- (id)init;

@end

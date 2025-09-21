@interface ATXAnchorModelClassificationResult : NSObject

@property (readonly, nonatomic) char shouldPredictCandidate;
@property (readonly, nonatomic) double score;

- (id)initWithShouldPredictCandidate:(char)a0 score:(double)a1;

@end

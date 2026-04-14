@interface VNFgBgE5MLInstanceSegmenterThresholds : NSObject

@property float cocoConfidenceThreshold;
@property float miyoshiConfidenceThreshold;
@property float maskThreshold;
@property float IoUThreshold;
@property float stabilityScoreThreshold;
@property float defaultValidMinimumMaskPixelCount;

- (id)initDefaultConfig;
- (id)initWithRevision:(unsigned long long)a0 error:(id *)a1;

@end

@interface BWVideoQualityMetrics : NSObject {
    long long _totalLux;
    int _frames;
}

@property (readonly, nonatomic) unsigned int qualityScoringVersion;

+ (void)initialize;
+ (id)filterMetadata:(id)a0;
+ (double)_luxThreshold;
+ (double)_luxTransition;

- (void)reset;
- (void)processMetadata:(id)a0;
- (double)_computeLuxScore;
- (double)computeQualityScore;

@end

@interface ISForegroundSegmentation : NSObject {
    BOOL _strict;
    int _numberOfClusters;
    int _borderSamplingWidth;
    int _maxNumberOfClusteringSamples;
    int _numberOfClusteringSteps;
    float _clusterGroupingDistanceThreshold;
    float _borderNoiseScale;
    int _booleanThreshold;
}

- (id)initWithStrict:(BOOL)a0;
- (BOOL)computeMaskWithWidth:(int)a0 height:(int)a1 samples:(struct { int x0; int x1; int x2; unsigned int x3; void *x4; })a2 foregroundMask:(struct { int x0; int x1; int x2; BOOL x3; union { char **x0; } x4; })a3;

@end

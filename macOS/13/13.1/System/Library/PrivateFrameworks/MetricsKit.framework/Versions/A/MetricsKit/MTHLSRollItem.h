@interface MTHLSRollItem : MTHLSItem

@property unsigned long long duration;

- (id)initWithStartOverallPosition:(unsigned long long)a0 duration:(unsigned long long)a1 metricsData:(id)a2;
- (unsigned long long)endOverallPosition;
- (BOOL)containsOverallPosition:(unsigned long long)a0;

@end

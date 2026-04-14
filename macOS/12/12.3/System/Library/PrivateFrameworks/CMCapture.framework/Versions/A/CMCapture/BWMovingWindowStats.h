@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (double)max;
- (double)min;
- (void)addDataPoint:(double)a0;
- (id)initWithWindowSize:(int)a0;

@end

@interface BWMovingWindowStats : BWStats {
    int _numDataPoints;
    int _dataPointIndex;
    double *_dataPoints;
}

@property (readonly, nonatomic) int windowSize;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)max;
- (double)min;
- (void)addDataPoint:(double)a0;
- (id)initWithWindowSize:(int)a0;

@end

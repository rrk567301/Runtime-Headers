@interface BWMovingWindowStats : BWMedianStats {
    int _dataPointIndex;
}

@property (readonly, nonatomic) int windowSize;

- (id)initWithWindowSize:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)addDataPointP:(double)a0;
- (id)description;
- (void)dealloc;

@end

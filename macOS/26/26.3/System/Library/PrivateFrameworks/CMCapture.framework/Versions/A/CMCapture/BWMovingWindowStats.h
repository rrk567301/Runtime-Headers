@interface BWMovingWindowStats : BWMedianStats {
    int _dataPointIndex;
}

@property (readonly, nonatomic) int windowSize;

- (id)description;
- (BOOL)addDataPointP:(double)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithWindowSize:(int)a0;

@end

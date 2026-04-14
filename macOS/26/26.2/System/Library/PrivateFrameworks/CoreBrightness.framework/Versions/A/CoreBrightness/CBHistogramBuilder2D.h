@class NSArray, NSMutableArray;

@interface CBHistogramBuilder2D : NSObject {
    NSArray *_firstDimEdges;
    NSMutableArray *_histograms;
}

- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (void)reset;
- (void)dealloc;
- (id)initWithFirstDim:(id)a0 andSecondDim:(id)a1;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1 forFirstDimValue:(float)a2;

@end

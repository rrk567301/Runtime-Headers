@class NSArray, NSMutableArray;

@interface CBHistogramBuilder3D : NSObject {
    NSArray *_firstDimEdges;
    NSMutableArray *_histograms;
}

- (void)reset;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (id)initWithFirstDim:(id)a0 andSecondDim:(id)a1 andThirdDim:(id)a2;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1 forFirstDimValue:(float)a2 andSecondDimValue:(float)a3;

@end

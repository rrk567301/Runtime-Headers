@class NSArray, NSMutableArray;

@interface CBHistogramBuilder : NSObject <CBHistogram>

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (void)pushNumber:(double)a0;
- (id)initWithEdges:(id)a0;
- (void)reset;
- (void)pushNumberWeighted:(double)a0 withWeight:(double)a1;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (void)dealloc;

@end

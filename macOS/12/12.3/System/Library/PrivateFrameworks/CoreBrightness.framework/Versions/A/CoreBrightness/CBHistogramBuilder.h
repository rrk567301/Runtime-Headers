@class NSArray, NSMutableArray;

@interface CBHistogramBuilder : NSObject <CBHistogram>

@property (readonly) NSMutableArray *bins;
@property (readonly) NSArray *edges;

- (void)dealloc;
- (void)reset;
- (void)enumerateBinsUsingBlock:(id /* block */)a0;
- (void)pushNumberWeighted:(id)a0 withWeight:(id)a1;
- (id)initWithEdges:(id)a0;
- (void)pushNumber:(id)a0;

@end

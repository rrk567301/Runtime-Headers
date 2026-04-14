@class NSDictionary, NSMutableDictionary;

@interface SignpostAggregationAccumulator : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mutableSignatureToAccumulatorEntry;
@property (readonly, nonatomic) NSDictionary *signatureToAccumulatorEntry;
@property (readonly, nonatomic) BOOL includeRawIntervals;

- (void).cxx_destruct;
- (id)init;
- (void)handleInterval:(id)a0;
- (id)initWithIncludeRawIntervals:(BOOL)a0;

@end

@class NSArray, NSMutableArray, NSNumber;

@interface ICNAHistogramBase : NSObject

@property (retain, nonatomic) NSMutableArray *countsForEachBucket;
@property (retain, nonatomic) NSArray *bucketLeftBounds;
@property (nonatomic) double valuePrecision;
@property (retain, nonatomic) NSNumber *valueMax;

- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (void)reportValue:(double)a0;
- (id)icasHistogram;
- (double)roundedValue:(double)a0;
- (unsigned long long)roundedCount:(unsigned long long)a0;

@end

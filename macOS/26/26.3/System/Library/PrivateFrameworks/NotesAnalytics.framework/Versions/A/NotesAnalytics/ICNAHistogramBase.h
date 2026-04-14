@class NSArray, NSMutableArray, NSNumber;

@interface ICNAHistogramBase : NSObject

@property (retain, nonatomic) NSMutableArray *countsForEachBucket;
@property (retain, nonatomic) NSArray *bucketLeftBounds;
@property (nonatomic) double valuePrecision;
@property (retain, nonatomic) NSNumber *valueMax;

- (id)init;
- (void)setup;
- (void).cxx_destruct;
- (id)icasHistogram;
- (void)reportValue:(double)a0;
- (unsigned long long)roundedCount:(unsigned long long)a0;
- (double)roundedValue:(double)a0;

@end

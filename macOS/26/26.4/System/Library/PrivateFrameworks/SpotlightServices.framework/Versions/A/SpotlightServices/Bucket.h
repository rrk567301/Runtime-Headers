@class NSMutableArray;

@interface Bucket : NSObject

@property (nonatomic) double threshold;
@property (nonatomic) double upperBound;
@property (nonatomic) double lowerBound;
@property (nonatomic) BOOL isPerfectScoreBucket;
@property (nonatomic) BOOL isDefaultTemporal;
@property (retain) NSMutableArray *items;

- (BOOL)addItem:(id)a0;
- (void).cxx_destruct;
- (void)calculateLikelihood:(id)a0;
- (id)initWithItem:(id)a0 isPerfectScoreBucket:(BOOL)a1 queryContext:(id)a2;

@end

@class NSMutableArray;

@interface Bucket : NSObject

@property (nonatomic) double threshold;
@property (nonatomic) double upperBound;
@property (nonatomic) double lowerBound;
@property (nonatomic) char isPerfectScoreEmailBucket;
@property (retain) NSMutableArray *items;

- (void).cxx_destruct;
- (char)addOne:(id)a0;
- (void)calculateLikelihood:(id)a0;
- (id)initWithItem:(id)a0 isPerfectScoreEmailBucket:(char)a1;

@end

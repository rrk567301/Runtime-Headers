@class NSMutableDictionary, NSMutableArray;

@interface PCRasterBin : NSObject

@property (nonatomic) double binStart;
@property (nonatomic) double binEnd;
@property (retain, nonatomic) NSMutableDictionary *loiProbs;
@property (retain, nonatomic) NSMutableDictionary *loiSources;
@property (retain, nonatomic) NSMutableArray *predictedTransports;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addProbability:(double)a0 forLoiID:(id)a1 withSources:(id)a2;
- (void)addTransports:(id)a0;

@end

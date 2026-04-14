@class NSSet, NSString;

@interface _PSRankAggregationRRF : NSObject <_PSRankAggregationStrategy>

@property (nonatomic) double k;
@property (retain, nonatomic) NSSet *heuristicsToFuse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)aggregateRankings:(id)a0 withContext:(id)a1;
- (id)initWithK:(double)a0 heuristicsToFuse:(id)a1;

@end

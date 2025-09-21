@class HistoryItem;

@interface _TopSiteCandidate : NSObject

@property (readonly, nonatomic) HistoryItem *historyItem;
@property (readonly, nonatomic) double score;

- (id)debugDescription;
- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)initWithHistoryItem:(id)a0 score:(double)a1;

@end

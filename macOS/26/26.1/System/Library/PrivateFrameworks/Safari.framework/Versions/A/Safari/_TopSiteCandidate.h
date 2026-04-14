@class HistoryItem;

@interface _TopSiteCandidate : NSObject

@property (readonly, nonatomic) HistoryItem *historyItem;
@property (readonly, nonatomic) double score;

- (long long)compare:(id)a0;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initWithHistoryItem:(id)a0 score:(double)a1;

@end

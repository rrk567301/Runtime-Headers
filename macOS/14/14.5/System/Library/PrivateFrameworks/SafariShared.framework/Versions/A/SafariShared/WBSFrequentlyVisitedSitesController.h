@class NSArray, NSString, WBSFrequentlyVisitedSitesBannedURLStore, WBSHistory;

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    double _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}

@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;
@property (readonly, nonatomic) NSString *profileIdentifier;

+ (id)newRadarProblemURLForHistoryItem:(id)a0;
+ (float)scoreForHistoryItem:(id)a0 atTime:(double)a1 withMinimumVisitCount:(unsigned long long)a2;
+ (float)scoreWithHistoryItemForVisitScoring:(id)a0 historyItemForURLScoring:(id)a1 atTime:(double)a2 withMinimumVisitCount:(unsigned long long)a3;

- (void).cxx_destruct;
- (id)_canonicalizedFavoritesURLStringSet;
- (id)_computeFrequentlyVisitedSiteCandidates;
- (void)_postFrequentlyVisitedSitesDidChangeNotification;
- (void)_recomputeFrequentlyVisitedSitesNow;
- (void)_saveFrequentlyVisitedSites:(id)a0 completionHandler:(id /* block */)a1;
- (float)_scoreForHistoryItem:(id)a0;
- (void)_updateFrequentlyVisitedSitesWithCandidates:(id)a0;
- (void)clearFrequentlyVisitedSites;
- (id)initWithHistory:(id)a0 bannedURLStore:(id)a1 profileIdentifier:(id)a2;
- (BOOL)recomputeFrequentlyVisitedSitesIfNecessary;

@end

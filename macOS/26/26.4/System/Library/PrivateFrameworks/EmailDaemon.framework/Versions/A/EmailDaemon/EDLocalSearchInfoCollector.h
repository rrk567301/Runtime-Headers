@class NSMutableDictionary;

@interface EDLocalSearchInfoCollector : NSObject

@property (nonatomic) BOOL hasKeywordResults;
@property (nonatomic) BOOL hasEmbeddingResults;
@property (copy, nonatomic) NSMutableDictionary *allRankingsByObjectID;
@property (copy, nonatomic) NSMutableDictionary *rankingObjectIDsByConversation;
@property (nonatomic) int topHitsQueryStatus;
@property (nonatomic) int liveSearchQueryStatus;
@property (nonatomic) BOOL hasTopHitsQueryEmbedding;
@property (nonatomic) BOOL hasLiveSearchQueryEmbedding;

- (void).cxx_destruct;
- (id)init;
- (BOOL)_combinedHasQueryEmbedding;
- (int)_combinedQueryStatus;
- (id)localSearchInfoForConversationIDs:(id)a0;
- (id)localSearchInfoForMessageObjectIDs:(id)a0;
- (void)processRankingSignalsBySearchableItemID:(id)a0 forMessages:(id)a1;

@end

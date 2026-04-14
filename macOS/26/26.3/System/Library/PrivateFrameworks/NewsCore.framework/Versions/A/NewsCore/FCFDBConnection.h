@interface FCFDBConnection : NSObject <FCFDBConnectionReadable, FCFDBConnectionWritable> {
    struct sqlite3 { } *_db;
}

- (id)initWithPath:(id)a0;
- (void)beginTransaction;
- (void)dealloc;
- (void)commitTransaction;
- (void)insertFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (void)_prepareForUse;
- (id)_queryToSelectFeedItemIDsWithFeedLookupIDs:(id)a0 feedRange:(id)a1 feature:(id)a2 maxCountByFeedLookupID:(id)a3 totalMaxCount:(unsigned long long)a4;
- (id)_queryToSelectFeedItemIDsWithFeedLookupIDs:(id)a0 feedRange:(id)a1 feature:(id)a2 totalMaxCount:(unsigned long long)a3;
- (id)_queryWhereClauseForFeedLookupIDs:(id)a0 feedRange:(id)a1 feature:(id)a2;
- (void)deleteFeedItemIndexesFromFeedLookupID:(id)a0 feedRange:(id)a1;
- (void)deleteFeedItemsWithIDs:(id)a0;
- (void)incrementalVacuum;
- (void)insertFeatureIndexesForFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (void)insertFeeds:(id)a0;
- (void)insertIndexesForFeedItems:(id)a0 knownFeedsByID:(id)a1;
- (id)selectFeedItemIDsWithFeedLookupIDs:(id)a0 feedRange:(id)a1 feature:(id)a2 maxCountByFeedLookupID:(id)a3 totalMaxCount:(unsigned long long)a4;
- (id)selectFeedItemsWithIDs:(id)a0;
- (id)selectFeedsWithFeedIDs:(id)a0;
- (long long)selectMaxFeedLookupID;

@end

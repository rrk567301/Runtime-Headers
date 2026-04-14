@class NSArray, FCUserEventHistoryMetadata, NSDate;

@interface NewsCore.UserEventHistoryStorage : NSObject <FCUserEventHistoryStorageType> {
    void /* unknown type, empty encoding */ privateZone;
    void /* unknown type, empty encoding */ logger;
    void /* function */ prunedSessionIDs;
    void /* unknown type, empty encoding */ _metadata;
}

@property (nonatomic, readonly) NSArray *sessionIDs;
@property (nonatomic, readonly) NSArray *sessions;
@property (nonatomic, readonly) BOOL isEmpty;
@property (nonatomic, readonly) NSDate *earliestSessionDate;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, copy) NSArray *prunedSessionIDs;
@property (nonatomic) unsigned long long prunedSessionSize;
@property (nonatomic, readonly) FCUserEventHistoryMetadata *metadata;

- (void)clearHistory;
- (void)writeJSON:(id /* block */)a0;
- (id)pruneWithPolicy:(id)a0;
- (void)storeSessionID:(id)a0 sessionData:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)readBaseDirectoryWithAccessor:(id /* block */)a0;
- (void)clearAllSessions;
- (void)setMetadataWithAggregateStoreGenerationTime:(long long)a0 aggregateTotalCount:(long long)a1 meanCountOfEvents:(double)a2 standardDeviationOfEvents:(double)a3 totalEventsCount:(long long)a4 headlineEventCount:(long long)a5 headlinesWithValidTitleEmbeddingsEventCount:(long long)a6 headlinesWithInvalidTitleEmbeddingsEventCount:(long long)a7 headlinesWithValidBodyEmbeddingsEventCount:(long long)a8 headlinesWithInvalidBodyEmbeddingsEventCount:(long long)a9 eventCounts:(id)a10 aggregateStoreData:(id)a11;

@end

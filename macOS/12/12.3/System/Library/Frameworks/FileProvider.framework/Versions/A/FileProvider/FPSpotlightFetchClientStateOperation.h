@class NSString, CSSearchableIndex, FPSpotlightIndexer;

@interface FPSpotlightFetchClientStateOperation : FPOperation {
    FPSpotlightIndexer *_indexer;
    CSSearchableIndex *_index;
    NSString *_indexName;
    NSString *_domainIdentifier;
    NSString *_reason;
}

+ (id)_currentIndexerVersion;

- (void).cxx_destruct;
- (void)main;
- (id)operationDescription;
- (id)initWithIndexer:(id)a0 index:(id)a1 indexName:(id)a2 domainID:(id)a3 reason:(id)a4;
- (void)_handleFetchedClientState:(id)a0 error:(id)a1;
- (id)_clientStateCurrentVersionIfNeedReset;
- (void)_markClientStateResetDone;
- (void)_fetchClientState;

@end

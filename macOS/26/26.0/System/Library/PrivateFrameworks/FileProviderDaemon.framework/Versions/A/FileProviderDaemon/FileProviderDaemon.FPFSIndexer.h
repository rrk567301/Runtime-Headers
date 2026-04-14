@interface FileProviderDaemon.FPFSIndexer : FPDDomainIndexer <FPSpotlightDropIndexDelegate> {
    void /* unknown type, empty encoding */ enumerator;
    void /* unknown type, empty encoding */ lastIndexedAnchor;
    void /* unknown type, empty encoding */ spotlightIndexer;
}

@property (nonatomic, readonly) BOOL learnNeedsAuthenticationFromBatchError;

- (void)setIndexingEnabled:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dumpStateTo:(id)a0;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)didDropIndexWithDropReason:(unsigned long long)a0;
- (void)dumpStateTo:(id)a0 withName:(id)a1;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2 supportingIndexAll:(BOOL)a3;
- (void)pauseIndexingWithCompletionHandler:(id /* block */)a0;
- (void)resumeIndexingWithCompletionHandler:(id /* block */)a0;
- (void)signalNeedsReindexFromScratchWithDropReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end

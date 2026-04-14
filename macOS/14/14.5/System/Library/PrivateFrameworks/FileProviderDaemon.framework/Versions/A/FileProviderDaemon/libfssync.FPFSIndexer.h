@interface libfssync.FPFSIndexer : FPDDomainIndexer <FPSpotlightIndexerDelegate> {
    void /* unknown type, empty encoding */ enumerator;
    void /* unknown type, empty encoding */ lastIndexedAnchor;
    void /* unknown type, empty encoding */ spotlightIndexer;
}

@property (nonatomic, readonly) BOOL learnNeedsAuthenticationFromBatchError;

- (void)spotlightIndexerDidReindexAllSearchableItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dumpStateTo:(id)a0;
- (void)indexOneBatchWithCompletionHandler:(id /* block */)a0;
- (id)initWithExtension:(id)a0 domain:(id)a1 enabled:(BOOL)a2;

@end

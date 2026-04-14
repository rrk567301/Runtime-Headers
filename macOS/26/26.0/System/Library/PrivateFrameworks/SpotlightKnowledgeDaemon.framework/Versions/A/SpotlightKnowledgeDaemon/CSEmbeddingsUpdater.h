@class SKGProcessor, NSArray, SKGActivityJournal, SKGProcessorContext, NSUserDefaults;

@interface CSEmbeddingsUpdater : NSObject <CSEventListenerDelegate> {
    NSArray *_asyncIndexProcessors;
    SKGProcessor *_skgProcessor;
    SKGProcessorContext *_skgProcessorContext;
    SKGActivityJournal *_activityJournal;
    NSUserDefaults *_defaults;
}

- (int)eventType;
- (id)config;
- (id)init;
- (id)description;
- (unsigned long long)eventFlags;
- (void).cxx_destruct;
- (id)taskName;
- (BOOL)journalItemHasItemEmbeddingsSN:(id)a0;
- (id)allowedBundlesFromUserDefaults;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (id)getEmbeddingWithCache2:(id)a0 key:(id)a1 bundleId:(id)a2;
- (id)getEmbeddingWithCache:(id)a0 key:(id)a1 bundleId:(id)a2;
- (id)getProcessorForIndexType:(int)a0;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (BOOL)isAcceptingJournals;
- (BOOL)journalItemHasNeedsEmbedding:(id)a0;
- (void)recordEmbeddingForThroughput:(id)a0 count:(unsigned int)a1;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (void)storeEmbeddingWithCache2:(id)a0 key:(id)a1 attributeSet:(id)a2 bundle:(id)a3;
- (void)storeEmbeddingWithCache:(id)a0 key:(id)a1 attributeSet:(id)a2;
- (BOOL)supportsCSIndexType:(int)a0;

@end

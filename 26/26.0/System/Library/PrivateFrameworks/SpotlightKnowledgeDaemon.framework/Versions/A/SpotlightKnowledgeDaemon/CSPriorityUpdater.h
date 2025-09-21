@class NSArray, NSUserDefaults;

@interface CSPriorityUpdater : NSObject <CSEventListenerDelegate> {
    NSArray *_asyncIndexProcessors;
    NSUserDefaults *_defaults;
}

+ (id)feedbackLock;

- (int)eventType;
- (id)config;
- (id)init;
- (id)description;
- (unsigned long long)eventFlags;
- (void).cxx_destruct;
- (id)taskName;
- (id)allowedBundlesFromUserDefaults;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (id)getProcessorForIndexType:(int)a0;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (BOOL)isAcceptingJournals;
- (void)recordEmbeddingForThroughput:(id)a0 count:(unsigned int)a1;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(int)a0;

@end

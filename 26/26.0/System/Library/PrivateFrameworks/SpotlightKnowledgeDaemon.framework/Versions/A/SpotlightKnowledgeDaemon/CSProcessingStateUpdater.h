@interface CSProcessingStateUpdater : NSObject <CSEventListenerDelegate>

- (int)eventType;
- (id)config;
- (id)description;
- (unsigned long long)eventFlags;
- (id)taskName;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (BOOL)isAcceptingJournals;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(int)a0;

@end

@interface CSDocumentUnderstandingUpdater : NSObject <CSEventListenerDelegate>

- (int)eventType;
- (id)config;
- (id)description;
- (unsigned long long)eventFlags;
- (id)taskName;
- (BOOL)journalItemIsSupportedDocument:(id)a0;
- (void)didCompleteJournal;
- (id)excludeBundleIDs;
- (long long)getItemDocumentType:(id)a0;
- (id)getStrForDUPersonalIDType:(long long)a0;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (BOOL)isAcceptingJournals;
- (BOOL)journalItemHasDocUnderstandingSN:(id)a0;
- (BOOL)journalItemNeedsDocUnderstanding:(id)a0;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(int)a0;

@end

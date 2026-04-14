@interface CSSuggestedEventsUpdater : NSObject <CSEventListenerDelegate>

+ (id)getAggregatedAttributeSet:(id)a0;
+ (void)extractSuggestedEventsForRecord:(id)a0 bundle:(id)a1 uniqueID:(id)a2 serialNumber:(id)a3 service:(id)a4 timeout:(double)a5 completionHandler:(id /* block */)a6;
+ (BOOL)journalItemHasIntValue:(id)a0 forKey:(const char *)a1;
+ (BOOL)journalItemHasSuggestedEventsSN:(id)a0;
+ (BOOL)journalItemNeedsSuggestedEvents:(id)a0;

- (int)eventType;
- (id)config;
- (id)description;
- (unsigned long long)eventFlags;
- (id)taskName;
- (id)excludeBundleIDs;
- (BOOL)handleDeletion:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (BOOL)handleDonation:(id)a0 turboEnabled:(BOOL)a1 completionHandler:(id /* block */)a2 cancelBlock:(id /* block */)a3;
- (id)includeBundleIDs;
- (BOOL)isAcceptingJournals;
- (BOOL)shouldHandleJournalItem:(id)a0 bundleID:(id)a1;
- (BOOL)supportsCSIndexType:(int)a0;

@end

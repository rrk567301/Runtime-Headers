@class NSString, NSMutableDictionary;
@protocol WBSHistoryConnectionProxy, HistoryDelegate;

@interface History : WBSHistory <WBSHistoryLoaderDelegate> {
    NSMutableDictionary *_lastImportedVisitDatesByBrowserBundleIdentifier;
    id<WBSHistoryConnectionProxy> _connectionProxy;
}

@property (weak, nonatomic) id<HistoryDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)warmUp;
+ (void)setShouldCheckIntegrityOnOpen:(BOOL)a0;
+ (void)setIsStringForUserTypedDomainExpansionInHistoryFunction;
+ (id)sharedHistory;

- (id)init;
- (void).cxx_destruct;
- (void)_startLoading;
- (id)itemForURL:(id)a0;
- (id)itemForURLString:(id)a0;
- (void)_setVisitedLinkTrackingEnabled:(BOOL)a0;
- (void)_removeAllVisitedLinks;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (void)historyStoreDidFailDatabaseIntegrityCheck:(id)a0;
- (void)historyLoaderDidFinishLoading:(id)a0;
- (BOOL)historyStoreShouldScheduleMaintenance:(id)a0;
- (void)clearHistoryVisitsAddedAfterDate:(id)a0 beforeDate:(id)a1 completionHandler:(id /* block */)a2;
- (Class)_historyItemClass;
- (id)_removeItemForURLString:(id)a0;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 statusCode:(long long)a6 origin:(long long)a7 attributes:(unsigned long long)a8;
- (id)_createHistoryStore;
- (void)_dispatchHistoryLoaded;
- (void)_addVisitedLinksForItemsIfNeeded:(id)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)enumerateItemsAsynchronouslyUsingBlock:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (id)itemVisitedAtURLString:(id)a0 title:(id)a1 timeOfVisit:(double)a2 wasHTTPNonGet:(BOOL)a3 wasFailure:(BOOL)a4 increaseVisitCount:(BOOL)a5 origin:(long long)a6 attributes:(unsigned long long)a7;
- (void)clearHistory;
- (void)savePendingChangesBeforeTerminationWithCompletionHandler:(id /* block */)a0;
- (void)populateVisitedLinkStore:(id)a0;
- (BOOL)shouldOmitURLString:(id)a0;
- (id)dateOfLatestImportedVisitForBundleIdentifier:(id)a0;
- (id)insertImportedVisitWithURLString:(id)a0 title:(id)a1 onDate:(id)a2 sourceBrowser:(id)a3;
- (void)updateHistoryAgeLimitFromPreferences;
- (id)initWithServiceConnectionProxy:(id)a0;

@end

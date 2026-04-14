@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)resultRecordsForQueries:(id)a0;
- (id)recentlyBreachedResultRecords;
- (void)clearRecentlyBreachedResultRecords;
- (void)addResultRecords:(id)a0;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void)clearAllResultsSynchronously;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)_saveResultsToPersistentStore;

@end

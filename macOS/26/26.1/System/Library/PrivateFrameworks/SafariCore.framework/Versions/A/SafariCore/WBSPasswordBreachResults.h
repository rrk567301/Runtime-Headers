@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (id)initWithContext:(id)a0;
- (id)resultRecordsForQueries:(id)a0;
- (void)clearAllResultsSynchronously;
- (id)recentlyBreachedResultRecords;
- (void)addResultRecords:(id)a0;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void).cxx_destruct;
- (void)clearRecentlyBreachedResultRecords;
- (void)_saveResultsToPersistentStore;

@end

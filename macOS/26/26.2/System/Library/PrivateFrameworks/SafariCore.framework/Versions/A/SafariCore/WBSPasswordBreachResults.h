@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (id)resultRecordsForQueries:(id)a0;
- (void)clearRecentlyBreachedResultRecords;
- (id)initWithContext:(id)a0;
- (void)_saveResultsToPersistentStore;
- (id)recentlyBreachedResultRecords;
- (void)addResultRecords:(id)a0;
- (void).cxx_destruct;
- (void)_restoreResultsFromPersistentStoreIfNecessary;
- (void)clearAllResultsSynchronously;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;

@end

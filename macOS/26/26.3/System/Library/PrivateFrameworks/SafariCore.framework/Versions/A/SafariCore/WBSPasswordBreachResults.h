@class NSMutableSet, NSMutableDictionary, WBSPasswordBreachContext;

@interface WBSPasswordBreachResults : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    WBSPasswordBreachContext *_context;
    NSMutableDictionary *_resultRecordsByPersistentIdentifier;
    NSMutableSet *_recentlyBreachedPersistentIdentifiers;
}

- (id)initWithContext:(id)a0;
- (void)clearAllResultsSynchronously;
- (id)recentlyBreachedResultRecords;
- (void)_saveResultsToPersistentStore;
- (id)resultRecordsForQueries:(id)a0;
- (void).cxx_destruct;
- (void)markAllCompromisedResultRecordsAsRecentlyBreached;
- (void)clearRecentlyBreachedResultRecords;
- (void)addResultRecords:(id)a0;
- (void)_restoreResultsFromPersistentStoreIfNecessary;

@end

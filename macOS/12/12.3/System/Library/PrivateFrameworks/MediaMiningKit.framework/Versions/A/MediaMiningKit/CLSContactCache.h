@class NSPredicate;

@interface CLSContactCache : CLSDBCache

@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifier;
@property (retain, nonatomic) NSPredicate *entryPredicateWithContactIdentifiers;
@property (retain, nonatomic) NSPredicate *entryPredicateWithUpdateTimestamp;

- (id)init;
- (void).cxx_destruct;
- (id)lastHistoryToken;
- (BOOL)setLastHistoryToken:(id)a0;
- (id)dataModelName;
- (void)invalidateCacheItemsBeforeDateWithTimestamp:(double)a0;
- (void)invalidateCacheItemForContactIdentifier:(id)a0;
- (BOOL)_updateHasPicture:(BOOL)a0 forEntry:(id)a1;
- (void)invalidateCacheItemsForContactIdentifiers:(id)a0;
- (BOOL)insertFaceprintAnalysisResult:(id)a0 forContactIdentifier:(id)a1;
- (BOOL)insertContactWithNoProfilePicture:(id)a0;
- (id)cachedContactForContactIdentifier:(id)a0;
- (unsigned long long)numberOfCachedContacts;
- (void)enumerateCachedEntriesUsingBlock:(id /* block */)a0;

@end

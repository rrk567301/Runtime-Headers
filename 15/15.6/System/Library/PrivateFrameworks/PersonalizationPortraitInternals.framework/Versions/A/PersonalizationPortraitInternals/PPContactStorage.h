@class CNContactStore, NSString, PPMeCardCacheManager, PPContactDiskCacheManager, NSObject, PPSQLDatabase;
@protocol OS_dispatch_queue, SGSuggestionsServiceContactsProtocol, OS_dispatch_semaphore;

@interface PPContactStorage : NSObject {
    CNContactStore *_contactsStore;
    NSObject<OS_dispatch_semaphore> *_concurrentContactQueryThrottleSem;
    NSObject<OS_dispatch_queue> *_concurrentContactQueryQueue;
    PPContactDiskCacheManager *_contactCacheManager;
    PPMeCardCacheManager *_meCardCacheManager;
    id<SGSuggestionsServiceContactsProtocol> _foundInAppsService;
    id /* block */ _foundInAppsHarvestStoreGetter;
    NSString *_path;
    PPSQLDatabase *_db;
    char _chineseBirthdayFound;
}

+ (id)normalizeHandle:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)meCard;
- (id)cachedSignificantContactHandles;
- (id)_joinResults:(id)a0;
- (id)_waitForGroup:(id)a0 results:(id)a1;
- (id)_waitForGroup:(id)a0 results:(id)a1 timeoutSeconds:(double)a2 explanationSet:(id)a3;
- (void)asyncFillResultsFromContactsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (void)asyncFillResultsFromFoundInAppsWithQuery:(id)a0 explanationSet:(id)a1 group:(id)a2 results:(id)a3;
- (char)chineseBirthdayFound;
- (void)clearChangeHistoryForClient:(id)a0 historyResult:(id)a1;
- (id)contactHandleSourceCountsWithMinimumSourceCount:(unsigned long long)a0;
- (id)contactHandlesForSource:(id)a0;
- (id)contactHandlesForTopics:(id)a0;
- (id)contactNameRecordsWithHistoryResult:(id)a0 truncated:(char *)a1 error:(id *)a2;
- (id)contactsChangeHistoryForClient:(id)a0 error:(id *)a1;
- (id)contactsContactsWithQuery:(id)a0 explanationSet:(id)a1 error:(id *)a2;
- (id)contactsWithQuery:(id)a0 explanationSet:(id)a1 timeoutSeconds:(id)a2 error:(id *)a3;
- (id /* block */)emailFilterWithQuery:(id)a0;
- (id)initWithDatabase:(id)a0 foundInAppsHarvestStoreGetter:(id /* block */)a1;
- (long long)insertIfNeededAndFetchIdentifierWithHandle:(id)a0 txnWitness:(id)a1;
- (char)iterAllNameRecordsFromAllSourcesWithError:(id *)a0 block:(id /* block */)a1;
- (void)loadChineseBirthdayFoundKVData;
- (id /* block */)nameFilterWithQuery:(id)a0;
- (id /* block */)phoneFilterWithQuery:(id)a0;
- (id /* block */)postalAddressFilterWithQuery:(id)a0;
- (unsigned long long)pruneOrphanedHandlesWithTxnWitness:(id)a0;
- (void)setCachedSignificantContactHandles:(id)a0;
- (void)setChineseBirthdayFound:(char)a0;
- (void)setChineseBirthdayFoundKVData;
- (id)sourcesForContactHandle:(id)a0;
- (void)storeHandleSourceMapWithHandles:(id)a0 sourceId:(long long)a1 txnWitness:(id)a2;

@end

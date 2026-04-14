@class _PASLock;

@interface _ATXDuetHelper : NSObject {
    _PASLock *_rootOfAppDataLock;
}

+ (id)sharedInstance;

- (void)_enumerateBatchesInDuetStream:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5 ascending:(BOOL)a6 block:(id /* block */)a7;
- (id)_queryDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (void)enumerateRelevantShortcutsAndBundleIdsBetweenStartDate:(id)a0 endDate:(id)a1 limit:(unsigned long long)a2 block:(id /* block */)a3;
- (id)init;
- (id)getScreenTransitionsBetweenStartDate:(id)a0 endDate:(id)a1;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 block:(id /* block */)a6;
- (id)getMostRecentMicroLocation;
- (id)_queryDuetStreamUnbatched:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6;
- (unsigned long long)_countDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4;
- (id)_queryDuetStreamUnbatched:(id)a0 startDate:(id)a1 endDate:(id)a2 ascending:(BOOL)a3 otherPredicates:(id)a4 limit:(unsigned long long)a5 offset:(unsigned long long)a6;
- (void)_enumerateBatchesInDuetStream:(id)a0 creationDateStart:(id)a1 creationDateEnd:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 ascending:(BOOL)a5 block:(id /* block */)a6;
- (void)_enumerateBatchesInDuetStream:(id)a0 startDate:(id)a1 endDate:(id)a2 otherPredicates:(id)a3 limit:(unsigned long long)a4 batchSize:(unsigned long long)a5 ascending:(BOOL)a6 block:(id /* block */)a7;
- (void).cxx_destruct;
- (id)getMicroLocationsFromLastMonth;

@end

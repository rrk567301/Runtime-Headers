@class SGSqlEntityStore, NSObject;
@protocol OS_dispatch_queue;

@interface SGDSpotlightCommander : NSObject {
    id _deviceStateToken;
    SGSqlEntityStore *_store;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedInstance;

- (void)requestReimportForHistoricalDataRequest:(id)a0;
- (BOOL)_unlocked;
- (void)requestReimportFromIdentifier:(id)a0 forPersonHandle:(id)a1 startDate:(id)a2 endDate:(id)a3;
- (id)_protectionClasses;
- (void)_executeReimportOfIdentifiers:(id)a0;
- (id)queryForPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2 contentTypes:(id)a3;
- (BOOL)_locked;
- (id)init;
- (id)metadata_reimportQueryForPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2 requestId:(unsigned long long)a3;
- (void)_unregisterForLockStateChange;
- (void)_issueCommand:(id)a0;
- (void)_reimportFromBundleId:(id)a0 protectionClasses:(id)a1 identifiers:(id)a2;
- (void).cxx_destruct;
- (void)metadata_reimportFromBundleId:(id)a0 protectionClasses:(id)a1 identifiers:(id)a2;
- (id)_reimportQueryForPersonHandle:(id)a0 startDate:(id)a1 endDate:(id)a2 requestId:(unsigned long long)a3;
- (void)_registerForLockStateChange;
- (void)_attemptToProcessRequests;
- (id)_getMailItemFromMailServiceForPath:(id)a0;

@end

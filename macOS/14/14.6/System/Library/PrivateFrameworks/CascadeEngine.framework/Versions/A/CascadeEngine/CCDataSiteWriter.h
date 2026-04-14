@class CCDataSite, CCSettings, NSObject;
@protocol OS_dispatch_queue, BMAccessAssertion;

@interface CCDataSiteWriter : NSObject {
    CCDataSite *_dataSite;
    CCSettings *_settings;
    NSObject<OS_dispatch_queue> *_queue;
    id<BMAccessAssertion> _accessAssertion;
}

- (id)description;
- (void).cxx_destruct;
- (BOOL)performMaintenance:(id /* block */)a0;
- (BOOL)_databaseExists;
- (BOOL)_cleanupDatabaseIfRequired;
- (BOOL)_didCompleteMaintenance:(id /* block */)a0;
- (BOOL)_executeDatabaseTransactionUsingBlock:(id /* block */)a0;
- (id)_loadOrCreateDatabase:(id *)a0;
- (id)initWithDataSite:(id)a0 settings:(id)a1 accessAssertion:(id)a2;
- (BOOL)submitDatabaseTransactionUsingBlock:(id /* block */)a0;

@end

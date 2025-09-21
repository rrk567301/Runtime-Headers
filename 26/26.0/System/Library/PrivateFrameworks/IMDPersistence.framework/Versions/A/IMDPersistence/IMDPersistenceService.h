@protocol IMDPersistentTaskQueries, IMDPersistenceService, IMDSpotlightActivityMonitorQueries, IMDSpotlightQueries, IMDRemoteDatabaseProtocol, IMDIndexingQueries;

@interface IMDPersistenceService : NSObject <IMDPersistenceService> {
    void /* unknown type, empty encoding */ listener;
}

@property (class, nonatomic, readonly) id<IMDPersistenceService> service;
@property (class, nonatomic, readonly) id<IMDPersistenceService> synchronousService;
@property (class, nonatomic, readonly) id<IMDPersistentTaskQueries> pTaskQueryProvider;
@property (class, nonatomic, readonly) id<IMDPersistentTaskQueries> synchronousPTaskQueryProvider;
@property (class, nonatomic, readonly) id<IMDIndexingQueries> indexingQueryProvider;
@property (class, nonatomic, readonly) id<IMDIndexingQueries> synchronousIndexingQueryProvider;
@property (class, nonatomic, readonly) id<IMDSpotlightQueries> spotlightQueryProvider;
@property (class, nonatomic, readonly) id<IMDSpotlightQueries> synchronousSpotlightQueryProvider;
@property (class, nonatomic, readonly) id<IMDSpotlightActivityMonitorQueries> spotlightActivityMonitorQueryProvider;
@property (class, nonatomic, readonly) id<IMDSpotlightActivityMonitorQueries> synchronousSpotlightActivityMonitorQueryProvider;
@property (class, nonatomic, readonly) id<IMDRemoteDatabaseProtocol> databaseQueryProvider;
@property (class, nonatomic, readonly) id<IMDRemoteDatabaseProtocol> synchronousDatabaseQueryProvider;

+ (void)reset;

- (id)init;
- (void).cxx_destruct;
- (id)initWithListener:(id)a0;
- (void)requestPersistenceServiceEndpointWithReply:(id /* block */)a0;
- (void)databaseQueryProviderWithBlock:(id /* block */)a0;
- (void)sendLegacyXPCCommandWithObject:(id)a0;
- (void)indexingQueryProviderWithBlock:(id /* block */)a0;
- (void)ptaskQueryProviderWithBlock:(id /* block */)a0;
- (void)sendLegacyXPCCommandWithObject:(id)a0 reply:(id /* block */)a1;
- (void)spotlightActivityMonitorQueryProviderWithBlock:(id /* block */)a0;
- (void)spotlightQueryProviderWithBlock:(id /* block */)a0;

@end

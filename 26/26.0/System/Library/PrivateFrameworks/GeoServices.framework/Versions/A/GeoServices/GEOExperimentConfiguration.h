@class NSString, GEOObserverHashTable, GEOABAssignmentResponse;
@protocol GEOExperimentServerProxy;

@interface GEOExperimentConfiguration : NSObject <GEOExperimentServerProxyDelegate> {
    id<GEOExperimentServerProxy> _serverProxy;
    GEOABAssignmentResponse *_experimentsInfo;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _experimentsInfoLock;
    GEOObserverHashTable *_experimentObservers;
}

@property (readonly, nonatomic) GEOABAssignmentResponse *experimentsInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)useProxy:(Class)a0;
+ (id)sharedConfiguration;

- (id)detailedDescription;
- (id)_debug_customQuerySubstringForType:(long long)a0 dispatcherRequestType:(int)a1;
- (void)serverProxy:(id)a0 didChangeExperimentsInfo:(id)a1;
- (id)experimentURLForURL:(id)a0 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (void)dealloc;
- (void)_debug_forEachExperimentType:(id /* block */)a0;
- (void)removeExperimentObserver:(id)a0;
- (id)_debug_datasetId;
- (void)_debug_setCustomQuerySubstring:(id)a0 forExperimentType:(long long)a1 dispatcherRequestType:(int)a2;
- (id)clientConfigurationValueForKey:(id)a0;
- (id)_mapsAbClientMetadata;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)a0;
- (id)_debug_configurationDate;
- (id)init;
- (id)_parsecClientMetadata;
- (id)_siriClientMetadata;
- (id)_reportAProblemClientMetadata;
- (id)clientConfig;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)a0;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)a0;
- (id)_debug_bucketId;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)a0;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)a0;
- (void)refreshDatasetABStatus:(id)a0;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)_debug_forceUpdate;
- (void)_debug_setActiveExperimentBranch:(id)a0;
- (id)fetchBucketIDWithError:(id *)a0;
- (void)addExperimentObserver:(id)a0 queue:(id)a1;
- (id)experimentAssignments;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchBucketID:(id /* block */)a0;
- (void)updateURLComponents:(id)a0 forRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;

@end

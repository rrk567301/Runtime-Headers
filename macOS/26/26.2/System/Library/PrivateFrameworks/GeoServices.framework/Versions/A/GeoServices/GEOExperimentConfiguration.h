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
- (id)detailedDescriptionDictionaryRepresentation;
- (id)_debug_customQuerySubstringForType:(long long)a0 dispatcherRequestType:(int)a1;
- (id)fetchBucketIDWithError:(id *)a0;
- (id)clientConfigurationValueForKey:(id)a0;
- (void)serverProxy:(id)a0 didChangeExperimentsInfo:(id)a1;
- (void)abAssignUUIDWithCompletionHandler:(id /* block */)a0;
- (void)addExperimentObserver:(id)a0 queue:(id)a1;
- (void)_debug_setActiveExperimentBranch:(id)a0;
- (void)refreshDatasetABStatus:(id)a0;
- (void)removeExperimentObserver:(id)a0;
- (id)_debug_bucketId;
- (void).cxx_destruct;
- (void)updateURLComponents:(id)a0 forRequestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (id)_debug_datasetId;
- (id)_mapsAbClientMetadata;
- (id)experimentURLForURL:(id)a0 requestKind:(struct { int x0; union { int x0; int x1; int x2; } x1; })a1;
- (id)_reportAProblemClientMetadata;
- (id)_debug_configurationDate;
- (void)_fetchAllAvailableExperimentsResponse:(id /* block */)a0;
- (id)_siriClientMetadata;
- (void)_debug_forceUpdate;
- (void)_setActiveExperimentBranchDictionaryRepresentation:(id)a0;
- (id)clientConfig;
- (void)fetchBucketID:(id /* block */)a0;
- (void)_debug_setCustomQuerySubstring:(id)a0 forExperimentType:(long long)a1 dispatcherRequestType:(int)a2;
- (id)init;
- (void)_debug_setBucketIdDictionaryRepresentation:(id)a0;
- (id)_parsecClientMetadata;
- (void)abAssignUUIDWithSyncCompletionHandler:(id /* block */)a0;
- (void)_debug_forEachExperimentType:(id /* block */)a0;
- (id)experimentAssignments;
- (void)_debug_fetchAllAvailableExperiments:(id /* block */)a0;
- (void)dealloc;

@end

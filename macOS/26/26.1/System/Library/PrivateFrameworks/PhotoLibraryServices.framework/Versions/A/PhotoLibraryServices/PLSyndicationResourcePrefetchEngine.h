@protocol PLSyndicationResourcePrefetchEngineDelegate;

@interface PLSyndicationResourcePrefetchEngine : NSObject

@property (readonly, weak, nonatomic) id<PLSyndicationResourcePrefetchEngineDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:(id)a0;
- (void)_handleDownloadFinishedWithSuccess:(BOOL)a0 error:(id)a1 resource:(id)a2 downloadThrottlingDate:(id)a3 networkAccessAllowed:(BOOL)a4 managedObjectContext:(id)a5;
- (void)_prepareResourceForPrefetch:(id)a0;
- (id)_resourcesForPrefetchWithManagedObjectContext:(id)a0 predicate:(id)a1 sortDescriptors:(id)a2;
- (id)_sortDescriptorsForResourcePrefetchImmediately:(BOOL)a0;
- (id)dateOfNextResourceToPrefetchWithManagedObjectContext:(id)a0;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;
- (void)prefetchResourceWithObjectID:(id)a0 completion:(id /* block */)a1;
- (void)prefetchResourceWithObjectIDs:(id)a0 completion:(id /* block */)a1;

@end

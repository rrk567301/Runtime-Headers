@class FPDExtensionManager;

@interface FPDCacheDeleteService : NSObject

@property (retain, nonatomic) FPDExtensionManager *extensionManager;

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)a0;

- (void).cxx_destruct;
- (void)start;
- (void)dumpStateTo:(id)a0;
- (void)registerActivity;
- (void)enumeratePurgeableFilesOnVolume:(id)a0 forUrgency:(int)a1 sizeOnly:(BOOL)a2 activity:(id)a3 handler:(id /* block */)a4;
- (id)nonPurgableSpacePerProviderOnVolume:(id)a0;
- (void)evictItems:(id)a0;
- (void)enumerateProviderDomainOnVolume:(id)a0 usingBlock:(id /* block */)a1;
- (id)allStorageVolumes;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)a0 activity:(id)a1;
- (BOOL)getVolume:(int *)a0 forPath:(id)a1;
- (void)enumerateFPFSDomainsUsingBlock:(id /* block */)a0;
- (id)volumesByProviderDomain;
- (id)queryWithAttributes:(id)a0;
- (BOOL)shouldSearchableItem:(id)a0 beEvictedAtUrgency:(int)a1;
- (id)evictableByProviderDomainID:(int)a0 activity:(id)a1;

@end

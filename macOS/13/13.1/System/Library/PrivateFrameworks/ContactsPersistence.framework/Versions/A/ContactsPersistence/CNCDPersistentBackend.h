@class NSString, CNPersistentStoreCoordinatorCache, NSPersistentStoreCoordinator;
@protocol CNAccountCollection, CNCDIOSLegacyIdentifierRegistration;

@interface CNCDPersistentBackend : NSObject <CNCDPersistenceBackend>

@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) id<CNAccountCollection> accountCollection;
@property (readonly, nonatomic) CNPersistentStoreCoordinatorCache *pscCache;
@property (readonly) id<CNCDIOSLegacyIdentifierRegistration> iOSLegacyIdentifierRegistrar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)os_log;
+ (id)backendWithAccountCollection:(id)a0;

- (void).cxx_destruct;
- (id)defaultContainer;
- (id)allContainers;
- (void)repairPersistenceStackIfNecessary;
- (void)applyDiff:(id)a0 toContainerWithIdentifier:(id)a1;
- (id)makePersistenceContextWithNotificationSource:(id)a0;
- (id)initWithPersistentStoreCoordinator:(id)a0 accountCollection:(id)a1 pscCache:(id)a2;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)a0;

@end

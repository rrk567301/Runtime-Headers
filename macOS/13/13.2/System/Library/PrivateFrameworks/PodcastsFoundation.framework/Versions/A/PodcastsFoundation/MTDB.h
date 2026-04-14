@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)libraryPath;
+ (void)setCorrupt:(BOOL)a0;
+ (BOOL)isCorrupt;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)createDatabaseIfNeeded;
+ (BOOL)canExtensionOpenDatabase;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (id)fetchManagedObjectModelFromDisk;
+ (void)isPodcastsAppCheck;
+ (long long)libraryDataVersion;
+ (long long)coreDataVersion;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)serpentIdMigrationComplete;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)loggingContext;
- (id)importContext;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)privateQueueContext;
- (id)carPlayContext;
- (id)storeContext;
- (id)resetableImportContext;
- (id)persistentStoreUuid;
- (id)contextForName:(id)a0;
- (void)addChangeNotifier:(id)a0;
- (void)removeChangeNotifier:(id)a0;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;

@end

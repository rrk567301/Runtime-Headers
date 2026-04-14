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
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (void)setCorrupt:(BOOL)a0;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (long long)coreDataVersion_deprecated;
+ (id)managedObjectModel;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (BOOL)serpentIdMigrationComplete;
+ (id)libraryShmPath;
+ (void)setSharedInstance:(id)a0;
+ (id)libraryWalPath;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (void)setCoreDataChecksum:(id)a0;
+ (id)libraryPath;
+ (BOOL)canExtensionOpenDatabase;
+ (BOOL)createDatabaseIfNeeded;
+ (BOOL)isCorrupt;
+ (void)isPodcastsAppCheck;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (id)coreDataChecksum;
+ (long long)libraryDataVersion;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;

- (id)managedObjectModel;
- (void).cxx_destruct;
- (id)init;
- (id)loggingContext;
- (id)contextForName:(id)a0;
- (id)playbackContext;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
- (id)createSingleUsePrivateContext:(id)a0;
- (id)importContext;
- (id)initWithCoreDataContainer:(id)a0 config:(id)a1;
- (id)mainOrPrivateContext;
- (id)mainQueueContext;
- (id)managedObjectIDForURI:(id)a0 error:(id *)a1;
- (id)persistentStoreUuid;
- (id)privateQueueContext;
- (void)removeChangeNotifier:(id)a0;
- (id)resetableImportContext;
- (id)storeContext;

@end

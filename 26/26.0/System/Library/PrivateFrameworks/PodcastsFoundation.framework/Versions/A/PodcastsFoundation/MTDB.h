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
+ (BOOL)createDatabaseIfNeeded;
+ (long long)coreDataVersion_deprecated;
+ (void)setCorrupt:(BOOL)a0;
+ (id)managedObjectModel;
+ (long long)libraryDataVersion;
+ (void)isPodcastsAppCheck;
+ (BOOL)isCorrupt;
+ (id)libraryPath;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (id)libraryWalPath;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (id)libraryShmPath;
+ (id)coreDataChecksum;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)canExtensionOpenDatabase;
+ (void)setSharedInstance:(id)a0;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (void)setCoreDataChecksum:(id)a0;
+ (BOOL)serpentIdMigrationComplete;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
- (id)loggingContext;
- (id)contextForName:(id)a0;
- (id)playbackContext;
- (void)addChangeNotifier:(id)a0;
- (id)carPlayContext;
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

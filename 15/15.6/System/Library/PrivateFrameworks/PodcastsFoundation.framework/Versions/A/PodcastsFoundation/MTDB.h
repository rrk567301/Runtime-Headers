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
+ (void)setCorrupt:(char)a0;
+ (char)isCorrupt;
+ (void)setSharedInstance:(id)a0;
+ (long long)coreDataVersion;
+ (id)fetchManagedObjectModelFromDisk;
+ (char)canExtensionOpenDatabase;
+ (char)createDatabaseIfNeeded;
+ (void)isPodcastsAppCheck;
+ (long long)libraryDataVersion;
+ (id)libraryShmPath;
+ (id)libraryWalPath;
+ (char)needsCacheBustForFreeAndPaidUrlStorage;
+ (char)needsMigrationToDeltaFeedUpdates;
+ (char)needsSerpentIdEpisodeMigration;
+ (char)quickCheckForNeedsContainerMigration;
+ (char)serpentIdMigrationComplete;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setQuickCheckForNeedsContainerMigration:(char)a0;
+ (void)setSerpentIdMigrationComplete:(char)a0;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;

- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
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

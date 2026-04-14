@class NSString, MTCoreDataContainer;
@protocol MTCoreDataContainerConfigProvider;

@interface MTDB : NSObject <NSManagedObjectContextProvider>

@property (retain, nonatomic) MTCoreDataContainer *coreDataContainer;
@property (retain, nonatomic) id<MTCoreDataContainerConfigProvider> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedObjectModel;
+ (id)sharedInstance;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)isCorrupt;
+ (id)coreDataChecksum;
+ (BOOL)canExtensionOpenDatabase;
+ (id)libraryShmPath;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (void)setCorrupt:(BOOL)a0;
+ (id)libraryPath;
+ (long long)libraryDataVersion;
+ (void)isPodcastsAppCheck;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (id)libraryWalPath;
+ (void)setCoreDataChecksum:(id)a0;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)serpentIdMigrationComplete;
+ (long long)coreDataVersion_deprecated;
+ (void)setCoreDataVersion:(long long)a0;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (BOOL)createDatabaseIfNeeded;

- (id)managedObjectModel;
- (id)init;
- (void).cxx_destruct;
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

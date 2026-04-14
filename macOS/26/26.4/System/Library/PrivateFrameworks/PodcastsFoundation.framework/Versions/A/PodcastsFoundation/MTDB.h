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
+ (long long)coreDataVersion_deprecated;
+ (BOOL)createDatabaseIfNeeded;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (void)setCoreDataChecksum:(id)a0;
+ (void)isPodcastsAppCheck;
+ (BOOL)canExtensionOpenDatabase;
+ (id)coreDataChecksum;
+ (void)setLibraryDataVersion:(long long)a0;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (BOOL)serpentIdMigrationComplete;
+ (id)managedObjectModel;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (id)libraryWalPath;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setSharedInstance:(id)a0;
+ (long long)libraryDataVersion;
+ (void)setCoreDataVersion:(long long)a0;
+ (BOOL)isCorrupt;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (id)libraryShmPath;
+ (id)libraryPath;

- (void).cxx_destruct;
- (id)managedObjectModel;
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

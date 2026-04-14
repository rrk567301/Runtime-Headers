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
+ (BOOL)isCorrupt;
+ (void)setStoreBothFreeAndPaidUrlsPreviousBootup;
+ (long long)coreDataVersion_deprecated;
+ (long long)libraryDataVersion;
+ (void)setSharedInstance:(id)a0;
+ (BOOL)needsCacheBustForFreeAndPaidUrlStorage;
+ (void)setCoreDataChecksum:(id)a0;
+ (id)libraryShmPath;
+ (BOOL)createDatabaseIfNeeded;
+ (BOOL)needsSerpentIdEpisodeMigration;
+ (void)setLibraryDataVersion:(long long)a0;
+ (BOOL)needsMigrationToDeltaFeedUpdates;
+ (id)libraryPath;
+ (id)libraryWalPath;
+ (BOOL)quickCheckForNeedsContainerMigration;
+ (id)coreDataChecksum;
+ (void)setSerpentIdMigrationComplete:(BOOL)a0;
+ (void)setMigrationToDeltaFeedUpdatesComplete;
+ (void)setCoreDataVersion:(long long)a0;
+ (void)setQuickCheckForNeedsContainerMigration:(BOOL)a0;
+ (BOOL)serpentIdMigrationComplete;
+ (id)managedObjectModel;
+ (void)isPodcastsAppCheck;
+ (BOOL)canExtensionOpenDatabase;
+ (void)setCorrupt:(BOOL)a0;

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

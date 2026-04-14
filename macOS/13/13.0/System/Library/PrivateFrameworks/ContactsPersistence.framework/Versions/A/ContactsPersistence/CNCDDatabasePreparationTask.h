@class NSString, NSPersistentStoreCoordinator, NSURL, CNPersistentStoreDescription, NSPersistentStore, NSError;
@protocol CNCDIOSLegacyIdentifierRegistration;

@interface CNCDDatabasePreparationTask : CNTask

@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) BOOL shouldCreateEmptyDatabase;
@property (readonly, nonatomic) NSString *path;
@property (getter=isPristineDatabase) BOOL pristineDatabase;
@property BOOL shouldCachePSC;
@property BOOL didMigrate;
@property BOOL shouldAddAsReadOnly;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;
@property (readonly, nonatomic) CNPersistentStoreDescription *storeDescription;
@property (retain) NSPersistentStore *store;
@property (readonly, nonatomic) id<CNCDIOSLegacyIdentifierRegistration> legacyIdentifierRegistrar;
@property (copy) NSError *error;
@property (copy, nonatomic) NSURL *addedStoreURL;

+ (id)defaultDatabaseDirectory;
+ (id)preparationTaskWithRequest:(id)a0;
+ (BOOL)wouldLikeToHandleRequestInProcess:(id)a0;
+ (id)inProcessPreparationTaskWithRequest:(id)a0;
+ (id)outOfProcessPreparationTaskWithRequest:(id)a0;
+ (BOOL)shouldCreateEmptyDatabaseGivenURL:(id)a0;
+ (void)configureLegacyIdentifierDefaultsInManagedObjectModel:(id)a0;
+ (BOOL)shouldTryAutomaticMigrationAfterError:(id)a0;
+ (id)coordinatorWithUnconstrainedModel;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)managedObjectModel;
- (id)initWithRequest:(id)a0;
- (id)run:(id *)a0;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1 legacyIdentifierRegistrar:(id)a2;
- (void)setUpInitialState;
- (void)preflightDatabaseFile;
- (void)removeDotNewPathForDatabasePath;
- (void)tryToAddPersistentStore;
- (void)addSqlitePersistentStoreWithURL:(id)a0;
- (void)_coreDataR10319914Hack:(id)a0;
- (void)importMeCard;
- (BOOL)databaseConstraintCleanupNeeded;
- (void)migrateToUnconstrainedDatabaseAndRepairConstraintViolations;
- (id)urlByCopyingToTemporaryUrl:(id)a0;
- (void)rebuildIOSLegacyIdentifiersIfNeeded;
- (BOOL)databaseMigrationNeeded;
- (void)migrateCustomPropertiesInContext:(id)a0 store:(id)a1;
- (void)consolidateDuplicateContainersInContext:(id)a0 store:(id)a1;
- (void)migrateLabels;
- (void)migratePhoneNumbers;
- (void)migrateOrphanProperties;
- (void)migrateContactIndex;
- (void)promotePreviouslyUnknownPropertiesToKnownProperties;
- (void)migrateCardDAVLegacyCustomProperties;
- (void)adoptRecordsIntoContainers;
- (void)cleanUpDuplicateInfoObjects;
- (void)moveFilesystemPhotosIntoCoreData;
- (void)moveAsideDatabaseIfNeeded;
- (void)moveAsideDatabaseWithReason:(id)a0 message:(id)a1;
- (void)moveAsideDatabaseAtPath:(id)a0 reason:(id)a1;
- (BOOL)didAddStore;
- (void)updateMetdataIfNeeded;
- (BOOL)shouldUpdateMetadata;
- (void)updateMetdata;
- (void)emptySaveIfNeeded;
- (void)logFailureMessage;
- (id)prepareReturnValue;
- (id)optionsWithoutMigrationForStoreAtUrl:(id)a0;
- (id)optionsWithMigrationForStoreAtUrl:(id)a0;
- (unsigned long long)storeOptionsWithMigrateIfNecessary:(BOOL)a0;

@end

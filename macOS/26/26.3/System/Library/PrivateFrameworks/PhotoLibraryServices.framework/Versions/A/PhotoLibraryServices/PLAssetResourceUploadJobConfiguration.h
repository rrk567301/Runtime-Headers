@class NSString, NSSet, NSDate;

@interface PLAssetResourceUploadJobConfiguration : PLManagedObject

@property (nonatomic) BOOL needsPersistenceUpdate;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSDate *completionDate;
@property (nonatomic) short attemptCount;
@property (retain, nonatomic) NSSet *uploadJobs;
@property (nonatomic) short state;

+ (id)entityName;
+ (id)_configurationWithPredicate:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (id)configurationWithBundleIdentifier:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (id)configurationWithObjectID:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (id)configurationWithUUID:(id)a0 managedObjectContext:(id)a1 error:(id *)a2;
+ (unsigned long long)countOfConfigurationsInContext:(id)a0 error:(id *)a1;
+ (id)fetchAllConfigurationsInContext:(id)a0 error:(id *)a1;
+ (id)insertIntoManagedObjectContext:(id)a0 uuid:(id)a1 bundleID:(id)a2;
+ (void)rebuildWithLibrary:(id)a0;
+ (void)signalPendingBackgroundProcessingForLibrary:(id)a0;
+ (void)signalPendingBackgroundUploadWorkItemForLibrary:(id)a0;

- (void)willSave;
- (void)didSave;
- (id)payloadForChangedKeys:(id)a0;
- (void)prepareForDeletion;
- (id)payloadID;
- (id)payloadIDForTombstone:(id)a0;
- (BOOL)_isValidForJournalPersistenceOnDCIM;

@end

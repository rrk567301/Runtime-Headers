@class NSString, NSArray, CKSyncEngineState, CKDatabase;
@protocol CKSyncEngineDataSource;

@interface CKSyncEngine : NSObject {
    void /* unknown type, empty encoding */ swiftEngine;
    void /* unknown type, empty encoding */ delegateAdapter;
}

@property (nonatomic) BOOL automaticSyncingEnabled;
@property (nonatomic, readonly) NSString *syncBackgroundTaskIdentifier;
@property (nonatomic, readonly) BOOL useOpportunisticPushTopic;
@property (nonatomic, readonly) NSArray *recordIDsToSave;
@property (nonatomic, readonly) NSArray *recordIDsToDelete;
@property (nonatomic, readonly) BOOL hasPendingModifications;
@property (nonatomic, readonly) id<CKSyncEngineDataSource> dataSource;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) CKDatabase *database;
@property (nonatomic, readonly) CKSyncEngineState *state;

- (void)setHasPendingModifications;
- (void)setNeedsToSaveRecordZones:(id)a0 needsToSave:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (void)setNeedsToDeleteRecordZones:(id)a0 needsToDelete:(BOOL)a1;
- (void)modifyPendingChangesWithCompletionHandler:(id /* block */)a0;
- (void)fetchChangesWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)addRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (id)init;
- (id)initWithDeprecatedConfiguration:(id)a0;
- (void)cancelOperationsWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)sendChangesWithOptions:(id)a0 completionHandler:(id /* block */)a1;
- (void)modifyPendingChangesInZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)setNeedsToSaveRecords:(id)a0 needsToSave:(BOOL)a1;
- (void)setNeedsToDeleteRecords:(id)a0 needsToDelete:(BOOL)a1;
- (void)removeRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)fetchChangesForZoneIDs:(id)a0 completionHandler:(id /* block */)a1;
- (void)setNeedsToFetchChanges;
- (void)scheduleSync;
- (void)fetchChangesWithCompletionHandler:(id /* block */)a0;
- (void)removeRecordZonesToSave:(id)a0 recordZoneIDsToDelete:(id)a1;
- (void)addRecordIDsToSave:(id)a0 recordIDsToDelete:(id)a1;
- (void)sendChangesWithCompletionHandler:(id /* block */)a0;

@end

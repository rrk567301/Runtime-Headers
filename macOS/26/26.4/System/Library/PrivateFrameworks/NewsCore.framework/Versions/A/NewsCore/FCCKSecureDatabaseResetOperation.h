@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) BOOL deleteZones;
@property (nonatomic) BOOL restoreSecureSentinel;
@property (nonatomic) BOOL restoreZoneContents;
@property (copy, nonatomic) id /* block */ resetCompletionHandler;

- (void)operationWillFinishWithError:(id)a0;
- (BOOL)validateOperation;
- (void)performOperation;
- (void).cxx_destruct;
- (id)init;
- (id)_deleteZones;
- (id)_rawRecordsToSave;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;

@end

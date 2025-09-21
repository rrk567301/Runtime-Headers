@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation

@property (retain, nonatomic) FCCKPrivateDatabase *database;
@property (nonatomic) char deleteZones;
@property (nonatomic) char restoreSecureSentinel;
@property (nonatomic) char restoreZoneContents;
@property (copy, nonatomic) id /* block */ resetCompletionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)performOperation;
- (void)operationWillFinishWithError:(id)a0;
- (char)validateOperation;
- (id)_deleteZones;
- (id)_rawRecordsToSave;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;

@end

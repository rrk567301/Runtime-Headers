@class NSString;

@interface BRCReadWriteClientDatabaseFacade : BRCClientDatabaseFacade <BRCClientDatabaseWriteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (char)saveAppLibrary:(id)a0;
- (void)captureSyncErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 errorMessage:(id)a2 underlyingError:(id)a3 serviceCode:(int)a4;
- (void)clearSyncErrorForItemWithRowID:(unsigned long long)a0 serviceCode:(int)a1;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (char)saveAppLibrary:(id)a0 supportsEnhancedDrivePrivacy:(char)a1;
- (void)scheduleFlushWithCheckpoint:(char)a0 whenFlushed:(id /* block */)a1;
- (char)updateClientStateData:(id)a0;
- (char)updateClientStateDictionary:(id)a0;

@end

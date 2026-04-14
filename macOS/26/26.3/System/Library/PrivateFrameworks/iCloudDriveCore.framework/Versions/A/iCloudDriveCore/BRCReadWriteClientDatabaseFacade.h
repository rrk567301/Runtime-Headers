@class NSString;

@interface BRCReadWriteClientDatabaseFacade : BRCClientDatabaseFacade <BRCClientDatabaseWriteProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)scheduleFlushWithCheckpoint:(BOOL)a0 whenFlushed:(id /* block */)a1;
- (void)flush;
- (void)flushToMakeEditsVisibleToIPCReaders;
- (BOOL)saveAppLibrary:(id)a0;
- (void)captureSyncErrorForItemWithRowID:(unsigned long long)a0 error:(id)a1 errorMessage:(id)a2 underlyingError:(id)a3 serviceCode:(int)a4;
- (void)clearSyncErrorForItemWithRowID:(unsigned long long)a0 serviceCode:(int)a1;
- (void)finishDownloadJobForThrottleID:(id)a0 stageID:(id)a1 record:(id)a2 downloadError:(id)a3 downloadKind:(int)a4 etag:(id)a5 newState:(int)a6 newTransferQueue:(id)a7;
- (id)initWithDB:(id)a0 workloop:(id)a1;
- (BOOL)saveAppLibrary:(id)a0 supportsEnhancedDrivePrivacy:(BOOL)a1;
- (BOOL)updateClientStateData:(id)a0;
- (BOOL)updateClientStateDictionary:(id)a0;

@end

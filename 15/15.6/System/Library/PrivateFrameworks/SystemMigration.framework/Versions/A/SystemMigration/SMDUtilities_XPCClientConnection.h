@interface SMDUtilities_XPCClientConnection : SMDXPCClientConnection <SMDUtilitiesProtocol>

@property unsigned int uid;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)prepareToShove:(id /* block */)a0;
- (id)currentAPFSPrebootUUID;
- (id)initForUID:(unsigned int)a0;
- (void)lockVolumeKeybagForUID:(unsigned int)a0 andReply:(id /* block */)a1;
- (void)obtainTotalSizeOfOtherUsersOnSystemWithCompletionBlock:(id /* block */)a0 recalculationPermitted:(char)a1 includeUsers:(id)a2;
- (char)prepareBaseSystemForMigrationMode:(unsigned long long)a0;
- (void)prepareToShoveAndRunTemplateMigration:(id /* block */)a0;
- (void)removePreviousSystemFolderWithAuthorization:(id)a0 andReply:(id /* block */)a1;
- (void)removePreviousSystemFolderWithReply:(id /* block */)a0 fromDirectory:(id)a1;
- (void)sendDeletionProgressUpdateFile:(unsigned long long)a0 andBytes:(unsigned long long)a1;
- (void)sendUserSizeProgressUpdate:(unsigned long long)a0;
- (void)unlockVolumeKeybagForUID:(unsigned int)a0 withACM:(id)a1 andReply:(id /* block */)a2;
- (void)unmarkODRecordAfterMigrationWithReply:(id /* block */)a0;
- (char)writeBaseSystemMigrationBootPlist:(id)a0;
- (char)writeMigrationBaseSystemCookie:(id)a0 withMode:(unsigned long long)a1;

@end

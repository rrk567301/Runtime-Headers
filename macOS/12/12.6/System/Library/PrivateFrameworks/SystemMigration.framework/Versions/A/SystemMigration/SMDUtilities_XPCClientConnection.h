@interface SMDUtilities_XPCClientConnection : SMDXPCClientConnection <SMDUtilitiesProtocol>

@property unsigned int uid;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (id)initForUID:(unsigned int)a0;
- (void)unmarkODRecordAfterMigrationWithReply:(id /* block */)a0;
- (void)unlockVolumeKeybagForUID:(unsigned int)a0 withACM:(id)a1 andReply:(id /* block */)a2;
- (void)lockVolumeKeybagForUID:(unsigned int)a0 andReply:(id /* block */)a1;
- (void)enrollIntoBetaProgram:(long long)a0 andReply:(id /* block */)a1;
- (void)prepareToShove:(id /* block */)a0;
- (void)removePreviousSystemFolderWithAuthorization:(id)a0 andReply:(id /* block */)a1;
- (void)obtainTotalSizeOfOtherUsersOnSystemWithCompletionBlock:(id /* block */)a0 recalculationPermitted:(BOOL)a1 includeUsers:(id)a2;
- (id)currentAPFSPrebootUUID;
- (BOOL)writeMigrationBaseSystemCookie:(id)a0;
- (void)removePreviousSystemFolderWithReply:(id /* block */)a0 fromDirectory:(id)a1;
- (void)sendDeletionProgressUpdateFile:(unsigned long long)a0 andBytes:(unsigned long long)a1;
- (void)sendUserSizeProgressUpdate:(unsigned long long)a0;
- (BOOL)writeBaseSystemMigrationBootPlist:(id)a0;

@end

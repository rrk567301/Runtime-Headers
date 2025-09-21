@interface BackupServer : NSObject

+ (id)sharedServer;

- (id)sessionStatus;
- (id)_copyConnectionForRootService:(const char *)a0 error:(out id *)a1;
- (char)addAdvisoryForDatabaseFile:(id)a0 lockProxy:(char)a1;
- (id)currentBackupPhase;
- (char)isHealthCheckRunning;
- (id)mountDestinationForID:(id)a0 mountImage:(char)a1 error:(id *)a2;
- (char)removeAdvisoryForDatabaseFile:(id)a0;
- (char)startBackup:(unsigned long long)a0 forDestinationID:(id)a1 options:(int)a2 error:(id *)a3;

@end

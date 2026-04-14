@class NSString, NSObject;

@interface ISyncFileLocker : NSObject {
    NSString *_path;
    NSString *_hostname;
    NSString *_hostuuid;
    NSObject *_delegate;
    double _secondsToTimeout;
    int _lockResult;
}

+ (void)cleanupStaleLockDirectories;
+ (id)stringFromISyncLockPotentialAction:(int)a0;
+ (id)stringFromISyncLockResult:(int)a0;
+ (void)_cleanupStaleLockDirectoriesAtPath:(id)a0;

- (void)dealloc;
- (int)lock;
- (id)UUIDString;
- (void)unlock;
- (id)path;
- (unsigned long long)refCount;
- (void)refresh;
- (id)lockFilePath;
- (id)initWithPath:(id)a0 delegate:(id)a1 timeout:(double)a2;
- (void)removeLockDirectory;
- (void)cleanupStaleLockDirectories;
- (id)computeHostname;
- (int)lockFileResultByAnalyzingLockFile:(id)a0 reasonIfStealable:(out id *)a1;
- (BOOL)incrementCountAndReturnError:(id *)a0;
- (id)lockDirectoryPath;
- (BOOL)createLockDirectory:(id *)a0;
- (BOOL)removeLockDirectoryAndReturnError:(id *)a0;
- (id)lockFileContentsDictionary;
- (id)lockInfoForDelegate:(id)a0;
- (int)actionOnVerifyLockInfoFileAgainstCurrentProcess:(id)a0 reason:(out id *)a1;
- (BOOL)decrementCountAndReturnError:(id *)a0;
- (BOOL)updateLockFileAndReturnError:(id *)a0;
- (BOOL)changeRetainCountIncrementing:(BOOL)a0 error:(id *)a1;
- (int)actionTestingDirectoryExistance:(id)a0;
- (int)actionOnVerifyIfLockInfoFileProcessIsRunning:(id)a0 reason:(out id *)a1;
- (int)actionOnVerifyFileAgeAndReturnReason:(out id *)a0;
- (id)processProfile;
- (BOOL)writeLockInfoFile:(id)a0 error:(id *)a1;
- (id)staleLockDirectoryPath;
- (BOOL)matchesHostUUIDFromLockDictionary:(id)a0;
- (BOOL)matchesHostNameFromLockDictionary:(id)a0;
- (BOOL)_checkPIDisRunning:(long long)a0;
- (BOOL)isOnLocalHost;
- (BOOL)isLockStaleOnNFS;
- (int)actionForApparentlyAbandonedLock:(id)a0 onAttempt:(int)a1;

@end

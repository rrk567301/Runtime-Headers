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
+ (id)stringFromISyncLockResult:(int)a0;
+ (id)stringFromISyncLockPotentialAction:(int)a0;
+ (void)_cleanupStaleLockDirectoriesAtPath:(id)a0;

- (void)dealloc;
- (id)UUIDString;
- (int)lock;
- (void)unlock;
- (id)path;
- (unsigned long long)refCount;
- (void)refresh;
- (id)lockFilePath;
- (void)cleanupStaleLockDirectories;
- (id)initWithPath:(id)a0 delegate:(id)a1 timeout:(double)a2;
- (void)removeLockDirectory;
- (id)lockDirectoryPath;
- (id)staleLockDirectoryPath;
- (BOOL)incrementCountAndReturnError:(id *)a0;
- (BOOL)decrementCountAndReturnError:(id *)a0;
- (id)lockFileContentsDictionary;
- (id)lockInfoForDelegate:(id)a0;
- (int)lockFileResultByAnalyzingLockFile:(id)a0 reasonIfStealable:(out id *)a1;
- (BOOL)isLockStaleOnNFS;
- (BOOL)writeLockInfoFile:(id)a0 error:(id *)a1;
- (BOOL)updateLockFileAndReturnError:(id *)a0;
- (BOOL)removeLockDirectoryAndReturnError:(id *)a0;
- (int)actionTestingDirectoryExistance:(id)a0;
- (int)actionOnVerifyLockInfoFileAgainstCurrentProcess:(id)a0 reason:(out id *)a1;
- (int)actionOnVerifyFileAgeAndReturnReason:(out id *)a0;
- (BOOL)_checkPIDisRunning:(long long)a0;
- (int)actionOnVerifyIfLockInfoFileProcessIsRunning:(id)a0 reason:(out id *)a1;
- (BOOL)createLockDirectory:(id *)a0;
- (BOOL)isOnLocalHost;
- (id)computeHostname;
- (BOOL)matchesHostNameFromLockDictionary:(id)a0;
- (BOOL)matchesHostUUIDFromLockDictionary:(id)a0;
- (id)processProfile;
- (BOOL)changeRetainCountIncrementing:(BOOL)a0 error:(id *)a1;
- (int)actionForApparentlyAbandonedLock:(id)a0 onAttempt:(int)a1;

@end

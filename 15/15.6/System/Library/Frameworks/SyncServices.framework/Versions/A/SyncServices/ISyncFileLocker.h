@class NSString, NSObject;

@interface ISyncFileLocker : NSObject {
    NSString *_path;
    NSString *_hostname;
    NSString *_hostuuid;
    NSObject *_delegate;
    double _secondsToTimeout;
    int _lockResult;
}

+ (void)_cleanupStaleLockDirectoriesAtPath:(id)a0;
+ (void)cleanupStaleLockDirectories;
+ (id)stringFromISyncLockPotentialAction:(int)a0;
+ (id)stringFromISyncLockResult:(int)a0;

- (void)dealloc;
- (id)UUIDString;
- (int)lock;
- (id)path;
- (void)unlock;
- (void)refresh;
- (unsigned long long)refCount;
- (id)lockFilePath;
- (id)computeHostname;
- (char)_checkPIDisRunning:(long long)a0;
- (int)actionForApparentlyAbandonedLock:(id)a0 onAttempt:(int)a1;
- (int)actionOnVerifyFileAgeAndReturnReason:(out id *)a0;
- (int)actionOnVerifyIfLockInfoFileProcessIsRunning:(id)a0 reason:(out id *)a1;
- (int)actionOnVerifyLockInfoFileAgainstCurrentProcess:(id)a0 reason:(out id *)a1;
- (int)actionTestingDirectoryExistance:(id)a0;
- (char)changeRetainCountIncrementing:(char)a0 error:(id *)a1;
- (void)cleanupStaleLockDirectories;
- (char)createLockDirectory:(id *)a0;
- (char)decrementCountAndReturnError:(id *)a0;
- (char)incrementCountAndReturnError:(id *)a0;
- (id)initWithPath:(id)a0 delegate:(id)a1 timeout:(double)a2;
- (char)isLockStaleOnNFS;
- (char)isOnLocalHost;
- (id)lockDirectoryPath;
- (id)lockFileContentsDictionary;
- (int)lockFileResultByAnalyzingLockFile:(id)a0 reasonIfStealable:(out id *)a1;
- (id)lockInfoForDelegate:(id)a0;
- (char)matchesHostNameFromLockDictionary:(id)a0;
- (char)matchesHostUUIDFromLockDictionary:(id)a0;
- (id)processProfile;
- (void)removeLockDirectory;
- (char)removeLockDirectoryAndReturnError:(id *)a0;
- (id)staleLockDirectoryPath;
- (char)updateLockFileAndReturnError:(id *)a0;
- (char)writeLockInfoFile:(id)a0 error:(id *)a1;

@end

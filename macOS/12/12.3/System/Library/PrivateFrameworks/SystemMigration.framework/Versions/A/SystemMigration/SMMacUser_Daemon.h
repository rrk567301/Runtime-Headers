@class NSLock, NSURL, SMDBEntry, NSMutableDictionary, NSMutableSet, NSMutableArray, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface SMMacUser_Daemon : SMUser_Daemon {
    NSMutableSet *_userExcludedPathList;
    NSURL *_cachedAbsHomeDir;
    NSURL *_picturePath;
    NSNumber *_cachedHomeDirSize;
    NSLock *_cachedHomeDirSizeLock;
    BOOL _calculatingHome;
    BOOL _homeDirSearchComplete;
    BOOL _homeDirToBeCopiedByMigration;
    BOOL _needsAttention;
}

@property (retain) NSMutableArray *allOtherFilesInDirectory;
@property (retain) SMDBEntry *backing;
@property BOOL isAdminUser;
@property (retain) NSObject<OS_dispatch_queue> *sizingQueue;
@property (retain) NSObject<OS_dispatch_queue> *excludablePathQueue;
@property (retain) NSMutableDictionary *supportedPathListSizes;
@property (retain) NSMutableDictionary *supportedPathListCounts;
@property (readonly, getter=isDisabled) BOOL disabled;
@property (readonly, getter=isSecureTokenAuth) BOOL secureTokenAuth;
@property BOOL isAutoLoginUser;
@property BOOL shouldUseAlternateFileVaultHomeDirPath;

+ (id)pathsToNeverCopy;
+ (id)filevaultAlternateHomeDirPath:(id)a0;

- (id)description;
- (id)name;
- (void).cxx_destruct;
- (id)password;
- (unsigned int)uid;
- (id)UUID;
- (Class)clientClass;
- (id)fullName;
- (id)authenticationType;
- (id)fullDescription;
- (unsigned int)gid;
- (id)picturePath;
- (id)entriesForKey:(id)a0;
- (id)relativeHomeDir;
- (BOOL)filevault;
- (BOOL)homeDirToBeCopiedByMigration;
- (BOOL)portableHomeUser;
- (id)iCloudNames;
- (id)currentAbsolutePathToHomeDir;
- (id)pathsExcludedByTheUser;
- (void)addUserExcludedPath:(id)a0;
- (id)_getEntry:(id)a0 atIndex:(int)a1;
- (id)modernICloudNames;
- (id)oldICloudNames;
- (id)_fileVaultImagePath;
- (id)picturePathFromDB;
- (id)embeddedDSPicture;
- (id)pathsExcludableByTheUserWithPather:(id)a0;
- (id)sizeAndCount:(unsigned long long *)a0 ofDataToCopySizingQueueWithPather:(id)a1;
- (void)setHomeDirSize:(id)a0;
- (id)totalHomeDirectorySizeAndCount:(unsigned long long *)a0 withPather:(id)a1;
- (id)sizeAndCount:(unsigned long long *)a0 forSubPath:(id)a1 withPather:(id)a2;
- (BOOL)homeDirIsRedirected;
- (BOOL)__homeDirToBeCopiedByMigration;
- (id)pathsExcluded;
- (void)addUserExcludedPaths:(id)a0;
- (void)removeUserExcludedPath:(id)a0;
- (BOOL)hasUserExcludedPath:(id)a0;
- (void)clearHomeDirectoryCaches;
- (id)extraString:(id)a0 withColor:(id)a1;
- (BOOL)dontNeedToCopyUserHome;
- (id)iCloudIdentifiers;
- (id)iCloudName;
- (BOOL)isRoleUser;
- (id)accountPicture;
- (id)homeDirOnNetworkSystem;
- (id)filevaultAlternateHomeDirPath;
- (id)passwordFilePath;
- (id)homeDirSize;
- (void)calculateHomeDirSizeWithPather:(id)a0 callbackBlock:(id /* block */)a1;
- (id)sizeAndCount:(unsigned long long *)a0 ofDataToCopyWithPather:(id)a1;
- (id)_initWithEntry:(id)a0 fromSystem:(id)a1;

@end

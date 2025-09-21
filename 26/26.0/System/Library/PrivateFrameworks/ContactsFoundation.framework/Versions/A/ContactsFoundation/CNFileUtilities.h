@class CNProcessSharedLock, NSObject, NSURL;
@protocol OS_os_log, CNFileServices;

@interface CNFileUtilities : NSObject {
    id<CNFileServices> _services;
}

@property (class, readonly) CNFileUtilities *sharedInstance;
@property (class, readonly, nonatomic) CNProcessSharedLock *fileLock;
@property (class, readonly, nonatomic) NSObject<OS_os_log> *log;

@property (readonly) NSURL *addressBookFolderURL;
@property (readonly) NSURL *libraryFolderURL;
@property (readonly) NSURL *cachesFolderURL;
@property (readonly) NSURL *sharedLockDirectoryUrl;

+ (id)initializeFileLock;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)a0;
+ (id)sharedLockDirectoryURLWithFileServices:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isFileAtUrlOnARemoteFileSystem:(id)a0;
- (id)initWithFileServices:(id)a0;
- (id)proxyLockUrlForFileAtUrl:(id)a0;
- (id)sharedLockUrlWithName:(id)a0;

@end

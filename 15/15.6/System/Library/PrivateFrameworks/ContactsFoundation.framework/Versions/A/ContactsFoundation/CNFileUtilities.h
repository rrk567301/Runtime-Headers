@class CNProcessSharedLock;
@protocol CNFileServices;

@interface CNFileUtilities : NSObject {
    id<CNFileServices> _services;
}

@property (class, readonly, nonatomic) CNProcessSharedLock *fileLock;

+ (id)sharedInstance;
+ (id)initializeFileLock;
+ (id)os_log;
+ (id)requestSharedLockDirectoryURLWithFileServices:(id)a0;
+ (id)sharedLockDirectoryURLWithFileServices:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)isFileAtUrlOnARemoteFileSystem:(id)a0;
- (id)initWithFileServices:(id)a0;
- (id)proxyLockUrlForFileAtUrl:(id)a0;
- (id)sharedLockDirectoryUrl;
- (id)sharedLockUrlWithName:(id)a0;

@end

@class NSURL;
@protocol BCSFileManagementProviding;

@interface BCSPathProvider : NSObject

@property (nonatomic) char documentsDirectoryFileProtectionLevelVerified;
@property (nonatomic) char cachesDirectoryFileProtectionLevelVerified;
@property (retain, nonatomic) id<BCSFileManagementProviding> fileManager;
@property (copy, nonatomic) id /* block */ temporaryDirectoryBuilder;
@property (readonly) NSURL *documentsURL;
@property (readonly) NSURL *cachesURL;
@property (readonly) NSURL *tempURL;
@property (readonly) NSURL *brandLogoCacheURL;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)_setupStorageWithBaseFileURL:(id)a0 applyFileProtectionType:(id)a1 verificationToken:(char *)a2;
- (id)_setupStorageWithSearchPathDirectory:(unsigned long long)a0 applyFileProtectionType:(id)a1 verificationToken:(char *)a2;
- (id)initWithFileManager:(id)a0 temporaryDirectoryBuilder:(id /* block */)a1;

@end

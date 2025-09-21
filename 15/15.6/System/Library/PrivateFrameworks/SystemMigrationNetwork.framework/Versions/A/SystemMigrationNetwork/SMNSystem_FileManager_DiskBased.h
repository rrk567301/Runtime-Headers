@class NSURL, NSString;

@interface SMNSystem_FileManager_DiskBased : SMNSystem_FileManager_macOS <SMSystem_FileManagerProtocol>

@property (retain) NSURL *root;
@property (readonly, getter=isFileSystemReady) char fileSystemReady;
@property (readonly) NSURL *slash;
@property (readonly) NSURL *userContentRoot;
@property (readonly) NSURL *userHomeRoot;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;

+ (id)appropriateDiskFileMangerForSystemRoot:(id)a0;

- (void).cxx_destruct;
- (void)cleanup;
- (char)activate;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(char *)a1 makeAvailable:(char)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (id)initAtRoot:(id)a0;

@end

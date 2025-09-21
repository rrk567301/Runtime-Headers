@class NSURL, PKReceipt, NSString;

@interface SMNSystem_FileManager_macOS : NSObject <SMSystem_FileManagerProtocol>

@property (readonly) PKReceipt *templateReceipt;
@property (readonly, getter=isFileSystemReady) char fileSystemReady;
@property (readonly) NSURL *slash;
@property (readonly) NSURL *userContentRoot;
@property (readonly) NSURL *userHomeRoot;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;

- (id)init;
- (void).cxx_destruct;
- (void)cleanup;
- (char)activate;
- (id)bundleInformationAtPaths:(id)a0;
- (char)matchesFileInDataTemplateWithPath:(id)a0 withRelativeTemplatePath:(id)a1;
- (id)pathToRemoteFile:(id)a0 exists:(char *)a1 makeAvailable:(char)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;

@end

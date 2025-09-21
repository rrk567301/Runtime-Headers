@class NSURL, SMSystem_Daemon_Windows, NSString;

@interface SMSystem_FileManager_Windows : NSObject <SMSystem_FileManagerProtocol>

@property (retain) SMSystem_Daemon_Windows *system;
@property (readonly, getter=isFileSystemReady) char fileSystemReady;
@property (readonly) NSURL *slash;
@property (readonly) NSURL *userContentRoot;
@property (readonly) NSURL *userHomeRoot;
@property (readonly) NSString *productVersion;
@property (readonly) NSString *buildVersion;

- (void).cxx_destruct;
- (void)cleanup;
- (char)activate;
- (id)initWithSystem:(id)a0;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(char *)a1 makeAvailable:(char)a2;
- (id)propertiesForWindowsPaths:(id)a0;
- (id)propertiesForWindowsPaths:(id)a0 sizeDirectories:(char)a1;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;
- (unsigned long long)sizeForWindowsPath:(id)a0;
- (char)windowsPathExists:(id)a0;

@end

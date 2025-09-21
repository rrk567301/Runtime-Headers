@interface SMSystem_FileManager_Traditional : SMSystem_FileManager_DiskBased

- (id)init;
- (id)bundleInformationAtPaths:(id)a0;
- (id)pathToRemoteFile:(id)a0 exists:(char *)a1 makeAvailable:(char)a2;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;

@end

@interface SMSystem_FileManager_Traditional : SMSystem_FileManager_DiskBased

- (id)init;
- (id)pathToRemoteFile:(id)a0 exists:(BOOL *)a1 makeAvailable:(BOOL)a2;
- (id)bundleInformationAtPaths:(id)a0;
- (id)resourceValuesForKeys:(id)a0 onPaths:(id)a1 error:(id *)a2;

@end

@class SMMacUser_Daemon, NSSet;

@interface SMCopyEngineFileCopier : SMCopyEngineCopier

@property (weak) SMMacUser_Daemon *remoteUser;
@property (retain) NSSet *relativeExcludedPaths;
@property char copyAsMove;
@property char ignoreBundleVersion;
@property (readonly) NSSet *excludedPaths;

- (void).cxx_destruct;
- (void)updateCompletedFilePermissions:(id)a0;
- (void)finishedFileAtPath:(id)a0;
- (char)postProcessReturningError:(id *)a0;
- (char)preProcessReturningError:(id *)a0;

@end

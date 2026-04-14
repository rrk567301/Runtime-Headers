@class SMMacUser_Daemon, NSSet;

@interface SMCopyEngineFileCopier : SMCopyEngineCopier

@property (weak) SMMacUser_Daemon *remoteUser;
@property (retain) NSSet *relativeExcludedPaths;
@property (readonly) BOOL hasExcludedPaths;
@property BOOL copyAsMove;
@property BOOL ignoreBundleVersion;
@property (readonly) NSSet *excludedPaths;

- (void).cxx_destruct;
- (BOOL)preProcessReturningError:(id *)a0;
- (BOOL)postProcessReturningError:(id *)a0;
- (void)finishedFileAtPath:(id)a0;
- (void)updateCompletedFilePermissions:(id)a0;

@end

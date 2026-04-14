@interface CDFSubsystemDiagnostics : NSObject

@property (readonly) unsigned long long buildEnv;
@property (readonly) BOOL collectCoredumps;

+ (BOOL)collectFileWithRegex:(id)a0 from:(id)a1 to:(id)a2 mostRecent:(unsigned long long)a3;
+ (BOOL)collectFilesWithRegex:(id)a0 from:(id)a1 to:(id)a2;
+ (BOOL)collectFilesWithRegexes:(id)a0 from:(id)a1 to:(id)a2 mostRecent:(unsigned long long)a3;
+ (BOOL)createSubsystemDirectoryStructure:(id)a0 outputDir:(id)a1 subDirectoryList:(id)a2;
+ (BOOL)isCentauriPlatform;
+ (BOOL)isFatalCollection:(id)a0;

- (id)init;
- (BOOL)collectLogsFrom:(id)a0 to:(id)a1 runtimeFlags:(unsigned long long)a2;
- (BOOL)collectStateSnapshotsFrom:(id)a0 to:(id)a1 runtimeFlags:(unsigned long long)a2;

@end

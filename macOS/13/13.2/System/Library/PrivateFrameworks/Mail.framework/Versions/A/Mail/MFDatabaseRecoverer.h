@class NSString, NSCondition;

@interface MFDatabaseRecoverer : NSObject {
    NSCondition *_analysisCondition;
}

@property (copy) NSString *path;
@property long long type;
@property long long analysisResult;
@property (readonly) BOOL fileLocked;
@property (readonly) BOOL aRemoteApplicationIsAccessingTheDatabase;
@property (readonly) BOOL lockFileFound;

+ (id)moveDatabaseToUniquePath:(id)a0;
+ (BOOL)moveDatabaseFromPath:(id)a0 toPath:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)recover;
- (void)_analyzeBusyCondition;
- (id)initWithPath:(id)a0 type:(long long)a1;
- (void)analyzeBusyCondition;
- (void)removeLockFile;
- (void)_removeLocks;
- (id)_moveToUniquePath;
- (void)_moveToOriginalPath:(id)a0;

@end

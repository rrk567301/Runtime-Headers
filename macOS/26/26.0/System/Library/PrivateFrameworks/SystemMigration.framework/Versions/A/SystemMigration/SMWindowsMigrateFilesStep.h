@class SMCopyEngine;

@interface SMWindowsMigrateFilesStep : SMEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;

- (void)cancel;
- (id)prepare;
- (id)description;
- (id)process;
- (void).cxx_destruct;
- (void)copierSuceeded:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (void)setupCopiers;
- (void)setupCopiersForCustomPaths:(id)a0;
- (void)setupFileCopyEngine;

@end

@class SMCopyEngine;

@interface SMWindowsMigrateFilesStep : SMMigrationEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)process;
- (id)prepare;
- (void)setEngine:(id)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierSuceeded:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (void)setupCopiers;
- (void)setupCopiersForCustomPaths:(id)a0;
- (void)setupFileCopyEngine;
- (void)transferRateChanged:(double)a0;

@end

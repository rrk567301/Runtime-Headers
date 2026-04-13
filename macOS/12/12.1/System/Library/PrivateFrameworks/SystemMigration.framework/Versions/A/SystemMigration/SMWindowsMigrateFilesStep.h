@class SMCopyEngine;

@interface SMWindowsMigrateFilesStep : SMMigrationEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;

+ (unsigned long long)finalSizeWithEngine:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)prepare;
- (id)process;
- (id)initWithEngine:(id)a0;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)setupCopiers;
- (void)setupCopiersForCustomPaths:(id)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)copierSuceeded:(id)a0;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;

@end

@class SMCopyEngine, SMWindowsMacPathMapper;

@interface SMWindowsMigrateComponentStep : SMMigrationEngineStep

@property (retain) SMCopyEngine *fileCopyEngine;
@property (retain) SMWindowsMacPathMapper *windowsMacPathMap;

- (void).cxx_destruct;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)prepare;
- (id)process;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (void)copierFailed:(id)a0 error:(id)a1;
- (void)transferRateChanged:(double)a0;
- (void)estimatedTimeRemainingChanged:(double)a0;
- (BOOL)copyEngineShouldContinueByFastChecking:(BOOL)a0;
- (id)initWithEngine:(id)a0 pathMap:(id)a1;

@end

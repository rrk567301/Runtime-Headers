@class NSTimer;

@interface OSIConvertToAPFSElement : OSIInstallQueueElement

@property (retain) NSTimer *conversionTimer;
@property double timeSinceLastUpdate;
@property double conversionElapsedTime;
@property float currentProgress;
@property char didRunTimer;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startTimer;
- (id)operationName;
- (void)endTimer;
- (void)updateProgress;
- (char)runReturningError:(id *)a0;
- (void)manageProgress:(float)a0;
- (char)convertToAPFS:(id)a0 withConvertedDisk:(id *)a1 prebootPath:(id)a2 withError:(id *)a3;
- (char)copyAPFSPreBootFiles:(id)a0 destFolder:(id)a1 apfsUUID:(id)a2;
- (id)createBootFilesFolderReturningPath:(id *)a0;
- (double)estimatedTimeToComplete;
- (char)isValidAPFSPreBootFolder:(id)a0;
- (void)reportData:(id)a0 toInstallerDiagnosticsKey:(long long)a1;

@end

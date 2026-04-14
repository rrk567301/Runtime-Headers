@class NSMutableDictionary, SMMigrateEngine, NSArray, NSProgress, NSMutableArray;

@interface SMMigrationEngineStep : NSObject <SMCopyEngineDelegate>

@property (retain) NSMutableDictionary *progressPercentages;
@property (weak) SMMigrateEngine *engine;
@property (retain) NSMutableArray *warnings;
@property (retain) NSMutableArray *errors;
@property unsigned long long totalSize;
@property unsigned long long totalFileCount;
@property unsigned long long deletedSize;
@property unsigned long long completedSize;
@property unsigned long long completedFileCount;
@property unsigned long long lastCompletedPhase;
@property (readonly) NSArray *copyPaths;
@property (retain) NSProgress *parentProgress;
@property (retain) NSProgress *progress;

+ (id)stringForPhase:(unsigned long long)a0;
+ (unsigned long long)finalSizeAndCount:(unsigned long long *)a0 withEngine:(id)a1;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (void)cancel;
- (id)process;
- (id)prepare;
- (id)initWithEngine:(id)a0;
- (id)warningWithMessage:(id)a0;
- (double)estimatedTimeRemainingForPhase:(unsigned long long)a0;
- (id)progressForKey:(id)a0;
- (void)setProgressPercentage:(double)a0 forPhase:(unsigned long long)a1;
- (void)addProgress:(id)a0 forKey:(id)a1;
- (void)copyFailedToCopyFile:(id)a0 shouldReportError:(BOOL)a1;
- (BOOL)engineStepSupportsResumption;
- (id)errorWithMessage:(id)a0 code:(long long)a1;
- (id)errorWithMessage:(id)a0 code:(long long)a1 underlyingError:(id)a2;
- (double)estimateTimeRemaining;
- (double)estimatedTimeRemainingAfterPhase:(unsigned long long)a0;
- (double)estimatedTimeToComplete;
- (double)estimatedTimeToCompletePhase:(unsigned long long)a0;
- (id)fatalErrorWithMessage:(id)a0;
- (id)fatalErrorWithMessage:(id)a0 underlyingError:(id)a1;
- (BOOL)hasProgressForKey:(id)a0;
- (id)postProcess;
- (id)preProcess;
- (id)preShove;
- (id)progressArrayForKey:(id)a0;
- (void)progressCompletedForKey:(id)a0;
- (id)progressDictionaryForKey:(id)a0;
- (double)progressPercentageForPhase:(unsigned long long)a0;
- (id)resumeProcess;
- (void)setProgress:(id)a0 forKey:(id)a1;
- (id)warningWithMessage:(id)a0 underlyingError:(id)a1;

@end

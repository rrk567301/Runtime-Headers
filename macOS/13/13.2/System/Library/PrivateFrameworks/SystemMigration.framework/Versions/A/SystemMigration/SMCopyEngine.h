@class NSString, NSURL, SMSystem_Daemon, SMUIDGIDTranslator, NSDictionary, NSMutableArray, NSProgress, NSObject, SMMigrationRequest;
@protocol OS_dispatch_queue, SMCopyEngineDelegate;

@interface SMCopyEngine : NSObject

@property unsigned long long size;
@property unsigned long long count;
@property (retain) NSMutableArray *copiers;
@property BOOL encounteredErrors;
@property unsigned long long state;
@property (weak, nonatomic) NSObject<SMCopyEngineDelegate> *delegate;
@property (readonly, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (readonly, nonatomic) NSDictionary *longTermTargetSystemIdentifier;
@property long long throttleSizeUpdate;
@property BOOL delegateRespondsToErrorSelector;
@property BOOL delegateRespondsToShouldContinueSelector;
@property BOOL delegateRespondsToShoveSelector;
@property unsigned long long sandboxUse;
@property (retain) NSMutableArray *transferRateHistory;
@property (retain) NSObject<OS_dispatch_queue> *transferRateHistoryQueue;
@property BOOL hasDiscreteSizes;
@property unsigned long long completedSize;
@property unsigned long long completedCount;
@property double transferRateAtStart;
@property (readonly) SMSystem_Daemon *sourceSystem;
@property (readonly) SMSystem_Daemon *targetSystem;
@property (retain) NSURL *sourceSystemPath;
@property (retain) NSURL *destinationSystemPath;
@property (retain) NSString *errorString;
@property (retain) NSString *progressString;
@property BOOL engineShouldAlwaysFastCheck;
@property (retain) NSProgress *parentProgress;
@property double parentProgressPendingUnits;
@property (retain) NSProgress *progress;
@property BOOL fileErrorEncountered;
@property (retain) SMMigrationRequest *migrationRequest;
@property (retain) SMUIDGIDTranslator *uidGidTranslator;
@property (readonly) BOOL useSandbox;

- (id)description;
- (id)init;
- (BOOL)run;
- (void).cxx_destruct;
- (void)reset;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (double)estimatedTimeRemaining;
- (BOOL)shouldContinue;
- (double)estimatedTimeToComplete;
- (void)setCopySize:(unsigned long long)a0 andCount:(unsigned long long)a1;
- (void)finishedFileAtPath:(id)a0;
- (unsigned long long)copySize;
- (double)transferRate;
- (id)initWithSourceSystem:(id)a0 andDestinationSystem:(id)a1;
- (id)initWithMigrationRequest:(id)a0;
- (void)addCopier:(id)a0;
- (void)addCopiers:(id)a0;
- (BOOL)runWithCopier:(id)a0;
- (void)setUseSandbox:(BOOL)a0;
- (unsigned long long)copyCount;
- (BOOL)shouldContinueButMustCheckFast:(BOOL)a0;
- (id)sourcePaths;
- (id)targetPaths;
- (double)baseTransferRate;
- (double)transferRateForSystem:(id)a0;
- (void)recordTransferRate:(double)a0;
- (void)errorForFileAtPath:(id)a0 shouldReportError:(BOOL)a1;

@end

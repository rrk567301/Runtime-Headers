@class NSString, NSURL, SMSystem_Daemon, SMUIDGIDTranslator, NSDictionary, NSMutableArray, NSObject, SMMigrationRequest;
@protocol OS_dispatch_queue, SMCopyEngineDelegate;

@interface SMCopyEngine : NSObject

@property unsigned long long size;
@property unsigned long long count;
@property (retain) NSMutableArray *copiers;
@property char encounteredErrors;
@property unsigned long long state;
@property (weak, nonatomic) NSObject<SMCopyEngineDelegate> *delegate;
@property (readonly, nonatomic) NSDictionary *longTermSourceSystemIdentifier;
@property (readonly, nonatomic) NSDictionary *longTermTargetSystemIdentifier;
@property long long throttleSizeUpdate;
@property char delegateRespondsToErrorSelector;
@property char delegateRespondsToShouldContinueSelector;
@property char delegateRespondsToShoveSelector;
@property unsigned long long sandboxUse;
@property (retain) NSMutableArray *transferRateHistory;
@property (retain) NSObject<OS_dispatch_queue> *transferRateHistoryQueue;
@property char hasDiscreteSizes;
@property unsigned long long completedSize;
@property unsigned long long completedCount;
@property double transferRateAtStart;
@property (readonly) SMSystem_Daemon *sourceSystem;
@property (readonly) SMSystem_Daemon *targetSystem;
@property (retain) NSURL *sourceSystemPath;
@property (retain) NSURL *destinationSystemPath;
@property (retain) NSString *errorString;
@property char engineShouldAlwaysFastCheck;
@property char fileErrorEncountered;
@property (retain) SMMigrationRequest *migrationRequest;
@property (retain) SMUIDGIDTranslator *uidGidTranslator;
@property (readonly) char useSandbox;

- (id)description;
- (id)init;
- (char)run;
- (void).cxx_destruct;
- (void)reset;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)shouldContinue;
- (char)shouldContinueButMustCheckFast:(char)a0;
- (void)addCopier:(id)a0;
- (void)addCopiers:(id)a0;
- (double)baseTransferRate;
- (unsigned long long)copyCount;
- (unsigned long long)copySize;
- (void)errorForFileAtPath:(id)a0 shouldReportError:(char)a1;
- (void)finishedFileAtPath:(id)a0;
- (id)initWithMigrationRequest:(id)a0;
- (id)initWithSourceSystem:(id)a0 andDestinationSystem:(id)a1;
- (void)recordTransferRate:(double)a0;
- (char)runWithCopier:(id)a0;
- (void)setCopySize:(unsigned long long)a0 andCount:(unsigned long long)a1;
- (void)setUseSandbox:(char)a0;
- (id)sourcePaths;
- (id)targetPaths;
- (double)transferRate;
- (double)transferRateForSystem:(id)a0;

@end

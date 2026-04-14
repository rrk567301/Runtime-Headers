@class NSUUID, NSError, NSDate, NSHashTable, NSString, CKOperationGroup, BRCSyncContext, NSObject, NSMutableArray, BRCThrottle;
@protocol OS_dispatch_group, OS_dispatch_source, OS_os_activity, OS_os_transaction, OS_dispatch_queue, BRCSessionContext;

@interface _BRCOperation : NSOperation {
    id<BRCSessionContext> _sessionContext;
    unsigned char _operationUUID[16];
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_os_transaction> *_executionTransaction;
    NSDate *_finishDate;
    NSDate *_lastTryDate;
    long long _throttleHash;
    NSObject<OS_dispatch_source> *_retryTimer;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subOperations;
    NSObject<OS_os_activity> *_Activity;
    NSMutableArray *_associatedEventMetrics;
    NSString *_personaID;
}

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;
@property (nonatomic) BOOL nonDiscretionary;
@property (nonatomic) BOOL timedOut;
@property (nonatomic) double maxBackoff;
@property (readonly, nonatomic) NSUUID *operationID;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *nextTryDate;
@property (readonly, nonatomic) double executionTimeInSec;
@property (readonly, nonatomic) BRCSyncContext *syncContext;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *highPriorityWaitGroup;
@property (retain, nonatomic) CKOperationGroup *group;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) struct { unsigned long long sectionID; char *function; int line; BOOL ignorePersona; } logSections;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BRCThrottle *operationThrottle;
@property (nonatomic) BRCThrottle *operationFailureThrottle;
@property (nonatomic) double timeout;
@property (copy, nonatomic) id /* block */ mainBlock;
@property (copy, nonatomic) id /* block */ finishBlock;

- (void)schedule;
- (BOOL)shouldRetryForError:(id)a0;
- (void)main;
- (void)finishWithResult:(id)a0 error:(id)a1;
- (void)start;
- (void)dealloc;
- (id)subclassableDescriptionWithContext:(id)a0;
- (BOOL)isConcurrent;
- (void)cancel;
- (id)descriptionWithContext:(id)a0;
- (id)init;
- (id)description;
- (id)createActivity;
- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (void)addDependency:(id)a0;
- (void)_main;
- (BOOL)_finishIfCancelled;
- (void)completedWithResult:(id)a0 error:(id)a1;
- (BOOL)finishIfCancelled;
- (void)_completedWithResult:(id)a0 error:(id)a1;
- (id)stateWithContext:(id)a0;
- (void)addSubOperation:(id)a0 asCompletionOf:(id)a1;
- (void)_addSubOperation:(id)a0 overrideContext:(id)a1 allowsCellularAccess:(id)a2 asCompletionOf:(id)a3;
- (void)_executeWithPreviousError:(id)a0;
- (void)_scheduleExecutionWithPreviousError:(id)a0;
- (void)_setDeviceConfigurationHeaderOnCKOp:(id)a0;
- (void)addSubOperation:(id)a0;
- (void)addSubOperation:(id)a0 overrideContext:(id)a1 allowsCellularAccess:(id)a2;
- (void)associateCKOperationsToEventMetric:(id)a0;
- (void)blockOnHighPriorityOperation:(id)a0;
- (void)cancelAfterDelay:(double)a0;
- (id)initWithName:(id)a0 syncContext:(id)a1 sessionContext:(id)a2;
- (id)initWithName:(id)a0 syncContext:(id)a1 sessionContext:(id)a2 group:(id)a3;
- (id)lastErrorDescription;

@end

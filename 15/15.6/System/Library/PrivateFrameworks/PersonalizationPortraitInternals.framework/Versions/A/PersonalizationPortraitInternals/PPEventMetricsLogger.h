@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface PPEventMetricsLogger : NSObject <NSSecureCoding> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    NSString *_path;
    NSMutableArray *_loggedInteractionsSummary;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
    double _storeCreationDate;
}

@property (class, readonly) char supportsSecureCoding;

+ (id)defaultLogger;
+ (unsigned long long)numberOfDaysBetweenDate:(id)a0 andDate:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileName:(id)a0;
- (void)sendRTCLogsWithCompletion:(id /* block */)a0;
- (id)_createRTCReporting;
- (id)_descriptionForActionType:(unsigned short)a0;
- (id)_descriptionForInterface:(unsigned short)a0;
- (void)logNewInteractionSummaryWithDictionary:(id)a0;
- (id)logsToSend;
- (char)resetLogs;
- (char)storeToDisk;
- (void)updateAndScheduleDiskWrite;
- (void)logEventInteractionForEventWithEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)_descriptionForPPRTCCategory:(unsigned short)a0;
- (char)_incrementInteractionForEventIdentifier:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)_interactionAttributesForEventHighlight:(id)a0;
- (id)_interactionKeyForInterface:(unsigned short)a0 actionType:(unsigned short)a1;
- (char)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)a0;
- (double)_storeAge;
- (id)allowedLogFromLog:(id)a0;
- (id)eventsAndExtraordinaryEventsDictFromDate:(id)a0;
- (void)logEventInteractionForEventHighlight:(id)a0 interface:(unsigned short)a1 actionType:(unsigned short)a2;
- (id)loggedInteractionsSummaryMetrics;

@end

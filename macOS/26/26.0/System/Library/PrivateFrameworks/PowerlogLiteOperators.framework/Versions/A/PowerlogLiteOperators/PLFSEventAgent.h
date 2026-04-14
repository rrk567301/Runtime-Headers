@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventPointDefinitions;
+ (id)entryAggregateDefinitions;

- (void)initOperatorDependancies;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)registerforFSEventNotification;
- (void)stopMonitoring;
- (void)logLogFileName:(id)a0 withName:(id)a1;
- (void).cxx_destruct;

@end

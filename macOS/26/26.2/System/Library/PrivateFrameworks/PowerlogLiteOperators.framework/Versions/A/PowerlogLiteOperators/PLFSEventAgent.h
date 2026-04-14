@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventNoneDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryEventForwardDefinitions;
+ (void)load;
+ (id)entryEventPointDefinitions;

- (void)initOperatorDependancies;
- (void)stopMonitoring;
- (void)startMonitoring;
- (void).cxx_destruct;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)logLogFileName:(id)a0 withName:(id)a1;
- (void)registerforFSEventNotification;
- (id)init;
- (void)dealloc;

@end

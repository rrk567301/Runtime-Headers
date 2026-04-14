@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (void)load;
+ (id)entryEventPointDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventNoneDefinitions;

- (void)initOperatorDependancies;
- (void)startMonitoring;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (void)stopMonitoring;
- (void)dealloc;
- (void)logLogFileName:(id)a0 withName:(id)a1;
- (void).cxx_destruct;
- (void)registerforFSEventNotification;
- (id)init;

@end

@class PLXPCResponderOperatorComposition;

@interface PLFSEventAgent : PLAgent

@property (retain) PLXPCResponderOperatorComposition *fileListResponder;
@property struct __FSEventStream { } *stream;

+ (id)entryEventNoneDefinitions;
+ (void)load;
+ (id)entryEventIntervalDefinitions;
+ (id)entryAggregateDefinitions;
+ (id)entryEventBackwardDefinitions;
+ (id)entryEventForwardDefinitions;
+ (id)entryEventPointDefinitions;

- (void)stopMonitoring;
- (void)logLogFileName:(id)a0 withName:(id)a1;
- (void)startMonitoring;
- (void)addLogFileNameEntry:(BOOL)a0 withType:(id)a1 withName:(id)a2;
- (id)init;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)registerforFSEventNotification;
- (void)dealloc;

@end

@class SKDMetricsJob, NSObject;
@protocol OS_dispatch_queue;

@interface SKGTaskAgent : CSXPCConnection {
    NSObject<OS_dispatch_queue> *_knowledgedQueue;
    SKDMetricsJob *_metricsJob;
}

+ (void)initialize;
+ (id)sharedAgent;

- (BOOL)start;
- (void)_setup;
- (void).cxx_destruct;
- (void)didReceiveMemoryPressureNotification:(unsigned long long)a0;
- (void)didReceiveSignal:(unsigned long long)a0;
- (id)knowledgedQueue;
- (void)_runKnowledgeUpdatingWithJobContext:(id)a0 group:(id)a1 queue:(id)a2 deferBlock:(id /* block */)a3 progressBlock:(id /* block */)a4 checkpointBlock:(id /* block */)a5 completeBlock:(id /* block */)a6 cancelBlock:(id /* block */)a7;
- (void)_runKnowledgeUpdatingWithJobContext:(id)a0 group:(id)a1 queue:(id)a2 delegate:(id)a3;
- (void)beginDebugActivity:(id)a0 event:(long long)a1 name:(const char *)a2 knowledgedQueue:(id)a3;
- (void)beginGraphIndexingTaskWithName:(id)a0 deviceUnlocked:(BOOL)a1 knowledgedQueue:(id)a2 completeBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 deferBlock:(id /* block */)a5;
- (void)beginInferenceTaskWithName:(id)a0 deviceUnlocked:(BOOL)a1 knowledgedQueue:(id)a2 completeBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 deferBlock:(id /* block */)a5;
- (void)beginJournalingTaskWithName:(id)a0 deviceUnlocked:(BOOL)a1 knowledgedQueue:(id)a2 completeBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 deferBlock:(id /* block */)a5;
- (void)beginProcessingTaskWithName:(id)a0 deviceUnlocked:(BOOL)a1 knowledgedQueue:(id)a2 completeBlock:(id /* block */)a3 cancelBlock:(id /* block */)a4 deferBlock:(id /* block */)a5;
- (void)beginReportTaskWithName:(id)a0 deviceUnlocked:(BOOL)a1 knowledgedQueue:(id)a2 progressBlock:(id /* block */)a3 checkpointBlock:(id /* block */)a4 completeBlock:(id /* block */)a5 cancelBlock:(id /* block */)a6 deferBlock:(id /* block */)a7;
- (void)beginTaskWithName:(id)a0 knowledgeEvent:(long long)a1 logMessage:(id)a2 deviceUnlocked:(BOOL)a3 knowledgedQueue:(id)a4 progressBlock:(id /* block */)a5 checkpointBlock:(id /* block */)a6 completeBlock:(id /* block */)a7 cancelBlock:(id /* block */)a8 deferBlock:(id /* block */)a9;
- (void)setKnowledgedQueue:(id)a0;

@end

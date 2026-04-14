@interface SKDScheduler : NSObject {
    void /* unknown type, empty encoding */ _dateProvider;
    void /* unknown type, empty encoding */ _featureFlagProvider;
    void /* unknown type, empty encoding */ _queue;
    void /* unknown type, empty encoding */ _concurrentQueue;
    void /* unknown type, empty encoding */ _constants;
    void /* unknown type, empty encoding */ _pipelineManager;
    void /* unknown type, empty encoding */ _stateManager;
    void /* unknown type, empty encoding */ _backgroundTaskManager;
    void /* unknown type, empty encoding */ _tasks;
    void /* unknown type, empty encoding */ _jobs;
}

- (void).cxx_destruct;
- (id)init;
- (void)setTurboMode:(BOOL)a0;

@end

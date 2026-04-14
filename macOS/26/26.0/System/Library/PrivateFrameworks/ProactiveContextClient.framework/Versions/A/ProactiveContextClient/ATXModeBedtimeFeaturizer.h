@class NSString, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeBedtimeFeaturizer : NSObject <ATXModeFeaturizer> {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideFeatures;
- (void)stopListening;
- (id)_provideFeaturesWithSleepEvent:(id)a0;
- (void)beginListening;
- (void)_processNewSleepEvent:(id)a0;
- (void).cxx_destruct;

@end

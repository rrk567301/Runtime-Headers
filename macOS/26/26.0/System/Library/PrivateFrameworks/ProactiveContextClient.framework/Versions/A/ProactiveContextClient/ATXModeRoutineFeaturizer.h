@class NSString, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeRoutineFeaturizer : NSObject <ATXModeFeaturizer> {
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
- (id)_provideFeaturesWithLocationEvent:(id)a0;
- (void)stopListening;
- (void)_processNewLocationEvent:(id)a0;
- (void)beginListening;
- (void).cxx_destruct;

@end

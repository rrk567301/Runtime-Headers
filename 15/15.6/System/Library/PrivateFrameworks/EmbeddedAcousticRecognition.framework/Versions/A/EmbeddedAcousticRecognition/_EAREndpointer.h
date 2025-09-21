@interface _EAREndpointer : NSObject {
    struct unique_ptr<quasar::HybridEndpointer, std::default_delete<quasar::HybridEndpointer>> { struct __compressed_pair<quasar::HybridEndpointer *, std::default_delete<quasar::HybridEndpointer>> { struct HybridEndpointer *__value_; } __ptr_; } _endpointer;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (char)acceptEagerResultWithFeatures:(id)a0 featuresToLog:(id *)a1;
- (id)defaultServerEndpointFeatures;
- (char)didEndpointWithFeatures:(id)a0 audioTimestamp:(double)a1 featuresToLog:(id *)a2 endpointPosterior:(float *)a3 extraDelayMs:(int *)a4;
- (id)initWithConfiguration:(id)a0 modelVersion:(id *)a1;
- (char)requestSupportedWithSamplingRate:(unsigned long long)a0;
- (void)updateEndpointerDelayedTriggerSwitch:(BOOL)a0;
- (void)updateEndpointerThresholdWithValue:(float)a0;
- (id)initWithConfiguration:(id)a0 delaysTrigger:(char)a1 modelVersion:(id *)a2;

@end

@class NSString, BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue, ATXModeFeaturizerDelegate;

@interface ATXModeDrivingFeaturizer : NSObject <ATXModeFeaturizer> {
    NSObject<OS_dispatch_queue> *_queue;
    BPSSink *_DNDWDSink;
    BMBiomeScheduler *_DNDWDScheduler;
}

@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)provideFeatures;
- (void)beginListening;
- (void)stopListening;
- (void).cxx_destruct;
- (id)_provideFeaturesWithLastDNDWDEvent:(id)a0;
- (id)_fetchMostRecentDNDWDEvent;
- (void)_processNewDNDWDEvent:(id)a0;
- (void)_beginListeningForDNDWDEvents;

@end

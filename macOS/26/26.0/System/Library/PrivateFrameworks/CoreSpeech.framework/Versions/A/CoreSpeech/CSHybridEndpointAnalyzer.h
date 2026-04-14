@class NSString, NSDictionary, CSASRFeatures, CSEnhancedEndpointer;
@protocol CSEndpointAnalyzerDelegate;

@interface CSHybridEndpointAnalyzer : CSEndpointAnalyzerBase <CSEndpointerAssetManagerDelegate> {
    id<CSEndpointAnalyzerDelegate> _delegate;
    unsigned long long _activeChannel;
    NSString *_mhId;
    NSString *_endpointerModelVersion;
}

@property (retain, nonatomic) CSASRFeatures *lastKnownRCFeatures;
@property (nonatomic) double lastKnownRCFeatureLatency;
@property (nonatomic) unsigned long long extraDelayFrequency;
@property (retain, nonatomic) NSDictionary *taskThresholdMap;
@property (nonatomic) unsigned long long audioDeliveryHostTimeDelta;
@property (nonatomic) long long endpointerOperationMode;
@property (retain, nonatomic) CSEnhancedEndpointer *enhancedEndpointer;
@property (retain, nonatomic) NSDictionary *taskEnhancedEndpointerMap;
@property (nonatomic) BOOL enhancedEndpointerDefaultResult;
@property (nonatomic) BOOL didReceiveRCFeatures;
@property (retain, nonatomic) NSDictionary *enhancedEndpointerTaskThresholdMap;
@property (retain, nonatomic) NSString *currentTaskString;
@property (nonatomic) float currentEndpointerThreshold;
@property (nonatomic) BOOL accessibleEndpointerEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setActiveChannel:(unsigned long long)a0;
- (void)setEndpointerModelVersion:(id)a0;
- (void)processAudioSamplesAsynchronously:(id)a0;
- (void)setDelegate:(id)a0;
- (id)endpointerModelVersion;
- (id)init;
- (void)updateEndpointerThreshold:(float)a0;
- (void)processASRFeatures:(id)a0 fromServer:(BOOL)a1;
- (void)resetForNewRequestWithSampleRate:(unsigned long long)a0 recordContext:(id)a1 recordOption:(id)a2 voiceTriggerInfo:(id)a3;
- (void)setMhId:(id)a0;
- (id)mhId;
- (unsigned long long)activeChannel;
- (id)delegate;
- (void).cxx_destruct;
- (void)_generateEndpointerFeaturesWithEffectiveClientProcessedAudioMs:(double)a0 osdFeatures:(id)a1 completion:(id /* block */)a2;
- (BOOL)_isTaskStringAccessible:(id)a0;
- (void)_processEnhancedEndpointerTaskString:(id)a0;
- (void)_readParametersFromHEPAsset:(id)a0;
- (void)_swapEnhancedEndpointerModelForTaskString:(id)a0;
- (BOOL)_updateAccessibleEndpointerThresholdIfNeeded;
- (void)_updateCurrentAsset:(id)a0;
- (void)_updateEndpointerDelayedTrigger:(BOOL)a0;
- (void)_updateEndpointerDelayedTriggerByMhId:(id)a0;
- (void)_updateEndpointerThreshold:(float)a0;
- (void)_updateEnhancedEndpointerDefaultThresholdPartial:(float)a0 defaultThresholdRC:(float)a1 relaxedThresholdPartial:(float)a2 relaxedThresholdRC:(float)a3;
- (BOOL)_useEnhancedEndpointer;
- (void)endpointerAssetManagerDidUpdateAsset:(id)a0;
- (void)endpointerAssetManagerDidUpdateOSDAsset:(id)a0;
- (long long)fetchCurrentEndpointerOperationMode;
- (void)logAnchorMachAbsTime:(unsigned long long)a0 numSamplesProcessedBeforeAnchorTime:(unsigned long long)a1 isAnchorTimeBuffered:(BOOL)a2 audioDeliveryHostTimeDelta:(unsigned long long)a3;
- (void)processFirstAudioPacketTimestamp:(id)a0 firstAudioSampleSensorTimestamp:(unsigned long long)a1;
- (void)processOSDFeatures:(id)a0 withFrameDurationMs:(double)a1 withMHID:(id)a2;
- (void)processRCFeatures:(id)a0;
- (void)processTaskString:(id)a0;
- (void)terminateProcessing;

@end

@class NSObject, NSString, BWPixelBufferPool, BWSceneStabilityMonitor, BWNodeOutput, NSMutableArray, BWMetadataDetectorGatingOutputController;
@protocol OS_dispatch_group, BWMetadataDetectedResultsObserver;

@interface BWMetadataDetectorGatingNode : BWFanOutNode <BWMRCSceneObserver> {
    BWMetadataDetectorGatingOutputController *_mrcOutputController;
    BWMetadataDetectorGatingOutputController *_appClipCodeOutputController;
    BWMetadataDetectorGatingOutputController *_textLocalizationOutputController;
    NSMutableArray *_outputControllers;
    char _lowPowerModeEnabled;
    NSObject<OS_dispatch_group> *_detectorsAvailableGroup;
    char _needsSynchronization;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_outputBufferPool;
    struct { int width; int height; } _outputBufferPoolDimensions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sceneLock;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _qrCodeScene;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _appClipCodeScene;
    struct BWSmartCameraScene { char enabled; char confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char resetTemporalHysteresisAndFilteringOnNextUpdate; char *name; } _textScene;
    BWSceneStabilityMonitor *_sceneStabilityMonitor;
}

@property (readonly, nonatomic) BWNodeOutput *mrcOutput;
@property (readonly, nonatomic) BWNodeOutput *appClipCodeOutput;
@property (readonly, nonatomic) BWNodeOutput *textLocalizationOutput;
@property (readonly, nonatomic) id<BWMetadataDetectedResultsObserver> mrcResultsObserver;
@property (readonly, nonatomic) id<BWMetadataDetectedResultsObserver> appClipCodeResultsObserver;
@property (readonly, nonatomic) id<BWMetadataDetectedResultsObserver> textLocalizationResultsObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)initWithMRCEnabled:(char)a0 appClipCodeEnabled:(char)a1 textLocalizationEnabled:(char)a2 lowPowerModeEnabled:(char)a3 compressed8BitInputEnabled:(char)a4;
- (id)initWithSceneClassifierVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0 mrcEnabled:(char)a1 appClipCodeEnabled:(char)a2 textLocalizationEnabled:(char)a3 lowPowerModeEnabled:(char)a4 compressed8BitInputEnabled:(char)a5;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)sceneDidChangeQRConfidence:(float)a0 appClipCodeConfidence:(float)a1 documentConfidence:(float)a2 textConfidence:(float)a3;

@end

@class NSObject, NSString, BWPixelBufferPool, BWSceneStabilityMonitor, BWNodeOutput, NSMutableArray, BWMetadataDetectorGatingOutputController;
@protocol OS_dispatch_group, BWMetadataDetectedResultsObserver;

@interface BWMetadataDetectorGatingNode : BWFanOutNode <BWMRCSceneObserver> {
    BWMetadataDetectorGatingOutputController *_mrcOutputController;
    BWMetadataDetectorGatingOutputController *_appClipCodeOutputController;
    BWMetadataDetectorGatingOutputController *_textLocalizationOutputController;
    NSMutableArray *_outputControllers;
    BOOL _lowPowerModeEnabled;
    NSObject<OS_dispatch_group> *_detectorsAvailableGroup;
    BOOL _needsSynchronization;
    struct OpaqueVTPixelTransferSession { } *_transferSession;
    BWPixelBufferPool *_outputBufferPool;
    struct { int width; int height; } _outputBufferPoolDimensions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _sceneLock;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _qrCodeScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _appClipCodeScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _qrCodeSceneForAppClipCode;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _appClipCodeSceneWithQRCodes;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _documentScene;
    struct BWSmartCameraScene { BOOL enabled; BOOL confident; float confidenceFilterRatio; float filteredConfidence; float confidenceThreshold; float confidenceHysteresisValueLag; short confidenceHysteresisTemporalLagBeforeConfident; short confidenceHysteresisTemporalLagBeforeNotConfident; short currentTemporalHysteresis; char *name; } _textScene;
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
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)_updateInputRequirements;
- (id)initWithSceneClassifierVersion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; })a0 mrcEnabled:(BOOL)a1 appClipCodeEnabled:(BOOL)a2 textLocalizationEnabled:(BOOL)a3 lowPowerModeEnabled:(BOOL)a4;
- (id)initWithMRCEnabled:(BOOL)a0 appClipCodeEnabled:(BOOL)a1 textLocalizationEnabled:(BOOL)a2 lowPowerModeEnabled:(BOOL)a3;
- (void)_updateNodeOutputPassthroughMode:(int)a0;
- (id)_pixelFormatsSupportedByMRCAlgorithm;
- (void)_updateOutputRequirementsIfNecessary;
- (int)_ensureTransferSession;
- (void)_synchronizeOutputControllersWhenApplicable;
- (struct __CVBuffer { } *)_createOutputPixelBufferFromSbuf:(struct opaqueCMSampleBuffer { } *)a0 appliedPrimaryCaptureRect:(BOOL *)a1;
- (BOOL)_anyOutputShouldApplySceneMotion;
- (BOOL)_anyOutputShouldRunDetection;
- (int)_ensureOutputBufferPoolWithDimensions:(struct { int x0; int x1; })a0;
- (void)sceneDidChangeQRConfidence:(float)a0 appClipCodeConfidence:(float)a1 documentConfidence:(float)a2 textConfidence:(float)a3;

@end

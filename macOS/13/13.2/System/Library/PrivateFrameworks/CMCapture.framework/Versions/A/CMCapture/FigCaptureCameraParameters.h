@class NSDictionary;

@interface FigCaptureCameraParameters : NSObject {
    NSDictionary *_commonDistortionCorrectionParameters;
    NSDictionary *_meteorParameters;
    NSDictionary *_stereoDisparityParameters;
    NSDictionary *_depthProcessingParameters;
    NSDictionary *_landmarksParameters;
    NSDictionary *_learnedMattingParameters;
    NSDictionary *_personSemanticsParameters;
    NSDictionary *_coreImagePortraitFilterParameters;
    NSDictionary *_commonDeepZoomParameters;
}

@property (readonly, nonatomic) int meteorHeadroomProcessingType;
@property (readonly, nonatomic) NSDictionary *cameraParameters;
@property (readonly, nonatomic) NSDictionary *cameraTuningParameters;
@property (readonly, nonatomic) NSDictionary *motionAttachmentsParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationParameters;
@property (readonly, nonatomic) NSDictionary *videoStabilizationSTFParameters;
@property (readonly, nonatomic) NSDictionary *stereoDisparityParameters;
@property (readonly, nonatomic) NSDictionary *commonNRFParameters;
@property (readonly, nonatomic) int nrfVersion;
@property (readonly, nonatomic) int distortionCorrectionVersion;
@property (readonly, nonatomic) NSDictionary *commonVideoGreenGhostMitigationParameters;
@property (readonly, nonatomic) int videoGreenGhostMitigationVersion;
@property (readonly, nonatomic) NSDictionary *photoEncoderParameters;
@property (readonly, nonatomic) int deepZoomVersion;

+ (void)initialize;
+ (id)sharedInstance;
+ (int)stillImageMaxLossyCompressionLevel;
+ (id)sensorIDStringFromModuleInfo:(id)a0;
+ (id)sensorIDStringFromMetadata:(id)a0;
+ (unsigned int)sensorIDFromSensorIDString:(id)a0;
+ (int)previewMaxLossyCompressionLevel;
+ (int)videoDataMaxLossyCompressionLevel;
+ (int)movieFileMaxLossyCompressionLevelForPixelFormat:(unsigned int)a0;
+ (id)sdofTuningParametersForSensorIDDictionary:(id)a0 zoomFactor:(float)a1;

- (void)dealloc;
- (id)init;
- (id)initWithContentsOfFile:(id)a0;
- (int)videoStabilizationProcessorVersion;
- (id)initWithModelSpecificName:(id)a0;
- (id)sensorIDDictionaryForStream:(id)a0;
- (id)sensorIDDictionaryForPortType:(id)a0 sensorIDString:(id)a1;
- (id)focalLengthCharacterizationForStream:(id)a0;
- (int)disparityVersion;
- (int)disparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)fsdNetStereoImagesAlignmentForPortType:(id)a0 sensorIDString:(id)a1;
- (int)focusPixelDisparityVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)depthProcessorVersion;
- (int)mattingVersionForPortType:(id)a0 sensorIDString:(id)a1;
- (int)learnedMattingVersion;
- (int)personSemanticsVersion;
- (id)portraitSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)portraitSceneMonitorVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)sdofRenderingVersionForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (BOOL)portraitPreviewForegroundBlurEnabledForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (int)coreImagePortraitFilterVersion;
- (BOOL)complementMatteSuppressionDecisionWithISPDetectedFaces;
- (int)disparityRefinementTypeForPortType:(id)a0 sensorIDString:(id)a1 zoomFactor:(float)a2;
- (id)actionCameraSceneMonitoringParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)panoramaRequiresLTMLockingForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForVideoForPortType:(id)a0 sensorIDString:(id)a1;
- (BOOL)chromaticDefringingEnabledForSlomoForPortType:(id)a0 sensorIDString:(id)a1;
- (id)chromaticDefringingParametersForPortType:(id)a0 sensorIDString:(id)a1;
- (id)quadraSubPixelSwitchingParametersForPortType:(id)a0 sensorIDString:(id)a1;

@end

@class NSString, NSDictionary, NSArray, NSURL, AVCapturePhotoSettingsInternal_Tundra;

@interface AVCapturePhotoSettings_Tundra : NSObject <NSCopying> {
    AVCapturePhotoSettingsInternal_Tundra *_internal;
}

@property (readonly) long long uniqueID;
@property (readonly, copy) NSDictionary *format;
@property (copy, nonatomic) NSDictionary *rawFileFormat;
@property (readonly) NSString *processedFileType;
@property (readonly) unsigned int rawPhotoPixelFormatType;
@property (readonly) NSString *rawFileType;
@property (nonatomic) long long flashMode;
@property (nonatomic, getter=isAutoRedEyeReductionEnabled) char autoRedEyeReductionEnabled;
@property (nonatomic) long long photoQualityPrioritization;
@property (nonatomic, getter=isAutoStillImageStabilizationEnabled) char autoStillImageStabilizationEnabled;
@property (nonatomic, getter=isAutoVirtualDeviceFusionEnabled) char autoVirtualDeviceFusionEnabled;
@property (nonatomic, getter=isAutoDualCameraFusionEnabled) char autoDualCameraFusionEnabled;
@property (copy, nonatomic) NSArray *virtualDeviceConstituentPhotoDeliveryEnabledDevices;
@property (nonatomic, getter=isDualCameraDualPhotoDeliveryEnabled) char dualCameraDualPhotoDeliveryEnabled;
@property (nonatomic, getter=isHighResolutionPhotoEnabled) char highResolutionPhotoEnabled;
@property (nonatomic) struct { int x0; int x1; } maxPhotoDimensions;
@property (nonatomic, getter=isDepthDataDeliveryEnabled) char depthDataDeliveryEnabled;
@property (nonatomic) char embedsDepthDataInPhoto;
@property (nonatomic, getter=isDepthDataFiltered) char depthDataFiltered;
@property (nonatomic, getter=isCameraCalibrationDataDeliveryEnabled) char cameraCalibrationDataDeliveryEnabled;
@property (nonatomic, getter=isPortraitEffectsMatteDeliveryEnabled) char portraitEffectsMatteDeliveryEnabled;
@property (nonatomic) char embedsPortraitEffectsMatteInPhoto;
@property (copy, nonatomic) NSArray *enabledSemanticSegmentationMatteTypes;
@property (nonatomic) char embedsSemanticSegmentationMattesInPhoto;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSURL *livePhotoMovieFileURL;
@property (copy, nonatomic) NSString *livePhotoVideoCodecType;
@property (copy, nonatomic) NSArray *livePhotoMovieMetadata;
@property (readonly, nonatomic) NSArray *availablePreviewPhotoPixelFormatTypes;
@property (copy, nonatomic) NSDictionary *previewPhotoFormat;
@property (readonly, nonatomic) NSArray *availableEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *embeddedThumbnailPhotoFormat;
@property (readonly, nonatomic) NSArray *availableRawEmbeddedThumbnailPhotoCodecTypes;
@property (copy, nonatomic) NSDictionary *rawEmbeddedThumbnailPhotoFormat;
@property (nonatomic, getter=isAutoContentAwareDistortionCorrectionEnabled) char autoContentAwareDistortionCorrectionEnabled;
@property (nonatomic, getter=isConstantColorEnabled) char constantColorEnabled;
@property (nonatomic, getter=isConstantColorFallbackPhotoDeliveryEnabled) char constantColorFallbackPhotoDeliveryEnabled;
@property (nonatomic, getter=isShutterSoundSuppressionEnabled) char shutterSoundSuppressionEnabled;

+ (long long)uniqueID;
+ (id)photoSettingsFromPhotoSettings:(id)a0;
+ (id)photoSettings;
+ (id)photoSettingsWithFormat:(id)a0;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0 processedFormat:(id)a1;
+ (id)photoSettingsWithRawPixelFormatType:(unsigned int)a0 rawFileType:(id)a1 processedFormat:(id)a2 processedFileType:(id)a3;
+ (char)validateVideoSettings:(id)a0 allowingFeatures:(unsigned long long)a1 validPixelKeys:(id)a2 validPixelFormats:(id)a3 validCodecKeys:(id)a4 validCodecs:(id)a5 exceptionReason:(id *)a6;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (id)init;
- (id)_initWithFormat:(id)a0 processedFileType:(id)a1 uniqueID:(long long)a2 exceptionReason:(id *)a3;
- (char)arePreviewPhotoFormatDimensionsLimitedToDisplayDimensions;
- (unsigned int)formatFourCC;
- (void)setPreviewPhotoFormatDimensionsLimitedToDisplayDimensions:(char)a0;

@end

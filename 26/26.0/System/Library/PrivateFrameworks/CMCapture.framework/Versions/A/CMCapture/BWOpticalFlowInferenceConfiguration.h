@class NSString;

@interface BWOpticalFlowInferenceConfiguration : BWInferenceConfiguration {
    BOOL _propagateColorInput;
}

@property (nonatomic) struct { int width; int height; } inputDimensions;
@property (nonatomic) struct { int width; int height; } outputDimensions;
@property (nonatomic) NSString *portType;
@property (nonatomic) unsigned long long concurrencyWidth;
@property (nonatomic) int inputRotationAngle;
@property (nonatomic) NSString *attachedMediaKeyForPropagatedColorInput;
@property (nonatomic) char colorInputCropMode;
@property (nonatomic) NSString *attachedMediaCropRectKey;
@property (nonatomic) BOOL colorInputFlipHorizontal;
@property (nonatomic) NSString *attachedMediaKeyForColorInput;
@property (nonatomic) struct { int width; int height; } forceIntermediateDimensions;

@end

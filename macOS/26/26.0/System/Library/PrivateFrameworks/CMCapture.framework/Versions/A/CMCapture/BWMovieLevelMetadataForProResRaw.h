@class NSString, NSData;

@interface BWMovieLevelMetadataForProResRaw : NSObject {
    int _isoSpeedRating;
    NSString *_cameraManufacturer;
    NSString *_cameraModelName;
    NSData *_colorTranslationMatrices;
    NSData *_whiteBalanceFactors;
    NSData *_cctAndTintColorMatrices;
    NSData *_lscGains;
    double _shutterSpeedAngle;
    double _exposureTime;
    short _whiteBalanceCCT;
    BOOL _isMetadataValid;
    double _currentFrameRate;
}

- (void)reset;
- (void)dealloc;
- (id)init;
- (id)description;
- (id)proResRawAugmentedMovieLevelMetadataWithMovieLevelMetadata:(id)a0;
- (void)updateMetadataFromSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 withCameraInfo:(id)a1;

@end

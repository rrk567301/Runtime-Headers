@class NSDictionary;

@interface AVAVVideoSettingsVideoOutputSettings : AVVideoOutputSettings <AVReencodedVideoSettingsForFig> {
    NSDictionary *_adaptedVideoCompressionProperties;
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
    BOOL _shouldPrepareEncodedSampleBuffersForPaddedWrites;
}

@property (readonly, nonatomic) unsigned int videoCodecType;
@property (readonly, nonatomic) NSDictionary *videoEncoderSpecification;
@property (readonly, nonatomic) NSDictionary *videoCompressionProperties;
@property (nonatomic) BOOL shouldPrepareEncodedSampleBuffersForPaddedWrites;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (BOOL)_validateVideoCompressionProperties:(id)a0 againstSupportedPropertyDictionary:(id)a1 forCodecType:(id)a2 exceptionReason:(id *)a3;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

- (id)pixelAspectRatioDictionary;
- (void)dealloc;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (int)width;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (int)height;
- (id)initWithAVVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (id)initWithTrustedAVVideoSettingsDictionary:(id)a0;

@end

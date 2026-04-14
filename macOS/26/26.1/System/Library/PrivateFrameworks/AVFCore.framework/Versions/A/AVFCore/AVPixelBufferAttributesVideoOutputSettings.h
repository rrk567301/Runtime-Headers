@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;
@property (readonly, nonatomic) NSDictionary *decompressionProperties;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)cleanApertureDictionary;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (BOOL)willYieldCompressedSamples;
- (void)dealloc;
- (int)height;
- (id)pixelAspectRatioDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (int)width;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;

@end

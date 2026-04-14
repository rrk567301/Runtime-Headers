@class NSDictionary, NSString;

@interface AVPixelBufferAttributesVideoOutputSettings : AVVideoOutputSettings <AVDecodedVideoSettingsForFig> {
    NSDictionary *_VTPixelAspectRatioDictionary;
    NSDictionary *_VTCleanApertureDictionary;
}

@property (readonly, nonatomic) NSDictionary *pixelBufferAttributes;
@property (readonly, nonatomic) NSString *fieldMode;
@property (readonly, nonatomic) NSDictionary *decompressionProperties;

+ (id)_videoOutputSettingsWithVideoSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
+ (id)eligibleOutputSettingsDictionaryKeys;

- (int)height;
- (int)width;
- (id)pixelAspectRatioDictionary;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (BOOL)willYieldCompressedSamples;
- (void)dealloc;

@end

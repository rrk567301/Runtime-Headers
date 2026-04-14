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

- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (BOOL)willYieldCompressedSamples;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (int)height;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (id)cleanApertureDictionary;
- (void)dealloc;
- (int)width;
- (id)pixelAspectRatioDictionary;

@end

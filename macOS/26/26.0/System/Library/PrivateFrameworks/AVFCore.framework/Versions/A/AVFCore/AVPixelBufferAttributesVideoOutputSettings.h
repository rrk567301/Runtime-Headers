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

- (id)pixelAspectRatioDictionary;
- (void)dealloc;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (int)width;
- (id)initWithTrustedPixelBufferAttributes:(id)a0;
- (id)initWithPixelBufferAttributes:(id)a0 exceptionReason:(id *)a1;
- (id)cleanApertureDictionary;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (int)height;

@end

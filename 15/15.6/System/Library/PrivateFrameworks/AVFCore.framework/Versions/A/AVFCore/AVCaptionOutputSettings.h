@class NSDictionary;

@interface AVCaptionOutputSettings : AVOutputSettings {
    NSDictionary *_captionSettingsDictionary;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } captionTimeCodeFrameDuration;
@property (readonly, nonatomic) char useDropFrameTimeCode;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (char)supportsEmptyOutputSettingsDictionary;

- (char)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)compatibleMediaTypes;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)initWithCaptionSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (char)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;
- (char)willYieldCompressedSamples;

@end

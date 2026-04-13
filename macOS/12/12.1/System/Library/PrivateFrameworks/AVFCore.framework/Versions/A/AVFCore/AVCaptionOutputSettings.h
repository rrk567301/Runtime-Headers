@class NSDictionary;

@interface AVCaptionOutputSettings : AVOutputSettings {
    NSDictionary *_captionSettingsDictionary;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } captionTimeCodeFrameDuration;
@property (readonly, nonatomic) BOOL useDropFrameTimeCode;

+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (BOOL)supportsEmptyOutputSettingsDictionary;

- (id)compatibleMediaTypes;
- (BOOL)willYieldCompressedSamples;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;
- (id)initWithCaptionSettingsDictionary:(id)a0 exceptionReason:(id *)a1;

@end

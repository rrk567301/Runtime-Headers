@class NSDictionary;

@interface AVCaptionOutputSettings : AVOutputSettings {
    NSDictionary *_captionSettingsDictionary;
}

@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } captionTimeCodeFrameDuration;
@property (readonly, nonatomic) BOOL useDropFrameTimeCode;

+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (BOOL)supportsEmptyOutputSettingsDictionary;

- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (BOOL)willYieldCompressedSamples;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (id)compatibleMediaTypes;
- (id)initWithCaptionSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;

@end

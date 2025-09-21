@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying>

@property (class, readonly) char supportsEmptyOutputSettingsDictionary;

@property (readonly, nonatomic) NSSet *compatibleMediaTypes;
@property (readonly, nonatomic) char willYieldCompressedSamples;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary;

+ (id)registeredOutputSettingsClasses;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)a0 compatibilityDescription:(id *)a1;
+ (id)defaultOutputSettingsForMediaType:(id)a0;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1;
+ (unsigned long long)validateOutputSettingsDictionary:(id)a0;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (char)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (char)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;
- (id)initWithOutputSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (char)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;

@end

@class NSSet, NSDictionary;

@interface AVOutputSettings : NSObject <NSCopying>

@property (class, readonly) BOOL supportsEmptyOutputSettingsDictionary;

@property (readonly, nonatomic) NSSet *compatibleMediaTypes;
@property (readonly, nonatomic) BOOL willYieldCompressedSamples;
@property (readonly, nonatomic) NSDictionary *outputSettingsDictionary;

+ (id)registeredOutputSettingsClasses;
+ (id)eligibleOutputSettingsDictionaryKeys;
+ (unsigned long long)validateOutputSettingsDictionary:(id)a0;
+ (unsigned long long)_validateOutputSettingsDictionary:(id)a0 compatibilityDescription:(id *)a1;
+ (id)outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1;
+ (id)_outputSettingsWithOutputSettingsDictionary:(id)a0 mediaType:(id)a1 exceptionReason:(id *)a2;
+ (id)defaultOutputSettingsForMediaType:(id)a0;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOutputSettingsDictionary:(id)a0 exceptionReason:(id *)a1;
- (BOOL)canFullySpecifyOutputFormatReturningReason:(id *)a0;
- (BOOL)validateUsingOutputSettingsValidator:(id)a0 reason:(id *)a1;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:(id *)a0;

@end

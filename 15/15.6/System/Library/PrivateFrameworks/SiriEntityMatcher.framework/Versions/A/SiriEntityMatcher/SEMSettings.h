@class SEMLocalization;

@interface SEMSettings : NSObject {
    struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } _assistantEnabled;
}

@property (readonly) SEMLocalization *localization;

+ (id)defaultSettings;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;
+ (char)isUserVaultEnabled;
+ (char)useMediaThresholdFiltering;
+ (char)useSensitiveLogging;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)refresh;
- (char)isAssistantEnabled;
- (char)isEvaluationEnabled;
- (void)setEvaluationEnabled:(char)a0;
- (char)_isSiriUODSupported;
- (id)initWithLocalization:(id)a0 assistantEnabled:(char)a1;
- (char)isSupportedDevicePlatform:(unsigned char)a0;
- (char)isVanillaContainersEnabled;

@end

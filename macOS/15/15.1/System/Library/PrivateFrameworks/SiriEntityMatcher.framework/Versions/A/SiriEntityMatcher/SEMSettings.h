@class SEMLocalization;

@interface SEMSettings : NSObject {
    _Atomic BOOL _assistantEnabled;
}

@property (readonly) SEMLocalization *localization;

+ (id)defaultSettings;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;
+ (BOOL)useSensitiveLogging;

- (void).cxx_destruct;
- (void)refresh;
- (BOOL)isAssistantEnabled;
- (BOOL)isEvaluationEnabled;
- (void)setEvaluationEnabled:(BOOL)a0;
- (BOOL)isUserExclusiveSet:(id)a0;
- (BOOL)_isSiriUODSupported;
- (id)initWithLocalization:(id)a0 assistantEnabled:(BOOL)a1;
- (BOOL)isSupportedDevicePlatform:(unsigned char)a0;

@end

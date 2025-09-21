@class NSSet, CESRSpeechProfileConfig, NSLocale;

@interface CESRSpeechProfileSettings : NSObject {
    NSLocale *_assistantLocale;
    NSSet *_dictationLocales;
    CESRSpeechProfileConfig *_speechProfileConfig;
}

+ (id)defaultSettings;
+ (BOOL)_shouldUpdateOnM11WatchForSets:(id)a0;
+ (BOOL)_isDeviceChargingAboveThreshold;
+ (BOOL)_instanceSupportsAssistant:(unsigned char)a0;
+ (BOOL)_instanceSupportsDictation:(unsigned char)a0;
+ (BOOL)_isAssistantRequired;
+ (BOOL)_isDevicePowerConstrained;
+ (BOOL)_isDictationRequired;
+ (BOOL)_isSupportedAppIntentsIndexedEntityPartition:(id)a0 speechProfileConfig:(id)a1;
+ (id)_requiredAssistantLocale;
+ (id)_requiredDictationLocales;
+ (BOOL)deviceHasFavorablePowerConditions;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;
+ (id)itemTypesRequiringImmediateUpdate;
+ (unsigned long long)updateCadenceForSets:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSupportedSet:(id)a0 instanceOptions:(unsigned char)a1;
- (id)_initWithAssistantLocale:(id)a0 dictationLocales:(id)a1;
- (void)enumerateRequiredInstances:(id /* block */)a0;
- (BOOL)isUserExclusiveSet:(id)a0;
- (id)speechProfileConfig;
- (void)updateRequiredLocales;

@end

@class NSSet, CESRSpeechProfileConfig, NSLocale;

@interface CESRSpeechProfileSettings : NSObject {
    NSLocale *_assistantLocale;
    NSSet *_dictationLocales;
    CESRSpeechProfileConfig *_speechProfileConfig;
}

+ (id)defaultSettings;
+ (char)_instanceSupportsAssistant:(unsigned char)a0;
+ (char)_instanceSupportsDictation:(unsigned char)a0;
+ (char)_isSupportedAppIntentsIndexedEntityPartition:(id)a0 speechProfileConfig:(id)a1;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;

- (void).cxx_destruct;
- (char)isSupportedSet:(id)a0 instanceOptions:(unsigned char)a1;
- (char)_isAssistantRequired;
- (char)_isDictationRequired;
- (void)enumerateRequiredInstances:(id /* block */)a0;
- (id)initWithAssistantLocale:(id)a0 dictationLocales:(id)a1;
- (char)isUserExclusiveSet:(id)a0;
- (char)refreshRequiredLocales:(char)a0;

@end

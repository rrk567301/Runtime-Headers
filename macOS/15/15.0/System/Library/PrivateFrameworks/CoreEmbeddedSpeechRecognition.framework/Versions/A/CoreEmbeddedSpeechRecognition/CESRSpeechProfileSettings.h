@class NSSet, NSLocale;

@interface CESRSpeechProfileSettings : NSObject {
    NSLocale *_assistantLocale;
    NSSet *_dictationLocales;
}

+ (id)defaultSettings;
+ (id)_currentAssistantLocale;
+ (id)_currentDictationLocales;
+ (BOOL)_instanceSupportsAssistant:(unsigned char)a0;
+ (BOOL)_instanceSupportsDictation:(unsigned char)a0;
+ (id)_mapToSpeechProfileLocale:(id)a0;
+ (void)disableOverrideAcceptAllSets;
+ (void)enableOverrideAcceptAllSets;

- (void).cxx_destruct;
- (void)refresh;
- (BOOL)isSupportedSet:(id)a0 instanceOptions:(unsigned char)a1;
- (void)enumerateRequiredInstances:(id /* block */)a0;
- (id)initWithAssistantLocale:(id)a0 dictationLocales:(id)a1;
- (BOOL)isUserExclusiveSet:(id)a0;

@end

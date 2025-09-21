@interface SEMAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (id)currentDictationLanguageCodes;
+ (id)currentSiriLanguageCode;
+ (id)getConformingSharedUserIds;
+ (char)isASRSupported;
+ (char)isAssistantEnabled;
+ (char)isCustomerInstall;
+ (char)isDictationEnabled;
+ (char)isLinkVocabularyEnabled;
+ (char)isOfflineDictationSupported;
+ (char)isSiriUODSupported;
+ (char)isSiriUODwithASROnServerSupported;
+ (char)isSpeechProfileEnabled;

- (id)init;

@end

@interface SEMAssistantSettingsBridge : NSObject

+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isDictationEnabled;
+ (id)buildVersion;
+ (BOOL)isAssistantEnabled;
+ (id)currentDictationLanguageCodes;
+ (id)getConformingSharedUserIds;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isSiriUODSupported;
+ (id)currentSiriLanguageCode;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isCustomerInstall;
+ (BOOL)isASRSupported;
+ (BOOL)isOfflineDictationSupported;

- (id)init;

@end

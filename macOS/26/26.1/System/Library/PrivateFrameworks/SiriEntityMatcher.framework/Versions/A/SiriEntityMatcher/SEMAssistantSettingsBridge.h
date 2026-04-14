@interface SEMAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (BOOL)isAssistantEnabled;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isCustomerInstall;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isDictationEnabled;
+ (id)currentSiriLanguageCode;
+ (BOOL)isASRSupported;
+ (id)getConformingSharedUserIds;
+ (BOOL)isOfflineDictationSupported;
+ (BOOL)isLinkVocabularyEnabled;

- (id)init;

@end

@interface SEMAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (BOOL)isOfflineDictationSupported;
+ (id)currentSiriLanguageCode;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isDictationEnabled;
+ (id)getConformingSharedUserIds;
+ (BOOL)isCustomerInstall;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isASRSupported;

- (id)init;

@end

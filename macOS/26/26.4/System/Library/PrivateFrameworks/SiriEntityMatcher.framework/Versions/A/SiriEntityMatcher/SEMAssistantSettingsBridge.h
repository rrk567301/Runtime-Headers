@interface SEMAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isDictationEnabled;
+ (BOOL)isOfflineDictationSupported;
+ (BOOL)isCustomerInstall;
+ (id)getConformingSharedUserIds;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isSiriUODSupported;
+ (id)currentSiriLanguageCode;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isASRSupported;

- (id)init;

@end

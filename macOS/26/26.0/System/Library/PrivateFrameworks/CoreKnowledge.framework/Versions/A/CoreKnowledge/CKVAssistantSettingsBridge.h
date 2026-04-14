@interface CKVAssistantSettingsBridge : NSObject

+ (id)buildVersion;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isLinkVocabularyEnabled;
+ (id)currentSiriLanguageCode;
+ (BOOL)isDictationEnabled;
+ (BOOL)isSiriUODSupported;
+ (id)getConformingSharedUserIds;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isOfflineDictationSupported;
+ (BOOL)isCustomerInstall;
+ (BOOL)isASRSupported;
+ (BOOL)isSiriUODwithASROnServerSupported;

- (id)init;

@end

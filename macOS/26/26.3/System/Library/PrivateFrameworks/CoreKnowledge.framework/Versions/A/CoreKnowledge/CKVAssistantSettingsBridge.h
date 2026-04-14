@interface CKVAssistantSettingsBridge : NSObject

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
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isASRSupported;

- (id)init;

@end

@interface CKVAssistantSettingsBridge : NSObject

+ (id)_getConformingSharedUserIdsIsATV:(BOOL)a0;
+ (id)currentDictationLanguageCodes;
+ (id)currentSiriLanguageCode;
+ (id)getConformingSharedUserIds;
+ (BOOL)isASRSupported;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isCustomerInstall;
+ (BOOL)isDictationEnabled;
+ (BOOL)isLinkVocabularyEnabled;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isSiriUODwithASROnServerSupported;
+ (BOOL)isSpeechProfileEnabled;

- (id)init;

@end

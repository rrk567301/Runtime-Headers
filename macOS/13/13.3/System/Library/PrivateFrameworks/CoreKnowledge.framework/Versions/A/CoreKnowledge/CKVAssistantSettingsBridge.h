@interface CKVAssistantSettingsBridge : NSObject

+ (BOOL)isUnifiedAssetNamespaceEnabled;
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
+ (BOOL)isSpeechProfileEnabled;

- (id)init;

@end

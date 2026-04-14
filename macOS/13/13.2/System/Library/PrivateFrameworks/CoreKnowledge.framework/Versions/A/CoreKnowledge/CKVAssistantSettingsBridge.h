@interface CKVAssistantSettingsBridge : NSObject

+ (BOOL)isUnifiedAssetNamespaceEnabled;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isASRSupported;
+ (BOOL)isSiriMuxSupported;
+ (id)currentSiriLanguageCode;
+ (id)currentDictationLanguageCodes;
+ (BOOL)isCustomerInstall;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isLinkVocabularyEnabled;
+ (id)getConformingSharedUserIds;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isDictationEnabled;

- (id)init;

@end

@interface CKVAssistantSettingsBridge : NSObject

+ (BOOL)isSiriUODEnabled;
+ (id)currentSiriLanguageCode;
+ (BOOL)isCustomerInstall;

- (id)init;

@end

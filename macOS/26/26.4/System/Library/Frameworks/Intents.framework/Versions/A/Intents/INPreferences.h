@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (id)siriLanguageCode;
+ (id)sharedPreferences;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (long long)siriAuthorizationStatus;

- (id)_init;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)_siriLanguageCode;
- (void)_updateWithExtensionContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (long long)_siriAuthorizationStatus;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;

@end

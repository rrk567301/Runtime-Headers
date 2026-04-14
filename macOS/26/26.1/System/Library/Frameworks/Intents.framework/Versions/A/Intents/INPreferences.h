@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)siriLanguageCode;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;

- (id)_siriLanguageCode;
- (id)_init;
- (void)_updateWithExtensionContext:(id)a0;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void).cxx_destruct;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (long long)_siriAuthorizationStatus;
- (BOOL)_weAreRunningAsAnExtension;
- (id)init;

@end

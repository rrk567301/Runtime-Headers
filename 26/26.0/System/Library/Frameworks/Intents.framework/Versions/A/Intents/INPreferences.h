@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (id)sharedPreferences;
+ (id)siriLanguageCode;
+ (long long)siriAuthorizationStatus;

- (id)_init;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (id)_siriLanguageCode;
- (void)_updateWithExtensionContext:(id)a0;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (id)init;
- (long long)_siriAuthorizationStatus;
- (void).cxx_destruct;

@end

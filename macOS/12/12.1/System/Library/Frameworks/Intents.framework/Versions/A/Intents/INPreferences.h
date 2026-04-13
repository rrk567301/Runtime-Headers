@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (id)siriLanguageCode;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;

- (id)init;
- (void).cxx_destruct;
- (id)_init;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (id)_siriLanguageCode;
- (long long)_siriAuthorizationStatus;
- (void)_updateWithExtensionContext:(id)a0;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;

@end

@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (id)siriLanguageCode;
+ (id)sharedPreferences;
+ (long long)siriAuthorizationStatus;

- (void)_updateWithExtensionContext:(id)a0;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (void)requestSiriAuthorization:(id /* block */)a0;
- (id)_init;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_siriLanguageCode;
- (long long)_siriAuthorizationStatus;
- (id)init;
- (BOOL)_weAreRunningAsAnExtension;

@end

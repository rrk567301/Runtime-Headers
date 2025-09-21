@class TRIClient;

@interface AFSiriDataSharingSensitivityManager : NSObject {
    TRIClient *_client;
}

+ (id)shared;

- (id)init;
- (void).cxx_destruct;
- (char)isOptedOutOfMTE;
- (char)_isOptedOutOfMTEWithSupportsUOD:(char)a0;
- (char)_isRequestSensitiveForSensitiveDomainPolicy;
- (char)_isRequestSensitiveForSensitiveDomainWithSamplingPolicyForLanguage:(id)a0;
- (char)_isRequestSensitiveForUnknownPolicy;
- (char)_isRequestSensitiveWithPolicy:(long long)a0 optInStatus:(long long)a1 siriLanguageCode:(id)a2;
- (char)_isTrialConfigEnabledWithNamespaceId:(int)a0 factorName:(id)a1;
- (char)_isTrialConfigForLogRedactionForMessagesEnabled;
- (void)_registerUpdateHandler;
- (char)isRequestSensitiveWithPolicy:(long long)a0 optInStatus:(long long)a1 siriLanguageCode:(id)a2;

@end

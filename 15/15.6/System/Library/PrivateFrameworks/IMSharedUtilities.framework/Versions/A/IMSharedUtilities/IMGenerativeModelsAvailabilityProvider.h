@interface IMGenerativeModelsAvailabilityProvider : NSObject {
    void /* unknown type, empty encoding */ summarizationUseCaseIdentifier;
    void /* unknown type, empty encoding */ generativePlaygroundUseCaseIdentifier;
    void /* unknown type, empty encoding */ summarizationModelsAvailable;
    void /* unknown type, empty encoding */ generativePlaygroundModelsAvailable;
}

+ (char)generativePlaygroundModelsAvailable;
+ (char)messageSummarizationEnabled;
+ (void)setMessageSummarizationUserPreference:(char)a0;
+ (char)summarizationModelsAvailable;
+ (char)summarizationUserPreferenceEnabled;

- (id)init;
- (void).cxx_destruct;

@end

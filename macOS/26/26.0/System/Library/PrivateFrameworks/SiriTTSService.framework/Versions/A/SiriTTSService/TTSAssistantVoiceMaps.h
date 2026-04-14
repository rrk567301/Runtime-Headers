@class NSDictionary;

@interface TTSAssistantVoiceMaps : NSObject {
    void /* function */ voicesForLanguageMap;
    void /* function */ deprecatedVoicesMap;
    void /* function */ relativePitchOrderForVoicesMap;
    void /* function */ relativeOrderForVoicesMap;
    void /* function */ identifiersForVoicesMap;
}

@property (nonatomic, readonly) NSDictionary *voicesForLanguageMap;
@property (nonatomic, readonly) NSDictionary *deprecatedVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativePitchOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *relativeOrderForVoicesMap;
@property (nonatomic, readonly) NSDictionary *identifiersForVoicesMap;

- (id)init;
- (void).cxx_destruct;

@end

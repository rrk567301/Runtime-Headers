@class NSArray, NSString;

@interface TTSAssistantAsset : NSObject {
    void /* function */ supportedLanguages;
    void /* function */ name;
    void /* function */ identifier;
}

@property (nonatomic, readonly) NSArray *supportedLanguages;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long assistantGender;
@property (nonatomic, readonly) long long assistantOrder;
@property (nonatomic, readonly) BOOL isCustom;
@property (nonatomic, readonly) NSString *primaryLanguage;
@property (nonatomic, readonly) long long gender;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)siriVoiceSimilarInLanguage:(id)a0;

@end

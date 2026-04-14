@class NSString, IMHandle;

@interface IMAutomaticTranslationIndicatorChatItem : IMTranscriptChatItem

@property (readonly, nonatomic) NSString *translationLanguageCode;
@property (readonly, nonatomic) NSString *userTranslationLanguageCode;
@property (readonly, nonatomic) NSString *incomingLanguageCode;
@property (readonly, nonatomic) IMHandle *senderHandle;
@property (readonly, nonatomic) BOOL isShowingTranslationText;
@property (nonatomic) long long translationLanguageStatus;
@property (nonatomic) long long userTranslationLanguageStatus;

- (void).cxx_destruct;
- (id)_initWithTranslationLanguageCode:(id)a0 userLanguageCode:(id)a1 incomingLanguageCode:(id)a2 senderHandle:(id)a3 isShowingTranslationText:(BOOL)a4;

@end

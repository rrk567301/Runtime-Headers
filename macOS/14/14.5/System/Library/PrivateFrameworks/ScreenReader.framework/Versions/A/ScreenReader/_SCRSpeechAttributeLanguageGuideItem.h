@class NSString;

@interface _SCRSpeechAttributeLanguageGuideItem : SCRGuideItem

@property (readonly, nonatomic) BOOL representsAutoDetectLanguage;
@property (readonly, copy, nonatomic) NSString *languageID;
@property (readonly, copy, nonatomic) NSString *displayNameInMatchingLanguage;
@property (readonly, copy, nonatomic) NSString *displayNameInSystemLanguage;

- (void).cxx_destruct;
- (void)addDisplayTitleToRequest:(id)a0;
- (id)initWithLanguageID:(id)a0 guide:(id)a1;
- (BOOL)matchesLanguageID:(id)a0;

@end

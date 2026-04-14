@class NSLocale;

@interface CHCleanUpSpacesStep : CHPostprocessingStepModifyingOriginalTokens

@property (retain, nonatomic) NSLocale *locale;

- (void).cxx_destruct;
- (id)initWithLocale:(id)a0;
- (id)process:(id)a0 options:(id)a1;
- (id)prepareQuoteCountFromLeftContext:(id)a0;
- (id)cleanUpSpacesInToken:(id)a0 leftContext:(id)a1 inString:(id)a2 withQuoteCount:(id)a3;

@end

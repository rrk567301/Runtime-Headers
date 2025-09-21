@interface CDMSiriVocabularySpanMatchService : CDMBaseSpanMatchService

+ (Class)spanMatcherClass;

- (void)updateData:(id)a0;
- (id)handle:(id)a0;
- (id)warmup:(id)a0;
- (id)handleRequestCommandTypeNames;
- (char)isSetupRerunNeededForRequest:(id)a0;
- (id)setupSpanMatcher:(id)a0;
- (char)shouldBeUsedForAsrAlternatives;

@end

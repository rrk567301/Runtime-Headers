@interface SNLPServerNLClassifier : SNLPITFMClassifier

+ (id /* block */)_initializationBlock;
+ (id)classifierWithPathURL:(id)a0 error:(id *)a1;
+ (id)classifierWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 contextVocabularyURL:(id)a3 error:(id *)a4;
+ (id)_classifierWithModelURL:(id)a0 configURL:(id)a1 spanVocabularyURL:(id)a2 contextVocabularyURL:(id)a3 versionURL:(id)a4 error:(id *)a5;
+ (id)_convertSNLCRequest:(id)a0;
+ (id)_convertITFMResponse:(id)a0;

- (id)responseForRequest:(id)a0 error:(id *)a1;
- (id)inferenceResponseForRequest:(id)a0 error:(id *)a1;
- (id)inferenceResponseForRequest:(id)a0;

@end
